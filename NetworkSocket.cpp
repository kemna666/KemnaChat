#include"NetworkSocket.h"
#include<qerrormessage.h>
ClientEvent::ClientEvent(QString serverIP,quint16 ServerPort){
    connect(tcpSocket, &QTcpSocket::connected, this, &ClientEvent::onConnected);
    connect(tcpSocket, &QTcpSocket::readyRead, this, &ClientEvent::onReadyRead);
    connect(tcpSocket, &QTcpSocket::errorOccurred, this, &ClientEvent::onError);
    //
    tcpSocket->connectToHost(serverIP, ServerPort);
}
//点击注册时的网络行为
//连接成功
void ClientEvent::onConnected(){
    qDebug()<<"已经成功连接至服务器！";
}
//准备读取数据
void ClientEvent::onReadyRead(){
    QByteArray data = tcpSocket->readAll();
    qDebug() << "接收到了以下数据：" << data;
}
//处理TCP出错
void ClientEvent::onError(QAbstractSocket::SocketError socketError){
    Q_UNUSED(socketError);
    qDebug()<<"发生错误！"<<tcpSocket->errorString();
}
//处理注册时的网络行为
void ClientEvent::OnRegister(const QString &username,const QString &password){
//检查与TCP服务器的链接状态
    if(tcpSocket->state()==QAbstractSocket::ConnectedState){
    QByteArray data;
    //将用户名和密码转换为UTF8格式添加到data中
    data.append("Register");
    data.append(":");
    data.append(username.toUtf8());
    data.append(":");
    data.append(password.toUtf8());

    tcpSocket->write(data);
    }else {
        QMessageBox::critical(nullptr, "Error", "Not connected to the server.");
    }
}
//登录的处理函数
int ClientEvent::OnLogin(const QString &username,const QString &password){
    //检查与TCP服务器的链接状态
    if(tcpSocket->state()==QAbstractSocket::ConnectedState){
        QByteArray data;
        //将用户名和密码转换为UTF8格式添加到data中
        data.append("Register");
        data.append(":");
        data.append(username.toUtf8());
        data.append(":");
        data.append(password.toUtf8());
        tcpSocket->flush();
        // 等待服务器响应
        tcpSocket->waitForReadyRead(5000); // 等待5秒
        // 读取服务器响应
        QByteArray responseData = tcpSocket->readAll();
        // 将响应数据转换为字符串
        QString responseStr = QString::fromUtf8(responseData);
        // 假设服务器返回 "OK" 表示登录成功，其他任何响应表示失败
        if (responseStr == "OK") {
            return 0;
        } else {
            return 1; // 登录失败
        }
    }else {
        QMessageBox::critical(nullptr, "Error", "Not connected to the server.");
        return 1;
    }
}
//析构函数
ClientEvent::~ClientEvent(){
    tcpSocket->close();
}
