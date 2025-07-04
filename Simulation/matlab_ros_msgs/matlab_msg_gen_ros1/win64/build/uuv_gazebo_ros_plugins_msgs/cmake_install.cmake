# Install script for directory: C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/msg" TYPE FILE FILES
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/msg/FloatStamped.msg"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/msg/ThrusterConversionFcn.msg"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/msg/UnderwaterObjectModel.msg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/srv" TYPE FILE FILES
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/GetFloat.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/GetListParam.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/GetModelProperties.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterConversionFcn.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterEfficiency.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/GetThrusterState.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/SetFloat.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/SetThrusterEfficiency.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/SetThrusterState.srv"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/srv/SetUseGlobalCurrentVel.srv"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/build/uuv_gazebo_ros_plugins_msgs/catkin_generated/installspace/uuv_gazebo_ros_plugins_msgs-msg-paths.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/devel/include/uuv_gazebo_ros_plugins_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "C:/msys64/mingw64/bin/python3.exe" -m compileall "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/devel/lib/site-packages/uuv_gazebo_ros_plugins_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/site-packages" TYPE DIRECTORY FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/devel/lib/site-packages/uuv_gazebo_ros_plugins_msgs")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/build/uuv_gazebo_ros_plugins_msgs/catkin_generated/installspace/uuv_gazebo_ros_plugins_msgs.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/build/uuv_gazebo_ros_plugins_msgs/catkin_generated/installspace/uuv_gazebo_ros_plugins_msgs-msg-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs/cmake" TYPE FILE FILES
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/build/uuv_gazebo_ros_plugins_msgs/catkin_generated/installspace/uuv_gazebo_ros_plugins_msgsConfig.cmake"
    "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/build/uuv_gazebo_ros_plugins_msgs/catkin_generated/installspace/uuv_gazebo_ros_plugins_msgsConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/uuv_gazebo_ros_plugins_msgs" TYPE FILE FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/devel/lib/uuv_gazebo_ros_plugins_msgs_matlab.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/devel/bin/uuv_gazebo_ros_plugins_msgs_matlab.dll")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/m/" TYPE DIRECTORY FILES "C:/AUVSimulation/Underwater-Drone/Simulation/matlab_ros_msgs/matlab_msg_gen_ros1/win64/src/uuv_gazebo_ros_plugins_msgs/m/" FILES_MATCHING REGEX "/[^/]*\\.m$")
endif()

