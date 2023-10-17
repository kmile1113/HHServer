#include "TcpServerForThread.h"

TcpServerForThread::TcpServerForThread(QObject *parent):
    QTcpServer(parent)
{
    
}

TcpServerForThread::~TcpServerForThread()
{
    
}

void TcpServerForThread::incomingConnection(qintptr handle)
{
    emit newConnectionForThread(handle);
}

