#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "hellothread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    HelloThread thread;
private:
    Ui::MainWindow *ui;
    bool eventFilter(QObject* o, QEvent* e);
};
#endif // MAINWINDOW_H
