#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <iostream>


void second_callback(const geometry_msgs::Twist &msg)
{
	ROS_INFO("%lf, %lf, %lf", msg.linear.x, msg.linear.y, msg.angular.x);

}


int main(int argc, char** argv)
{

	ros::init(argc, argv, "second_subscriber"); 
	ros::NodeHandle n;                     
	ros::Subscriber subscriber = n.subscribe("second_topic", 1000, second_callback);  



	ros::spin();                        


	return 0;


}



