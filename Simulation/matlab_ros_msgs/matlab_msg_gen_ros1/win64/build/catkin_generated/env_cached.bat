@echo off
REM generated from catkin/cmake/templates/env.bat.in

if "%1"=="" (
  echo "Usage: env.bat COMMANDS"
  echo "Calling env.bat without arguments is not supported anymore. Instead spawn a subshell and source a setup file manually."
  exit 1
) else (
  call "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/build/catkin_generated/setup_cached.bat"
  %*
)
