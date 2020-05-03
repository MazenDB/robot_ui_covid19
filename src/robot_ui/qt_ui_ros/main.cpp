#include "mainwindow.h"

#include <QApplication>
#include "hellothread.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "talker");

//    HelloThread thread;
//    thread.start();

//    qDebug() << "hello from GUI thread ";

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    //thread.wait();  // do not exit before the thread is completed!

}
