#ifndef TCPSERVERFORTHREAD_H
#define TCPSERVERFORTHREAD_H

#include <QTcpServer>

class TcpServerForThread : public QTcpServer
{
    Q_OBJECT
public:
    TcpServerForThread(QObject* parent = NULL);
    ~TcpServerForThread();
    
signals:
    void newConnectionForThread(qintptr handle);
private:
    void incomingConnection(qintptr handle);
};

#endif // TCPSERVERFORTHREAD_H
