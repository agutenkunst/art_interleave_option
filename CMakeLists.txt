cmake_minimum_required(VERSION 2.8.3)
project(art_interleave_option)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rostest
)

###################################
## catkin specific configuration ##
###################################
catkin_package()

###########
## Build ##
###########
include_directories(
  ${catkin_INCLUDE_DIRS}
)

#############
## Testing ##
#############

catkin_add_gtest(stuck_test test/stuck_test.cpp)
target_link_libraries(stuck_test ${catkin_LIBRARIES})
