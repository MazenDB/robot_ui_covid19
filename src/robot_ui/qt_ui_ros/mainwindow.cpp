#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QKeyEvent>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    thread.start();

    qDebug() << "hello from GUI thread ";

    ui->setupUi(this);
    QList<QWidget*> widgets = findChildren<QWidget*>();
    foreach (QWidget* widget, widgets)
        widget->installEventFilter(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::eventFilter(QObject* o, QEvent* e)
{
    if (e->type() == QEvent::KeyPress)
    {
        QKeyEvent* k = static_cast<QKeyEvent*>(e);
        switch (k->key()) {
        case Qt::Key_Up:
            ui->status->setText("Moving Forward");
            thread.stat="forward";
//            stat=1;
            return true;
        case Qt::Key_Down:
            ui->status->setText("Moving Backward");
            thread.stat="backward";
            return true;
        case Qt::Key_Left:
            ui->status->setText("Moving Left");
            thread.stat="left";
            return true;
        case Qt::Key_Right:
            ui->status->setText("Moving Right");
            thread.stat="right";
            return true;
        case Qt::Key_Space:
            ui->status->setText("Emergency Stop");
            thread.stat="emergency";
            return true;
        }
    }
    else if (e->type() == QEvent::KeyRelease)
    {
        QKeyEvent* k = static_cast<QKeyEvent*>(e);
        switch (k->key()) {
        case Qt::Key_Up:
            ui->status->setText("Stopped");
            thread.stat="stopped";
            return true;
        case Qt::Key_Down:
            ui->status->setText("Stopped");
            thread.stat="stopped";
            return true;
        case Qt::Key_Left:
            ui->status->setText("Stopped");
            thread.stat="stopped";
            return true;
        case Qt::Key_Right:
            ui->status->setText("Stopped");
            thread.stat="stopped";
            return true;
        }
    }
    else if (e->type() == QEvent::MouseButtonPress)
    {
        if(o==ui->frontButton)
            ui->status->setText("Moving forward");
        else if(o==ui->backButton)
            ui->status->setText("Moving Backward");
        else if(o==ui->rightButton)
            ui->status->setText("Moving Right");
        else if(o==ui->leftButton)
            ui->status->setText("Moving Left");
        else if(o==ui->stopButton)
            ui->status->setText("Emergency Stop");
            return true;
    }
    else if (e->type() == QEvent::MouseButtonRelease)
    {
        if(o!=ui->stopButton)
            ui->status->setText("Stopped");
            return true;
    }
    return false;
}



