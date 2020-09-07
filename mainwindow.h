#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBluetoothDeviceDiscoveryAgent>
#include <QListWidget>
#include <QBluetoothSocket>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Voorruit_clicked();

    void on_Links_clicked();

    void on_Rechts_clicked();

    void on_Achteruit_clicked();

    void deviceDiscoverd(const QBluetoothDeviceInfo &device);

    void on_On_clicked();

    void on_Off_clicked();

    void on_Find_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QBluetoothDeviceDiscoveryAgent *agent = new QBluetoothDeviceDiscoveryAgent(this);
    //QBluetoothSocket *socket;
    QString string ;
  //  QBluetoothDeviceInfo *device = new QBluetoothDeviceInfo;
};

#endif // MAINWINDOW_H
