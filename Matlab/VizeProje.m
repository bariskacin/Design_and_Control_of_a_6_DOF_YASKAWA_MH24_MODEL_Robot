%-----------------------------------------------------------------------%
%%%%%%%%%%%% Bu proje Barış KAÇİN tarafından hazırlanmıştır.%%%%%%%%%%%%%
%-----------------------------------------------------------------------%

clc; clear all; % Workspace ve Command Window temizle

run("create_MH24_model.m") % Robot modelini yükle

robot = mh24_robot_model; % Robot modeli

SimulinkModel = "Robot5.slx"; % Simulink modeli

UcIslevciYonelimAcisi = 180; % Uç işlevcinin yönelim açısı

% 0) Başlangıç eklem açısı (derece)
q0_deg = [0 -45 90 90 -90 0];
q0 = deg2rad(q0_deg(:)); % [6x1]

% 1) Yörünge Planlamaları
P1 = [  0.0000   0.5435   0.5070 ]';  % 1.Yörünge Planlaması
P2 = [ -0.0010   0.5480   0.5085 ]';  % 2.Yörünge Planlaması
P3 = [ -0.0010   0.5480   0.5125 ]';  % 3.Yörünge Planlaması
P4 = [ -0.0005   0.5425   0.5125 ]';  % 4.Yörünge Planlaması
P5 = [  0.0000   0.5435   0.5070 ]';  % 5.Yörünge Planlaması
P6 = [  0.0410   0.5550   0.5000 ]';  % 6.Yörünge Planlaması (Robot başlangıç konumuna geri döner)

% P0, P6 ile aynı konumda (başlangıç konumu için yörünge planlaması)
P0 = P6;   % 0.Yörünge Planlaması (P6 ile aynı)

% Bütün yörünge planlamalarını tek matriste topla
P_all = [ P0 P1 P2 P3 P4 P5 P6 ];

% 2) Uç işlevci yönelimi (sabit)
orientation = roty(UcIslevciYonelimAcisi);

% Her nokta için homojen dönüşüm matrisi (4x4xN)
nPts = size(P_all,2);
Ttargets = repmat(eye(4),1,1,nPts);

% Her hedef nokta için sabit orientation ve o noktaya ait konumu kullanarak 4x4 homojen poz matrisi (Ttargets) oluşturur
for k = 1:nPts
    Ttargets(:,:,k) = [orientation, P_all(:,k); 0 0 0 1];
end

% 3) Tüm noktalar için IK -> eklem açıları
ik = inverseKinematics("RigidBodyTree", robot);
weights = [ 0.25 0.25 0.25 1 1 1 ];

Qwaypoints = zeros(6, 6); % q0 + 5 nokta = 6 waypoint
Qwaypoints(:,1) = q0;     % ilk waypoint = başlangıç eklem açısı
q_guess = q0;

for k = 1:nPts
    [q_sol, ~] = ik('Body6', Ttargets(:,:,k), weights, q_guess);
    Qwaypoints(:,k+1) = q_sol; % q1..q6
    q_guess = q_sol;           % bir önceki çözümü sonraki için başlangıç tahmini yap
end

% 4) Joint-space trajektori (cubicpolytraj ile)
dt = 0.01;           % zaman adımı
T_segment = 1.0;     % her iki nokta arası süre (1 sn)
timePoints = 0:T_segment:(length(P_all)*T_segment); % [0 1 2 3 4 5 6]
t_vec = 0:dt:timePoints(end); % toplam zaman vektörü

% 6xN eklem trajektorisi
[q_traj, ~, ~, ~] = cubicpolytraj(Qwaypoints, timePoints, t_vec);

% 5) q1..q6 timetable oluştur (Simulink Input için)
t_sec = seconds(t_vec'); % zaman (timetable için)

for j = 1:6
    qj    = q_traj(j,:)';       % [N x 1]
    qj_tt = timetable(t_sec, qj); % tek sütunlu timetable
    assignin('base', sprintf('q%d',j), qj_tt); % q1, q2, ..., q6
end

% 6) PD kazanç
Kp = 100*eye(6);
Kd = 20*eye(6);

disp("Simülasyon başlıyor lütfen bekleyin...")
sim(SimulinkModel, t_vec(end)); % Simulink modeli başlat