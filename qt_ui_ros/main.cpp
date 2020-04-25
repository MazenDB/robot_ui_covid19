#include "mainwindow.h"
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "talker");
    ros::NodeHandle n;
    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
    ros::Rate loop_rate(10);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    while (1){

    };
}
