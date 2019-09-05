
#include <ros/ros.h>
#include <gtest/gtest.h>

TEST(TestSuite, testCase)
{
  std::cout << "Output before stuck" << std::endl;
  ros::Duration(60 * 51).sleep();
  std::cout << "Output after stuck" << std::endl;
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  ros::init(argc, argv, "tester");
  ros::Time::init();
  return RUN_ALL_TESTS();
}