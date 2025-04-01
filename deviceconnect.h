#ifndef DEVICECONNECT_H
#define DEVICECONNECT_H

#include <QObject>
#include <QTcpSocket>

class DeviceConnect : public QObject
{
    Q_OBJECT
public:
    explicit DeviceConnect(QObject *parent = nullptr);
    void connectDevice(QString ip, int port);

signals:

private:
    QTcpSocket _socket;
    QString _ip;
    int _port;
};

#endif // DEVICECONNECT_H
