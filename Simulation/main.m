%% Config

clear; clc;

DENSITY = 7800;

%% Initialise ROS

%Initialise WSL ROS connection
setenv('ROS_MASTER_URI', 'http://172.21.161.189:11311'); % ROS on WSL IP
setenv('ROS_IP', '192.168.1.116'); %laptops IP
rosinit('http://172.21.161.189:11311'); % same as ROS on WSL IP




%% Send Message Test


% pub0 = rospublisher('/rexrov/thrusters/0/input', 'uuv_gazebo_ros_plugins_msgs/FloatStamped');
% msg0 = rosmessage(pub0);
% msg0.Data = 100; % thrust command value (adjust between allowed range)
% send(pub0, msg0);



%% Install Message Package

% folder_path = 'C:\AUVSimulation\Underwater-Drone\Simulation\matlab_ros_msgs';
% rosgenmsg(folder_path)
% rehash toolboxcache