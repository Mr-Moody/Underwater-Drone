%% Config

clear; clc;

DENSITY = 7800;

%Initialise WSL ROS connection
setenv('ROS_MASTER_URI','http://172.21.161.189:11311');
setenv('ROS_IP','192.168.50.178');
rosinit('http://172.21.161.189:11311');

%folder_path = '\\wsl.localhost\Ubuntu-18.04\home\tmood\catkin_ws\src\uuv_simulator\uuv_gazebo_plugins\uuv_gazebo_ros_plugins_msgs';

% folder_path = 'C:\AUVSimulation\Underwater-Drone\Simulation\matlab_ros_msgs';
% rosgenmsg(folder_path)
% rehash toolboxcache

%% Run Simulator


pub0 = rospublisher('/rexrov/thrusters/0/input', 'uuv_gazebo_ros_plugins_msgs/FloatStamped');
msg0 = rosmessage(pub0);
msg0.Data = 100; % thrust command value (adjust between allowed range)
send(pub0, msg0);



%% UDP Test

% clc;
% 
% disp("Attempting to send UDP message...");
% 
% u = udpport("byte", "IPV4");
% data = [0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8];
% msg = strjoin(arrayfun(@(x) sprintf('%.3f', x), data, 'UniformOutput', false), ',');
% byte_data = uint8(msg);
% write(u, byte_data, "uint8", "172.21.161.189", 5005);