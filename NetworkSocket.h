#ifndef NETWORKSOCKET_H
#define NETWORKSOCKET_H
#endif // NETWORKSOCKET_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QVariant>
#include<QTcpSocket>
#include<QHostAddress>
#include<QMessageBox>
#include<QString>


class ClientEvent   :public QObject{
    Q_OBJECT
public:
    //构造函数，参数是服务器端口和ip
    explicit ClientEvent(QString serverIP,quint16 ServerPort);
    //注册
    void OnRegister(const QString &username,const QString &password);
    //析构函数
    ~ClientEvent();
    int OnLogin(const QString &username,const QString &password);
//处理事件的槽
private slots:
    void onConnected();
    void onReadyRead();
    void onError(QAbstractSocket::SocketError socketError);
private:
    QTcpSocket *tcpSocket;
};
//聊天数据库
class MessageData{
public:
    MessageData(const QString &dbName);

};
