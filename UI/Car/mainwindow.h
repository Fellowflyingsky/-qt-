#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QMessageBox>
#include <QThread>
#include <QImage>
#include "qtextcodec.h"
#include <vector>
#include "drawimage.h"

#include <QVBoxLayout>
#include <QHBoxLayout>

#include <QTime>

#define cout qDebug() << "[" << __FILE__ << __LINE__ << "]"
#define IMAGESIZE 921600

//#define DATA_LEN 64


#pragma pack(1)     //设置结构体为1字节对齐
//发送数据的格式
typedef struct _st_sendData
{
    //int header[2];       //帧头（2字节） uchar才能存十六进制数
    int dataLength;        //数据个数（1字节），小于64
    float my_datax;         //数据（小于64字节）
    float my_datay;         //数据（小于64字节）
    int check_sum;         //校验和（1字节） 前面所有字节累加和
}sendData;

#pragma pack()


#pragma pack(1)     //设置结构体为1字节对齐
//发送数据的格式
//typedef struct _st_sendData_unpacking
//{
//    uchar header[2];       //帧头（2字节） uchar才能存十六进制数
//    char dataLength;        //数据个数（1字节），小于64
//    int my_datax[2];         //数据（小于64字节）
//    int my_datay[2];         //数据（小于64字节）
//    uchar check_sum;         //校验和（1字节） 前面所有字节累加和
//}sendData_unpacking;

//#pragma pack()


#pragma pack(1)     //设置结构体为1字节对齐
//发送数据的格式
typedef struct odom_ReceiveData
{
    //uchar header[2];       //帧头（2字节） uchar才能存十六进制数
    //uchar dataLength;        //数据个数（1字节），小于64
    int my_datacheck;
    int my_datax;         //数据（小于64字节）
    int my_datay;         //数据（小于64字节）
    int my_data_odom_quat;         //数据（小于64字节）
//    char my_data_odom_quat[2];         //数据（小于64字节）
    int my_data_linearSpeed_x;         //数据（小于64字节）
//    char my_data_linearSpeed_y[2];         //数据（小于64字节）
//    char my_data_linearSpeed_z[2];         //数据（小于64字节）
//    char my_data_angularSpeed_x[2];         //数据（小于64字节）
//    char my_data_angularSpeed_y[2];         //数据（小于64字节）
    int my_data_angularSpeed_z;         //数据（小于64字节）
    //uchar check_sum;         //校验和（1字节） 前面所有字节累加和
}st_odom_ReceiveData;

#pragma pack()


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QThread *_DBcar;
    void on_pushButton_slinesport1();
    void on_pushButton_slinesport2();
    void on_pushButton_slinesport3();
    void sleep(unsigned int msec);




private:
    Ui::MainWindow *ui;
    int imagecount;
    uchar imagebuffer[IMAGESIZE];
    QImage image_receive;  //注意这里是指针形式
    int imagewidth, imageheight;
    DrawImage *DrawPainter;
    QTcpSocket *tcpSocket ;

    //QImage m_qImage;

    QPixmap m_qPixmap;








signals:


private slots:

    void socket_Read_Data();
    void socket_Read_videoData();
    void socket_Disconnected();
    void on_open_server_clicked();
    void on_pushButton_picking_clicked();
    //void On_Dis_Connected();

    void on_pushButton_initwaiting_clicked();
    void on_pushButton_3_unpacking_clicked();
    // void on_pushButton_slinesport_clicked();
};

#endif // MAINWINDOW_H
