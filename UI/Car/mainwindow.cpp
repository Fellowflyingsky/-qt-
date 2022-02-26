#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
    ,ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    imagewidth=640;
    imageheight=480;
    imagecount=0;
    tcpSocket = new QTcpSocket();
    this->setMaximumSize(1192,757);
    this->setMinimumSize(1192,757);
    //connect(tcpSocket, &QTcpSocket::readyRead , ui->widget_qdraw , &DrawImage::socket_Read_videoData);
    this->setWindowTitle("FalconAttack Car Control");
    setWindowIcon(QIcon(":/icon/res/car_h.png"));
    ui->logol->setIconSize(QSize(500,250));//设置logo图标大小
    ui->logol->setIcon(QIcon(":/icon/res/bird.jpg"));
    ui->logol->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->logol_2->setIconSize(QSize(70,130));//设置logo图标大小
    ui->logol_2->setIcon(QIcon(":/icon/res/nbu.png"));
    ui->logol_2->setStyleSheet("background-color:rgba(0,0,0,0)");
    ui->ipaddress->setText("192.168.2.4");
    ui->ipport->setText("8888");
    ui->client_ip->setText("192.168.2.4");
    ui->client_port->setText("8888");
    ui->number->setText("1");
    ui->car_state->setText("0");
    ui->nivagition_state->setText("0");

    connect(tcpSocket, &QTcpSocket::disconnected, this, &MainWindow::socket_Disconnected);
   // connect(ui->pushButton_2,SIGNAL(clicked(bool)),this, SLOT(On_Dis_Connected()));
    //connect(tcpSocket, SIGNAL(readyRead()),this,SLOT(socket_Read_videoData()));
    //connect(tcpSocket, &QTcpSocket::readyRead, this, &MainWindow::socket_Read_Data);
    cout<<"ui->client_port->setText";
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::sleep(unsigned int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


void MainWindow::on_open_server_clicked()
{

    if(ui->open_server->text() != tr("打开服务器"))
    {
        QString IP;
        int port;
        //获取IP地址
        IP = ui->ipaddress->text();
        //获取端口号
        port = ui->ipport->text().toInt();
        //取消已有的连接
        tcpSocket->abort();
        //连接服务器
        tcpSocket->connectToHost(IP, port);
        //等待连接成功
        if(!tcpSocket->waitForConnected(30000))
        {
            cout <<"tcpSocket->waitForConnected(30000)";
            QMessageBox::warning(this,QString::fromLocal8Bit("消息"),QString::fromLocal8Bit("连接失败！请重新连接"),QMessageBox::Yes);
            ui->textEdit_Recv->setText(QString::fromLocal8Bit("连接失败\n"));
            cout <<"ui->textEdit_Recv->insertPlainText(连接失败\n)";
            return;
        }
        cout << QString::fromLocal8Bit("ui->textEdit_Recv->insertPlainText(连接成功\n)");
        ui->textEdit_Recv->setText(QString::fromLocal8Bit("连接成功\n"));
        //QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
        QMessageBox::information(this,QString::fromLocal8Bit("消息"),QString::fromLocal8Bit("连接成功"),QMessageBox::Yes);

    }
    else
    {
        //断开连接
        ui->textEdit_Recv->setText(tr("断开连接\n"));
        tcpSocket->disconnectFromHost();
    }
}

//点击发送按钮            考虑发送结构体消息
void MainWindow::on_pushButton_picking_clicked()
{
    sendData st_senddata;
    QByteArray get_datax,get_datay;//, sendTcpData;
    char *tempx = NULL;
    char *tempy = NULL;
    QString strx , stry;
    st_senddata.my_datax = ui->lineEdit_pickingx->text().toFloat();
    st_senddata.my_datay = ui->lineEdit_pickingy->text().toFloat();
    st_senddata.dataLength = sizeof(sendData);//get_datax.length()+get_datay.length();
    cout << st_senddata.dataLength;
    st_senddata.check_sum = st_senddata.dataLength - 4;
    QByteArray sendTcpData((const char*)&st_senddata, st_senddata.dataLength);
    cout << sizeof(sendTcpData);
    cout << sendTcpData.size();
    //sendTcpData.append(st_senddata.check_sum);
    tcpSocket->write(sendTcpData);     //发送完整的QByteArray数组，包含所有结构体信息
    this->tcpSocket->waitForBytesWritten(30000);

    cout << "tcpSocket->write(sendTcpData.data())";
    ui->textEdit_Recv->insertPlainText("send:  X:"+strx+"+Y:"+stry+"\n");
    cout << "ui->textEdit_Recv->insertPlainTextsend:+strx+"<< strx<<"+"<<"stry:"<<stry ;
    cout << "temp = NULL";
    get_datax.clear();
    get_datax.squeeze();
    get_datay.clear();
    get_datay.squeeze();
    sendTcpData.clear();
    cout << "sendTcpData.clear()";
    sendTcpData.squeeze();
    cout << "sendTcpData.squeeze()";
}
//接收数据       考虑：结构体消息强转时消息未充满处理
void MainWindow::socket_Read_Data()
{
    cout << "socket_Read_Data";

    st_odom_ReceiveData st_receiveTcpData, *get_Data;
    QByteArray buffer;
    QString str_my_datax,str_my_datay,str_my_my_data_odom_quat,my_data_linearSpeed_x,my_data_angularSpeed_z;
    //读取缓冲区数据
    while(tcpSocket->waitForReadyRead(100))
    {
        cout<<"tcpSocket->waitForReadyRead(999)";
        buffer.append((QByteArray)tcpSocket->readAll());
    }

    //buffer = tcpSocket->readAll();
    get_Data = (st_odom_ReceiveData*)buffer.data();
    cout<<get_Data->my_datacheck;
    if(get_Data->my_datacheck==1)
    {
    cout << get_Data;
    if(!buffer.isEmpty())
    {
        cout << "!buffer.isEmpty()";
        memset(&st_receiveTcpData,0,sizeof (st_receiveTcpData));
        cout << "get_Data"<<get_Data;
        st_receiveTcpData.my_datax = get_Data->my_datax;
        cout <<"st_receiveTcpData.my_datax[0]"<< st_receiveTcpData.my_datax;
        st_receiveTcpData.my_datay = get_Data->my_datay;
        cout <<"st_receiveTcpData.my_datax[0]"<< st_receiveTcpData.my_datay;
        st_receiveTcpData.my_data_odom_quat = get_Data->my_data_odom_quat;
        cout <<"st_receiveTcpData.my_datax[0]"<< st_receiveTcpData.my_data_odom_quat;
        st_receiveTcpData.my_data_linearSpeed_x = get_Data->my_data_linearSpeed_x;
        cout <<"st_receiveTcpData.my_datax[0]"<< st_receiveTcpData.my_data_linearSpeed_x;
        st_receiveTcpData.my_data_angularSpeed_z = get_Data->my_data_angularSpeed_z;
        cout <<"st_receiveTcpData.my_datax[0]"<< st_receiveTcpData.my_data_angularSpeed_z;
        cout<<"str_my_datax";
        //str_my_datax = QString(QLatin1String(st_receiveTcpData.my_datax));
        QString str_my_datax = QString::number(st_receiveTcpData.my_datax,10);
        QString str_my_datay = QString::number(st_receiveTcpData.my_datay,10);;
        QString str_my_my_data_odom_quat = QString::number(st_receiveTcpData.my_data_odom_quat,10);;
        QString my_data_linearSpeed_x = QString::number(st_receiveTcpData.my_data_linearSpeed_x,10);;
        QString my_data_angularSpeed_z = QString::number(st_receiveTcpData.my_data_angularSpeed_z,10);
        //cout<<"QString(QLatin1Stringx";
        //将my_data在文本框显示
        ui->odom_x->setText(str_my_datax);
        ui->odom_y->setText(str_my_datay);
        ui->odom_angle->setText(str_my_my_data_odom_quat);
        ui->linear_xspeed->setText(my_data_linearSpeed_x);
        ui->angle_zspeed->setText(my_data_angularSpeed_z);
        cout<<str_my_datax;
 }
    }

 }

//连接断开
void MainWindow::socket_Disconnected()
{
    cout << "Disconnected!";
}

void MainWindow::socket_Read_videoData()
{
    cout << "socket_Read_videoData1";
    QByteArray bytes=NULL;
    cout<<tcpSocket->waitForReadyRead(100);
    while(tcpSocket->waitForReadyRead(100))
    {
        //cout<<"tcpSocket->waitForReadyRead(100)";
        bytes.append((QByteArray)tcpSocket->readAll());
    }
    imagecount++;
    cout<<imagecount;
    memcpy(imagebuffer, bytes, IMAGESIZE);
    cout << "memcpy";

    image_receive= QImage(imagebuffer, imagewidth,imageheight,QImage::Format_RGB888);
    m_qPixmap = QPixmap::fromImage(image_receive);

    ui->labelImage->setPixmap(m_qPixmap);
    ui->labelImage->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->labelImage->setScaledContents(true);
    ui->labelImage->show();
 }

void MainWindow::on_pushButton_initwaiting_clicked()
{
    on_pushButton_slinesport3();
    sleep(4000);
    on_pushButton_slinesport2();
    sleep(8000);
    on_pushButton_slinesport1();
    sleep(14000);
    sendData st_senddata;
    QByteArray get_datax,get_datay;//, sendTcpData;
    char *tempx = NULL;
    char *tempy = NULL;
    QString strx , stry;
    st_senddata.my_datax = ui->lineEdit_3_initpickingx->text().toFloat();
    st_senddata.my_datay = ui->lineEdit2_initpickingy->text().toFloat();
    st_senddata.dataLength = sizeof(sendData);//get_datax.length()+get_datay.length();
    cout << st_senddata.dataLength;
    //校验和
    st_senddata.check_sum = st_senddata.dataLength - 4;
    QByteArray sendTcpData((const char*)&st_senddata, st_senddata.dataLength);
    cout << sizeof(sendTcpData);
    cout << sendTcpData.size();
    tcpSocket->write(sendTcpData);     //发送完整的QByteArray数组，包含所有结构体信息
    this->tcpSocket->waitForBytesWritten(30000);

    cout << "tcpSocket->write(sendTcpData.data())";
    ui->textEdit_Recv->insertPlainText("send:  X:"+strx+"+Y:"+stry+"\n");
    cout << "ui->textEdit_Recv->insertPlainTextsend:+strx+"<< strx<<"+"<<"stry:"<<stry ;
    cout << "temp = NULL";
    get_datax.clear();
    get_datax.squeeze();
    get_datay.clear();
    get_datay.squeeze();
    sendTcpData.clear();
    cout << "sendTcpData.clear()";
    sendTcpData.squeeze();
    cout << "sendTcpData.squeeze()";
}

void MainWindow::on_pushButton_3_unpacking_clicked()
{
    sendData st_senddata;
    QByteArray get_datax,get_datay;//, sendTcpData;
    char *tempx = NULL;
    char *tempy = NULL;
    QString strx , stry;
    st_senddata.my_datax = ui->lineEdit_5_unpackingx->text().toFloat();
    st_senddata.my_datay = ui->lineEdit_6_unpackingy->text().toFloat();
    st_senddata.dataLength = sizeof(sendData);//get_datax.length()+get_datay.length();
    cout << st_senddata.dataLength;
    //校验和
    st_senddata.check_sum = st_senddata.dataLength - 4;
    QByteArray sendTcpData((const char*)&st_senddata, st_senddata.dataLength);
    cout << sizeof(sendTcpData);
    cout << sendTcpData.size();
    tcpSocket->write(sendTcpData);     //发送完整的QByteArray数组，包含所有结构体信息
    this->tcpSocket->waitForBytesWritten(30000);

    cout << "tcpSocket->write(sendTcpData.data())";
    ui->textEdit_Recv->insertPlainText("send:  X:"+strx+"+Y:"+stry+"\n");
    cout << "ui->textEdit_Recv->insertPlainTextsend:+strx+"<< strx<<"+"<<"stry:"<<stry ;
    cout << "temp = NULL";
    get_datax.clear();
    get_datax.squeeze();
    get_datay.clear();
    get_datay.squeeze();
    sendTcpData.clear();
    cout << "sendTcpData.clear()";
    sendTcpData.squeeze();
    cout << "sendTcpData.squeeze()";
}

void MainWindow::on_pushButton_slinesport1()
{
    sendData st_senddata;
    QByteArray get_datax,get_datay;//, sendTcpData;
    char *tempx = NULL;
    char *tempy = NULL;
    QString strx , stry;
    st_senddata.my_datax = -1.879 ;//坐标获取
    st_senddata.my_datay = -0.652;
    st_senddata.dataLength = sizeof(sendData);//get_datax.length()+get_datay.length();
    cout << st_senddata.dataLength;
    //校验和
    st_senddata.check_sum = st_senddata.dataLength - 4;
    QByteArray sendTcpData((const char*)&st_senddata, st_senddata.dataLength);
    cout << sizeof(sendTcpData);
    cout << sendTcpData.size();
    tcpSocket->write(sendTcpData);     //发送完整的QByteArray数组，包含所有结构体信息
    this->tcpSocket->waitForBytesWritten(30000);

    cout << "tcpSocket->write(sendTcpData.data())";
    ui->textEdit_Recv->insertPlainText("send:  X:"+strx+"+Y:"+stry+"\n");
    cout << "ui->textEdit_Recv->insertPlainTextsend:+strx+"<< strx<<"+"<<"stry:"<<stry ;
    cout << "temp = NULL";
    get_datax.clear();
    get_datax.squeeze();
    get_datay.clear();
    get_datay.squeeze();
    sendTcpData.clear();
    cout << "sendTcpData.clear()";
    sendTcpData.squeeze();
    cout << "sendTcpData.squeeze()";
}

void MainWindow::on_pushButton_slinesport2()
{
    sendData st_senddata;
    QByteArray get_datax,get_datay;//, sendTcpData;
    char *tempx = NULL;
    char *tempy = NULL;
    QString strx , stry;
    st_senddata.my_datax = 1.073 ;//坐标获取
    st_senddata.my_datay = -5.360;
    st_senddata.dataLength = sizeof(sendData);//get_datax.length()+get_datay.length();
    cout << st_senddata.dataLength;
    //校验和
    st_senddata.check_sum = st_senddata.dataLength - 4;
    QByteArray sendTcpData((const char*)&st_senddata, st_senddata.dataLength);
    cout << sizeof(sendTcpData);
    cout << sendTcpData.size();
    tcpSocket->write(sendTcpData);     //发送完整的QByteArray数组，包含所有结构体信息
    this->tcpSocket->waitForBytesWritten(30000);

    cout << "tcpSocket->write(sendTcpData.data())";
    ui->textEdit_Recv->insertPlainText("send:  X:"+strx+"+Y:"+stry+"\n");
    cout << "ui->textEdit_Recv->insertPlainTextsend:+strx+"<< strx<<"+"<<"stry:"<<stry ;
    cout << "temp = NULL";
    get_datax.clear();
    get_datax.squeeze();
    get_datay.clear();
    get_datay.squeeze();
    sendTcpData.clear();
    cout << "sendTcpData.clear()";
    sendTcpData.squeeze();
    cout << "sendTcpData.squeeze()";
}
void MainWindow::on_pushButton_slinesport3()
{
    sendData st_senddata;
    QByteArray get_datax,get_datay;//, sendTcpData;
    char *tempx = NULL;
    char *tempy = NULL;
    QString strx , stry;
    st_senddata.my_datax = 0.093 ;//坐标获取
    st_senddata.my_datay = -6.979;
    st_senddata.dataLength = sizeof(sendData);//get_datax.length()+get_datay.length();
    cout << st_senddata.dataLength;
    //校验和
    st_senddata.check_sum = st_senddata.dataLength - 4;
    QByteArray sendTcpData((const char*)&st_senddata, st_senddata.dataLength);
    cout << sizeof(sendTcpData);
    cout << sendTcpData.size();
    tcpSocket->write(sendTcpData);     //发送完整的QByteArray数组，包含所有结构体信息
    this->tcpSocket->waitForBytesWritten(30000);

    cout << "tcpSocket->write(sendTcpData.data())";
    ui->textEdit_Recv->insertPlainText("send:  X:"+strx+"+Y:"+stry+"\n");
    cout << "ui->textEdit_Recv->insertPlainTextsend:+strx+"<< strx<<"+"<<"stry:"<<stry ;
    cout << "temp = NULL";
    get_datax.clear();
    get_datax.squeeze();
    get_datay.clear();
    get_datay.squeeze();
    sendTcpData.clear();
    cout << "sendTcpData.clear()";
    sendTcpData.squeeze();
    cout << "sendTcpData.squeeze()";
}
