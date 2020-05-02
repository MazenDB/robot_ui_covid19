#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QKeyEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
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
            return true;
        case Qt::Key_Down:
            ui->status->setText("Moving Backward");
            return true;
        case Qt::Key_Left:
            ui->status->setText("Moving Left");
            return true;
        case Qt::Key_Right:
            ui->status->setText("Moving Right");
            return true;
        case Qt::Key_Space:
            ui->status->setText("Emergency Stop");
            return true;
        }
    }
    else if (e->type() == QEvent::KeyRelease)
    {
        QKeyEvent* k = static_cast<QKeyEvent*>(e);
        switch (k->key()) {
        case Qt::Key_Up:
            ui->status->setText("Stopped");
            return true;
        case Qt::Key_Down:
            ui->status->setText("Stopped");
            return true;
        case Qt::Key_Left:
            ui->status->setText("Stopped");
            return true;
        case Qt::Key_Right:
            ui->status->setText("Stopped");
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



