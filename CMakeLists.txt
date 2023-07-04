cmake_minimum_required(VERSION 3.0.2)
project(beginner)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)





add_service_files(
  DIRECTORY srv
  FILES goal_position_msg.srv
  )

generate_messages(
  DEPENDENCIES 
  std_msgs
  )


catkin_package(
  INCLUDE_DIRS include
  LIBRARIES beginner
  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
  include
)

add_executable(first_publisher src/first_publisher.cpp)
add_dependencies(first_publisher ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(first_publisher ${catkin_LIBRARIES})

add_executable(first_subscriber src/first_subscriber.cpp)
add_dependencies(first_subscriber ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(first_subscriber ${catkin_LIBRARIES})

add_executable(second_publisher src/second_publisher.cpp)
add_dependencies(second_publisher ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(second_publisher ${catkin_LIBRARIES})

add_executable(second_subscriber src/second_subscriber.cpp)
add_dependencies(second_subscriber ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(second_subscriber ${catkin_LIBRARIES})

add_executable(turtle_publisher src/turtle_publisher.cpp)
add_dependencies(turtle_publisher ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(turtle_publisher ${catkin_LIBRARIES})

add_executable(turtle_subscriber src/turtle_subscriber.cpp)
add_dependencies(turtle_subscriber ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(turtle_subscriber ${catkin_LIBRARIES})

add_executable(turtle_server src/turtle_server.cpp)
add_dependencies(turtle_server ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(turtle_server ${catkin_LIBRARIES})