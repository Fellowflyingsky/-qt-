/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <drawimage.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *connectAction;
    QAction *disconnectAction;
    QAction *adressAction;
    QAction *portAction;
    QAction *settingadressAction;
    QAction *settingportAction;
    QAction *shutdownAction;
    QAction *rebootAction;
    QWidget *centralWidget;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    DrawImage *widgetShow;
    QGroupBox *groupBox_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_picking;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_pickingx;
    QLineEdit *lineEdit_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit2;
    QLineEdit *lineEdit_pickingy;
    QLineEdit *lineEdit_6;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_7;
    QLineEdit *odom_x;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_13;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_8;
    QPushButton *pushButton_41;
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_14;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_13;
    QVBoxLayout *verticalLayout_20;
    QPushButton *pushButton_33;
    QPushButton *pushButton_34;
    QVBoxLayout *verticalLayout_21;
    QLineEdit *client_ip;
    QLineEdit *client_port;
    QGroupBox *groupBox_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_19;
    QVBoxLayout *verticalLayout_25;
    QPushButton *IP_address;
    QPushButton *port;
    QVBoxLayout *verticalLayout_26;
    QLineEdit *ipaddress;
    QLineEdit *ipport;
    QHBoxLayout *horizontalLayout;
    QPushButton *close_server;
    QPushButton *open_server;
    QTextEdit *textEdit_Recv;
    QGroupBox *groupBox;
    QPushButton *logol;
    QPushButton *logol_2;
    QWidget *horizontalLayoutWidget_16;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_14;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_12;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_13;
    QLabel *labelImage;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1368, 766);
        QPalette palette;
        QBrush brush(QColor(170, 85, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        MainWindow->setPalette(palette);
        connectAction = new QAction(MainWindow);
        connectAction->setObjectName(QStringLiteral("connectAction"));
        disconnectAction = new QAction(MainWindow);
        disconnectAction->setObjectName(QStringLiteral("disconnectAction"));
        disconnectAction->setEnabled(false);
        adressAction = new QAction(MainWindow);
        adressAction->setObjectName(QStringLiteral("adressAction"));
        portAction = new QAction(MainWindow);
        portAction->setObjectName(QStringLiteral("portAction"));
        settingadressAction = new QAction(MainWindow);
        settingadressAction->setObjectName(QStringLiteral("settingadressAction"));
        settingportAction = new QAction(MainWindow);
        settingportAction->setObjectName(QStringLiteral("settingportAction"));
        shutdownAction = new QAction(MainWindow);
        shutdownAction->setObjectName(QStringLiteral("shutdownAction"));
        rebootAction = new QAction(MainWindow);
        rebootAction->setObjectName(QStringLiteral("rebootAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(820, 30, 351, 281));
        horizontalLayoutWidget_7 = new QWidget(groupBox_3);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(10, 10, 321, 54));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        label_3 = new QLabel(horizontalLayoutWidget_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        horizontalLayout_10->addWidget(label_3);

        horizontalSpacer_6 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        widgetShow = new DrawImage(groupBox_3);
        widgetShow->setObjectName(QStringLiteral("widgetShow"));
        widgetShow->setGeometry(QRect(20, 70, 311, 201));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(750, 380, 411, 291));
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        layoutWidget = new QWidget(groupBox_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 409, 141));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(groupBox_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 140, 411, 148));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QPalette palette1;
        QBrush brush2(QColor(255, 85, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(85, 170, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton->setPalette(palette1);
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QGroupBox::title{\n"
"font-size: 13px;\n"
"font-weight: bold;\n"
"color: rgb(0, 85, 0);\n"
"}"));
        pushButton->setCheckable(false);

        verticalLayout->addWidget(pushButton);

        pushButton_picking = new QPushButton(layoutWidget1);
        pushButton_picking->setObjectName(QStringLiteral("pushButton_picking"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_picking->setPalette(palette2);
        pushButton_picking->setFont(font1);

        verticalLayout->addWidget(pushButton_picking);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_3->setPalette(palette3);
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_3->addWidget(lineEdit_3);

        lineEdit_pickingx = new QLineEdit(layoutWidget1);
        lineEdit_pickingx->setObjectName(QStringLiteral("lineEdit_pickingx"));

        verticalLayout_3->addWidget(lineEdit_pickingx);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_3->addWidget(lineEdit_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit2 = new QLineEdit(layoutWidget1);
        lineEdit2->setObjectName(QStringLiteral("lineEdit2"));

        verticalLayout_2->addWidget(lineEdit2);

        lineEdit_pickingy = new QLineEdit(layoutWidget1);
        lineEdit_pickingy->setObjectName(QStringLiteral("lineEdit_pickingy"));

        verticalLayout_2->addWidget(lineEdit_pickingy);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);


        horizontalLayout_2->addLayout(verticalLayout_2);

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(330, 380, 421, 291));
        groupBox_5->setFlat(false);
        groupBox_5->setCheckable(false);
        layoutWidget2 = new QWidget(groupBox_5);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 0, 419, 141));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_9->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        layoutWidget3 = new QWidget(groupBox_5);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 140, 421, 178));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_4 = new QPushButton(layoutWidget3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_5->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_5->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_5->addWidget(pushButton_6);

        pushButton_10 = new QPushButton(layoutWidget3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout_5->addWidget(pushButton_10);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        lineEdit_7 = new QLineEdit(layoutWidget3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_6->addWidget(lineEdit_7);

        odom_x = new QLineEdit(layoutWidget3);
        odom_x->setObjectName(QStringLiteral("odom_x"));

        verticalLayout_6->addWidget(odom_x);

        lineEdit_9 = new QLineEdit(layoutWidget3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout_6->addWidget(lineEdit_9);

        lineEdit_13 = new QLineEdit(layoutWidget3);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        verticalLayout_6->addWidget(lineEdit_13);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        pushButton_8 = new QPushButton(layoutWidget3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_8->addWidget(pushButton_8);

        pushButton_41 = new QPushButton(layoutWidget3);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));

        verticalLayout_8->addWidget(pushButton_41);

        pushButton_9 = new QPushButton(layoutWidget3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_8->addWidget(pushButton_9);

        pushButton_11 = new QPushButton(layoutWidget3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_8->addWidget(pushButton_11);


        horizontalLayout_3->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        lineEdit_10 = new QLineEdit(layoutWidget3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout_7->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(layoutWidget3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        verticalLayout_7->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(layoutWidget3);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        verticalLayout_7->addWidget(lineEdit_12);

        lineEdit_14 = new QLineEdit(layoutWidget3);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        verticalLayout_7->addWidget(lineEdit_14);


        horizontalLayout_3->addLayout(verticalLayout_7);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(30, 380, 301, 291));
        groupBox_6->setFlat(false);
        groupBox_6->setCheckable(false);
        layoutWidget4 = new QWidget(groupBox_6);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 404, 46));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);

        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);

        horizontalLayout_14->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_8);

        layoutWidget5 = new QWidget(groupBox_6);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 140, 301, 141));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        pushButton_33 = new QPushButton(layoutWidget5);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));

        verticalLayout_20->addWidget(pushButton_33);

        pushButton_34 = new QPushButton(layoutWidget5);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));

        verticalLayout_20->addWidget(pushButton_34);


        horizontalLayout_13->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        client_ip = new QLineEdit(layoutWidget5);
        client_ip->setObjectName(QStringLiteral("client_ip"));

        verticalLayout_21->addWidget(client_ip);

        client_port = new QLineEdit(layoutWidget5);
        client_port->setObjectName(QStringLiteral("client_port"));

        verticalLayout_21->addWidget(client_port);


        horizontalLayout_13->addLayout(verticalLayout_21);

        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(30, 30, 411, 281));
        groupBox_7->setFlat(false);
        groupBox_7->setCheckable(false);
        verticalLayoutWidget = new QWidget(groupBox_7);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 211));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalSpacer_11 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_11);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        horizontalLayout_20->addWidget(label_6);

        horizontalSpacer_12 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_12);


        verticalLayout_4->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        IP_address = new QPushButton(verticalLayoutWidget);
        IP_address->setObjectName(QStringLiteral("IP_address"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        IP_address->setPalette(palette4);
        IP_address->setFont(font1);
        IP_address->setStyleSheet(QLatin1String("QGroupBox::title{\n"
"font-size: 13px;\n"
"font-weight: bold;\n"
"color: rgb(0, 85, 0);\n"
"}"));
        IP_address->setCheckable(false);

        verticalLayout_25->addWidget(IP_address);

        port = new QPushButton(verticalLayoutWidget);
        port->setObjectName(QStringLiteral("port"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        port->setPalette(palette5);
        port->setFont(font1);

        verticalLayout_25->addWidget(port);


        horizontalLayout_19->addLayout(verticalLayout_25);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        ipaddress = new QLineEdit(verticalLayoutWidget);
        ipaddress->setObjectName(QStringLiteral("ipaddress"));

        verticalLayout_26->addWidget(ipaddress);

        ipport = new QLineEdit(verticalLayoutWidget);
        ipport->setObjectName(QStringLiteral("ipport"));

        verticalLayout_26->addWidget(ipport);


        horizontalLayout_19->addLayout(verticalLayout_26);


        verticalLayout_4->addLayout(horizontalLayout_19);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        close_server = new QPushButton(verticalLayoutWidget);
        close_server->setObjectName(QStringLiteral("close_server"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        close_server->setPalette(palette6);
        close_server->setFont(font1);

        horizontalLayout->addWidget(close_server);

        open_server = new QPushButton(verticalLayoutWidget);
        open_server->setObjectName(QStringLiteral("open_server"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        open_server->setPalette(palette7);
        open_server->setFont(font1);

        horizontalLayout->addWidget(open_server);


        verticalLayout_4->addLayout(horizontalLayout);

        textEdit_Recv = new QTextEdit(groupBox_7);
        textEdit_Recv->setObjectName(QStringLiteral("textEdit_Recv"));
        textEdit_Recv->setGeometry(QRect(10, 220, 381, 51));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(440, 30, 381, 281));
        logol = new QPushButton(groupBox);
        logol->setObjectName(QStringLiteral("logol"));
        logol->setGeometry(QRect(0, 90, 191, 181));
        logol->setStyleSheet(QStringLiteral(""));
        logol_2 = new QPushButton(groupBox);
        logol_2->setObjectName(QStringLiteral("logol_2"));
        logol_2->setGeometry(QRect(200, 90, 181, 181));
        logol_2->setStyleSheet(QStringLiteral(""));
        horizontalLayoutWidget_16 = new QWidget(groupBox);
        horizontalLayoutWidget_16->setObjectName(QStringLiteral("horizontalLayoutWidget_16"));
        horizontalLayoutWidget_16->setGeometry(QRect(0, 10, 390, 81));
        horizontalLayout_21 = new QHBoxLayout(horizontalLayoutWidget_16);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_13 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_13);

        label_7 = new QLabel(horizontalLayoutWidget_16);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        label_7->setFont(font3);

        horizontalLayout_21->addWidget(label_7);

        horizontalSpacer_14 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_14);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(700, 680, 531, 51));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_12 = new QPushButton(horizontalLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_8->addWidget(pushButton_12);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_8->addWidget(pushButton_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_14 = new QPushButton(horizontalLayoutWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        horizontalLayout_7->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(horizontalLayoutWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        horizontalLayout_7->addWidget(pushButton_15);

        pushButton_13 = new QPushButton(horizontalLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        horizontalLayout_7->addWidget(pushButton_13);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        horizontalLayout_5->addLayout(horizontalLayout_8);

        labelImage = new QLabel(centralWidget);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        labelImage->setGeometry(QRect(450, 310, 171, 71));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1368, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        connectAction->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        disconnectAction->setText(QApplication::translate("MainWindow", "\346\226\255\345\274\200", Q_NULLPTR));
        adressAction->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", Q_NULLPTR));
        portAction->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        settingadressAction->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", Q_NULLPTR));
        settingportAction->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        shutdownAction->setText(QApplication::translate("MainWindow", "\345\205\263\346\234\272", Q_NULLPTR));
        rebootAction->setText(QApplication::translate("MainWindow", "\351\207\215\345\220\257", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_3->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\347\233\221\346\216\247", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\347\233\256\346\240\207", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\345\210\235\345\247\213\347\255\211\345\276\205\345\214\272", Q_NULLPTR));
        pushButton_picking->setText(QApplication::translate("MainWindow", "\346\216\245\350\264\247\345\214\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\215\270\350\264\247\345\214\272", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        label_2->setText(QApplication::translate("MainWindow", "\345\260\217\350\275\246\345\217\202\346\225\260", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "X\345\235\220\346\240\207", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Y\345\235\220\346\240\207", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "\350\247\222\345\272\246", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "\350\247\222\351\200\237\345\272\246", Q_NULLPTR));
        pushButton_41->setText(QApplication::translate("MainWindow", "\347\272\277\351\200\237\345\272\246", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "\350\275\246\350\276\206\347\212\266\346\200\201", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "\345\257\274\350\210\252\351\230\266\346\256\265", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257", Q_NULLPTR));
        pushButton_33->setText(QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257IP", Q_NULLPTR));
        pushButton_34->setText(QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\253\257port", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        label_6->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        IP_address->setText(QApplication::translate("MainWindow", "IP\345\234\260\345\235\200", Q_NULLPTR));
        port->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", Q_NULLPTR));
        ipaddress->setText(QString());
        close_server->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        open_server->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        textEdit_Recv->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:12pt; font-weight:600;\">\346\211\223\345\215\260</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        logol->setText(QString());
        logol_2->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "\345\256\201\346\263\242\345\244\247\345\255\246\344\270\212\344\275\215\346\234\272\350\275\257\344\273\266\346\216\247\345\210\266", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "\347\246\201\346\255\242", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\351\200\232\350\241\214", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "\351\232\220\350\227\217", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\345\220\257\345\212\250", Q_NULLPTR));
        labelImage->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
