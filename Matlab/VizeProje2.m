                              %%%%%%%%%%%%% Bu proje Barış KAÇİN tarafından hazırlanmıştır.%%%%%%%%%%%%
clc; clear;
run("create_MH24_model.m")
robot = mh24_robot_model;

SimulinkModel = "Robot5.slx";

% 0) Başlangıç eklem açısı (derece)
q0_deg = [0 -45 90 90 -90 0];
q0     = deg2rad(q0_deg(:));   % [6x1]

% 1) Yörünge Planlamaları
P1 = [   0.000         0.5435         0.507   ]';    % 1.Yörünge Planlaması
P2 = [  -0.001         0.548          0.5085  ]';    % 2.Yörünge Planlaması
P3 = [  -0.001         0.548          0.5125  ]';    % 3.Yörünge Planlaması
P4 = [  -0.0005        0.5425         0.5125  ]';    % 4.Yörünge Planlaması
P5 = [   0.000         0.5435         0.507   ]';    % 5.Yörünge Planlaması 
P6 = [   0.041         0.555          0.500   ]';    % 6.Yörünge Planlaması
 
% Hepsini tek matriste toplandı
P_all = [ P1 P2 P3 P4 P5 P6 ];

% 2) Body6 yönelimi (sabit tutuyor)
orientation = roty(180);  

% Her nokta için homojen dönüşüm matrisi (4x4x5)
nPts = size(P_all,2);
Ttargets = repmat(eye(4),1,1,nPts);
for k = 1:nPts
    Ttargets(:,:,k) = [orientation, P_all(:,k); 0 0 0 1];
end

% 3) Tüm noktalar için IK -> eklem açıları
ik = inverseKinematics("RigidBodyTree", robot);
weights = [ 0.25 0.25 0.25 1 1 1 ];

Qwaypoints = zeros(6, 6);   % q0 + 5 nokta = 6 waypoint
Qwaypoints(:,1) = q0;       % ilk waypoint = başlangıç eklem açısı

q_guess = q0;
for k = 1:nPts
    [q_sol, ~] = ik('Body6', Ttargets(:,:,k), weights, q_guess);
    Qwaypoints(:,k+1) = q_sol;   % q1..q5
    q_guess = q_sol;             % bir önceki çözümü sonraki için başlangıç tahmini yap
end
% Qwaypoints: 6x6 (q0,q1,q2,q3,q4,q5)

% 4) Joint-space trajektori (cubicpolytraj ile)
dt        = 0.01;          % zaman adımı
T_segment = 1.0;           % her iki nokta arası süre (1 sn)

timePoints = 0:T_segment:(length(P_all)*T_segment);   % [0 1 2 3 4 5 6]

t_vec = 0:dt:timePoints(end);            % toplam zaman vektörü

% 6xN eklem trajektorisi
[q_traj, ~, ~, ~] = cubicpolytraj(Qwaypoints, timePoints, t_vec);

% 5) q1..q6 timetable oluştur (Simulink Input için)
t_sec = seconds(t_vec');   % zaman (timetable için)

for j = 1:6
    qj    = q_traj(j,:)';                 % [N x 1]
    qj_tt = timetable(t_sec, qj);         % tek sütunlu timetable
    assignin('base', sprintf('q%d',j), qj_tt);   % q1, q2, ..., q6
end

% 6) PD kazanç
Kp = 100*eye(6);
Kd = 20*eye(6);

disp("Simülasyon başlıyor lütfen bekleyin...")
sim(SimulinkModel, t_vec(end));