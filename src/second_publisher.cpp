#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <iostream>
#include <cmath>


int main(int argc, char** argv)
{

	ros::init(argc, argv, "second_publisher"); 								
	ros::NodeHandle this_is_nodehandle;                    								  
	geometry_msgs::Twist Twist_name; 								    			  
	ros::Publisher pub__ = this_is_nodehandle.advertise<geometry_msgs::Twist>("second_topic", 10);

	ros::Rate rate(300);          

	double a, b, i;

	ROS_INFO("Put a : \n");
	std::cin >> a;
	ROS_INFO("Put b : \n");
	std::cin >> b;


	while(ros::ok())					
	{
	i = i + 0.001;

	Twist_name.linear.x = a*i;
	Twist_name.linear.y = pow(b, i);
	Twist_name.angular.x = pow(i, i);

	pub__.publish(Twist_name);


	ros::spinOnce();              
	rate.sleep();       
	}

	return 0;
}


