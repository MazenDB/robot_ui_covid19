/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title;
    QLabel *status;
    QLabel *logo;
    QLabel *label;
    QLabel *frontButton;
    QLabel *backButton;
    QLabel *rightButton;
    QLabel *leftButton;
    QLabel *stopButton;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QLabel *logo_2;
    QLabel *label_3;
    QProgressBar *progressBar;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox;
    QLCDNumber *lcdNumber_2;
    QLabel *label_8;
    QLabel *status_2;
    QLabel *label_6;
    QGroupBox *groupBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(975, 516);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(310, 20, 321, 51));
        QFont font;
        font.setPointSize(29);
        title->setFont(font);
        status = new QLabel(centralwidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(540, 130, 141, 31));
        QFont font1;
        font1.setPointSize(12);
        status->setFont(font1);
        status->setStyleSheet(QStringLiteral(""));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(10, -10, 200, 200));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/ainlogo.png")));
        logo->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 130, 51, 31));
        label->setFont(font1);
        frontButton = new QLabel(centralwidget);
        frontButton->setObjectName(QStringLiteral("frontButton"));
        frontButton->setGeometry(QRect(800, 230, 51, 60));
        frontButton->setCursor(QCursor(Qt::PointingHandCursor));
        frontButton->setFocusPolicy(Qt::ClickFocus);
        frontButton->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/front.png")));
        frontButton->setScaledContents(true);
        backButton = new QLabel(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(800, 310, 51, 60));
        backButton->setCursor(QCursor(Qt::PointingHandCursor));
        backButton->setFocusPolicy(Qt::ClickFocus);
        backButton->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/back.png")));
        backButton->setScaledContents(true);
        rightButton = new QLabel(centralwidget);
        rightButton->setObjectName(QStringLiteral("rightButton"));
        rightButton->setGeometry(QRect(840, 280, 60, 45));
        QFont font2;
        font2.setPointSize(11);
        rightButton->setFont(font2);
        rightButton->setCursor(QCursor(Qt::PointingHandCursor));
        rightButton->setFocusPolicy(Qt::ClickFocus);
        rightButton->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/right.png")));
        rightButton->setScaledContents(true);
        leftButton = new QLabel(centralwidget);
        leftButton->setObjectName(QStringLiteral("leftButton"));
        leftButton->setGeometry(QRect(750, 280, 60, 45));
        leftButton->setCursor(QCursor(Qt::PointingHandCursor));
        leftButton->setFocusPolicy(Qt::ClickFocus);
        leftButton->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/left.png")));
        leftButton->setScaledContents(true);
        stopButton = new QLabel(centralwidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(750, 380, 141, 31));
        stopButton->setFont(font1);
        stopButton->setCursor(QCursor(Qt::PointingHandCursor));
        stopButton->setFocusPolicy(Qt::ClickFocus);
        stopButton->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(238, 238, 236);"));
        stopButton->setTextFormat(Qt::RichText);
        stopButton->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(550, 180, 91, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 180, 51, 21));
        label_2->setFont(font1);
        logo_2 = new QLabel(centralwidget);
        logo_2->setObjectName(QStringLiteral("logo_2"));
        logo_2->setGeometry(QRect(50, 160, 381, 261));
        logo_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/hospital.png")));
        logo_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(480, 230, 61, 21));
        label_3->setFont(font1);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(550, 230, 118, 23));
        progressBar->setValue(24);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 280, 61, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(480, 340, 151, 21));
        label_5->setFont(font1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(460, 99, 221, 321));
        lcdNumber_2 = new QLCDNumber(groupBox);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(110, 250, 91, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 200, 71, 31));
        label_8->setFont(font1);
        status_2 = new QLabel(groupBox);
        status_2->setObjectName(QStringLiteral("status_2"));
        status_2->setGeometry(QRect(90, 190, 111, 31));
        QFont font3;
        font3.setPointSize(15);
        status_2->setFont(font3);
        status_2->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(710, 130, 111, 21));
        label_6->setFont(font1);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(700, 100, 251, 321));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 30, 41, 31));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 80, 89, 25));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 80, 89, 25));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(820, 130, 71, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(480, 360, 71, 21));
        label_7->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        groupBox_2->raise();
        groupBox->raise();
        title->raise();
        status->raise();
        logo->raise();
        label->raise();
        frontButton->raise();
        backButton->raise();
        rightButton->raise();
        leftButton->raise();
        stopButton->raise();
        lcdNumber->raise();
        label_2->raise();
        logo_2->raise();
        label_3->raise();
        progressBar->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        plainTextEdit->raise();
        label_7->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 975, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        title->setText(QApplication::translate("MainWindow", "Covid 19 Robot UI", Q_NULLPTR));
        status->setText(QApplication::translate("MainWindow", "Moving Forward", Q_NULLPTR));
        logo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Status:", Q_NULLPTR));
        frontButton->setText(QString());
        backButton->setText(QString());
        rightButton->setText(QString());
        leftButton->setText(QString());
        stopButton->setText(QApplication::translate("MainWindow", "Emergency Stop", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Speed:", Q_NULLPTR));
        logo_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Battery:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Current ", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Distance to", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Robot status", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Position: ", Q_NULLPTR));
        status_2->setText(QApplication::translate("MainWindow", "Room 212", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Room number:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Robot Navigation", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Go", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Open Door", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Close Door", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "obstacle:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
