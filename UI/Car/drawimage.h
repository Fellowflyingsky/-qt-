#ifndef DRAWIMAGE_H
#define DRAWIMAGE_H

#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QPalette>      //设置背景颜色等
#include <QDebug>
#include <QImage>
#include <QBuffer>
//#include <QTcpSocket>

#define cout qDebug() << "[" << __FILE__ << __LINE__ << "]"

//#define IMAGESIZE 921600

class DrawImage : public QWidget
{
    Q_OBJECT
public:
    explicit DrawImage(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void PassImage(QImage &imagedata);
    //QTcpSocket *tcpSocket ;
    //void socket_Read_videoData();

signals:

private:
    QPixmap  Back_ground;
    QImage   qimage;
    QVector<QRgb> vcolorTable;

//    int imagecount;
//    uchar imagebuffer[IMAGESIZE];
//    QImage *image_receive;  //注意这里是指针形式
//    int imagewidth, imageheight;
//    DrawImage *DrawPainter;

private slots:

    //void socket_Read_videoData();
};

#endif // DRAWIMAGE_H
