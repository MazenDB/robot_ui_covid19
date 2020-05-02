#ifndef HELLOTHREAD_H
#define HELLOTHREAD_H
#include <QThread>
#include "ros/ros.h"
#include "std_msgs/String.h"

#include <sstream>

class HelloThread : public QThread
{
    Q_OBJECT
private:
    void run();
};

#endif // HELLOTHREAD_H
