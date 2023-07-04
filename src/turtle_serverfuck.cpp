#include "ros/ros.h"
#include <iostream>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>

#include "beginner/goal_position_msg.h"
#include "std_srvs/Empty.h"


//서비스 서버 사용법
//서비스 클라이언트 사용법 두가지 (터미널, 코드)
//커스텀서비스 생성



// goal_position 이라는 custom service 를 만들어서 사용했습니다.
// request: x, y
// response: 없음



double turtle_x;
double turtle_y;
/*
void positionCallback(const turtlesim::Pose &msg)
{
	//터틀심 현재위치 받아오기
	turtle_x = msg.x;
	turtle_y = msg.y;
}


//이게 서비스 서버입니다!//
//turtlesim goal position
//터틀심 좌표계 원점 5.544, 5.544, 대충 0부터 10까지 있음
double goal_x = 5.54445;
double goal_y = 5.54445;
bool goal_position_callback(beginner::goal_position_msg::Request  &req,
          beginner::goal_position_msg::Response &res)
{
	goal_x = req.x;
	goal_y = req.y;

	ROS_INFO("Server!    x: %lf, y: %lf", goal_x, goal_y);

	return true;
}
*/

int main(int argc, char** argv)
{
	//이건이제 알잘딱 할 수 있겠죠??
	ros::init(argc, argv, "turtle_Service"); 
	ros::NodeHandle n;                     
/*
	ros::ServiceServer goal_position_server = n.advertiseService("/GOAL_POSITION", goal_position_callback);
	ros::ServiceClient arrived_client = n.serviceClient<std_srvs::Empty>("/clear");

	ros::Publisher turtlepub = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel", 10);
	ros::Subscriber subscriber = n.subscribe("turtle1/pose", 1000, positionCallback);  

	geometry_msgs::Twist twist;
	std_srvs::Empty empty;
	
	
	
	//런치파일 파라미터를 받는 곳
	float x_speed = 1;
	float y_speed = 1;	
	x_speed = n.param<double>("x_speed", 1);
	y_speed = n.param<double>("y_speed", 1);
	
	
	
	
	
	
	ros::Rate loop(100);




	while(ros::ok())
{
	//현재위치와 목표위치 확인해서 터틀심 속도명령 생성
	if(goal_x > turtle_x) twist.linear.x = x_speed;
	else twist.linear.x = - x_speed;

	if(goal_y > turtle_y) twist.linear.y = y_speed;
	else twist.linear.y = - y_speed;

	turtlepub.publish(twist);




		//대충 목표위치 가로세로 0.01 크기의 가상의 사각형 내부에 도달하면 분필 지워줌
		//코드 내부에서 클라이언트를 콜 하는 경우는 보통 if문을 사용함.
		//제어 루프 내부에서 client를 사용하는 것은 매우 지양해야 할 일임.
		//client를 콜 하면, response를 서버에서 받아야 하기 때문에 제어 주기를 해칠 수 있음 (영인이형 슈퍼세이브)
		if(abs(turtle_x - goal_x) < 0.01 && abs(turtle_y - goal_y) < 0.01 ) arrived_client.call(empty);

	ros::spinOnce();
	loop.sleep();
}
*/
	return 0;
}



