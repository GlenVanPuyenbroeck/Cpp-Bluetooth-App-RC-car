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
}

void MainWindow::on_Voorruit_clicked()
{
    ui->Sensor1->setText("Testing succes");
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
