#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <iostream>


void second_callback(const turtlesim::Pose &msg)
{
	ROS_INFO("%lf, %lf, %lf, %lf, %lf", msg.x, msg.y, msg.theta, msg.linear_velocity, msg.angular_velocity);

}


int main(int argc, char** argv)
{

	ros::init(argc, argv, "turtle_subscriber"); 
	ros::NodeHandle n;                     
	ros::Subscriber subscriber = n.subscribe("turtle1/pose", 1000, second_callback);  

	ros::spin();                        


	return 0;


}



