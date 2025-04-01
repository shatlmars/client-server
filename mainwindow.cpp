#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



/*
 *
 *
 *
 *
 * void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    QHostAddress address(arg1);
    QString state = "0";
    if(QAbstractSocket::IPv4Protocol == address.protocol())
    {
        state = "1";
    }
    ui->lineEdit->setProperty("state", state);
    style()->polish(ui->lineEdit);
}





}

*/
void MainWindow::on_inIpAddress_textChanged(const QString &arg1)
{
    QString state = "0";
    if(arg1 == "...")
    {
        state = "";
    }
    else
    {
    QHostAddress address(arg1);
    QString state = "0";
    if(QAbstractSocket::IPv4Protocol == address.protocol())
    {
        state = "1";
    }
    ui->inIpAddress->setProperty("state", state);
    style()->polish(ui->inIpAddress);
    }

}

