#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <iostream>


int main(int argc, char** argv)
{

	ros::init(argc, argv, "turtle_publisher"); 								
	ros::NodeHandle this_is_nodehandle;                    								  
	geometry_msgs::Twist Twist_name; 								    			  
	ros::Publisher pub__ = this_is_nodehandle.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 10);

	ros::Rate rate(1);          

	double x_vel, y_vel, z_ang;

	while(ros::ok())					
	{
//---------------move--------------------//
	ROS_INFO("Put x_vel : ");
	std::cin >> x_vel;
	ROS_INFO("Put y_vel : ");
	std::cin >> y_vel;
	ROS_INFO("Put z_ang  :");
	std::cin >> z_ang;

	Twist_name.linear.x = x_vel;
	Twist_name.linear.y = y_vel;
	Twist_name.angular.z = z_ang;

	pub__.publish(Twist_name);
	ros::spinOnce();       
	rate.sleep();     

//---------------stop--------------------//

	Twist_name.linear.x = 0;
	Twist_name.linear.y = 0;
	Twist_name.angular.z = 0;

	ros::spinOnce();              
	}

	return 0;
}


