#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
   // ui->listWidget->clear();
    connect(agent,SIGNAL(deviceDiscovered(QbluetoothDeviceInfo)), this , SLOT(deviceDiscovered(QBluetoothDeviceInfo)));
    agent->start();
   /* static const QString serviceUuid(QStringLiteral("00001101-0000-1000-8000-00805F9B34FB"));
    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
    socket -> connectToService(QBluetoothAddress(string),QBluetoothUuid(serviceUuid), QIODevice::ReadWrite);*/

   }


void MainWindow::on_Voorruit_clicked()
{
    ui->Sensor1->setText("Testing succes");
}


void MainWindow::deviceDiscoverd(const QBluetoothDeviceInfo &device)
{
    //ui -> listWidget->addItem (device.address().toString());
    qDebug() << "Found new device:" << device.name() << '(' << device.address().toString() << ')';
}


void MainWindow::on_On_clicked()
{
   // socket->write("h");
 }

void MainWindow::on_Off_clicked()
{
  //  socket->write("b");
}

void MainWindow::on_Find_clicked()
{
   /* ui->listWidget->show();
    ui -> listWidget->clear();
    agent -> stop();
    agent->start();*/

  //  agent->scan()->setEnabled(true);
  //  ui->inquiryType->setEnabled(false);
}

void MainWindow::on_Links_clicked()
{

}

void MainWindow::on_Rechts_clicked()
{

}

void MainWindow::on_Achteruit_clicked()
{

}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    string = item -> text();
}



