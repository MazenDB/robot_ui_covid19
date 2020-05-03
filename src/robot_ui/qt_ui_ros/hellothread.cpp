#include "hellothread.h"

#include <QDebug>
#include "mainwindow.h"
HelloThread::HelloThread(){
    stat="Stopped";
}

void HelloThread::run()
{
//    qDebug()<<stat;
    ros::NodeHandle n;
    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
    ros::Rate loop_rate(10);
    int count = 0;
    while (ros::ok())
    {
        std_msgs::String msg;
        std::stringstream ss;
        ss << "hello world " << stat.toStdString().c_str();
        msg.data = ss.str();
        ROS_INFO("%s", msg.data.c_str());
        chatter_pub.publish(msg);

        ros::spinOnce();

        loop_rate.sleep();
        ++count;

    }
    qDebug() << "hello from worker thread " << thread()->currentThreadId();


}
