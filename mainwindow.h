#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
