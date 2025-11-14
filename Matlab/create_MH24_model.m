% 6 EKSENLİ ROBOT MODELİ OLUŞTURUCU
% Bu script, Yaskawa MH24'e 6 eksenli bir robot modeli oluşturur
% ve bunu 'mh24_robot_model' adıyla Workspace'e kaydeder.

clear mh24_robot_model; % Varsa eski modeli temizle

% Robot ağacını oluştur
tree = rigidBodyTree('DataFormat','column','MaxNumBodies',7);
tree.Gravity(3) = -9.81; % Yerçekimi

% Robotun DH parametreleri
% [a, alpha, d, theta]
dhparams = [0.150   pi/2    0.445   0;
            0.760   0       0       0;
            0.150  -pi/2    0       0;
            0       pi/2    0.855   0;
            0      -pi/2    0       0;
            0       0       0.100   0];

% Gövdeleri ve eklemleri oluşturup ağaca ekle
body1 = rigidBody('body1');
jnt1 = rigidBodyJoint('jnt1','revolute');
setFixedTransform(jnt1,dhparams(1,:),'dh');
body1.Joint = jnt1;
addBody(tree,body1,tree.BaseName);

body2 = rigidBody('body2');
jnt2 = rigidBodyJoint('jnt2','revolute');
setFixedTransform(jnt2,dhparams(2,:),'dh');
body2.Joint = jnt2;
addBody(tree,body2, 'body1');

body3 = rigidBody('body3');
jnt3 = rigidBodyJoint('jnt3','revolute');
setFixedTransform(jnt3,dhparams(3,:),'dh');
body3.Joint = jnt3;
addBody(tree,body3, 'body2');

body4 = rigidBody('body4');
jnt4 = rigidBodyJoint('jnt4','revolute');
setFixedTransform(jnt4,dhparams(4,:),'dh');
body4.Joint = jnt4;
addBody(tree,body4, 'body3');

body5 = rigidBody('body5');
jnt5 = rigidBodyJoint('jnt5','revolute');
setFixedTransform(jnt5,dhparams(5,:),'dh');
body5.Joint = jnt5;
addBody(tree,body5, 'body4');

% Son gövde (Uç Efektör / Tool)
body6 = rigidBody('Body6');
jnt6 = rigidBodyJoint('jnt6','revolute');
setFixedTransform(jnt6,dhparams(6,:),'dh');
body6.Joint = jnt6;
addBody(tree,body6, 'body5');

% Modeli Workspace'e 'mh24_robot_model' adıyla ata
assignin('base', 'mh24_robot_model', tree);

disp("'mh24_robot_model'6 eksenli robot modeli oluşturuldu ve Workspace'e eklendi.");
%show(tree); % Robotun yapısını göster
