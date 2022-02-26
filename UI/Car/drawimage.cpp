#include "drawimage.h"

DrawImage::DrawImage(QWidget *parent) : QWidget(parent)
{
    //tcpSocket = new QTcpSocket;
    cout<<"DrawImage(QWidget *parent) : QWidget(parent)";
    QPalette pal(palette());
    Back_ground=QPixmap(":/icon/res/car_new.jpg");
    Back_ground=Back_ground.scaled(311,201);
    pal.setBrush(backgroundRole(),Back_ground);

    setAutoFillBackground(true);
    setPalette(pal);
    for(int i=0;i<256;i++)
    {
        vcolorTable.append(qRgb(i,i,i));
    }
    //setFixedSize(640,480);
    setFixedSize(311,201);

}


void DrawImage::paintEvent(QPaintEvent *event)
{
    cout<<"paintEventQPaintEvent *event";
    QPainter *p=new QPainter(this);
    p->drawImage(0,0,qimage);
}


void DrawImage::PassImage(QImage &imagedata)
{
     cout<<"tupianQImage &imagedat";
     qimage=imagedata;
}

