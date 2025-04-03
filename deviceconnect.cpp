#include "deviceconnect.h"

DeviceConnect::DeviceConnect(QObject *parent)
    : QObject{parent}
{
    // connect(&socket, QTcpSocket::connect, this, )

}

void DeviceConnect::connectDevice(QString ip, int port)
{

}
