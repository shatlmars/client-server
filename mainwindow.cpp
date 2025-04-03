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

void MainWindow::on_inIpAddress_textChanged(const QString &arg1)
{
    QString state = "0";
    QHostAddress address(arg1);
    if(QAbstractSocket::IPv4Protocol == address.protocol())
    {
        state = "1";
    }
    ui->inIpAddress->setProperty("state", state);
    ui->inIpAddress->style()->unpolish(ui->inIpAddress);
    ui->inIpAddress->style()->polish(ui->inIpAddress);

}


