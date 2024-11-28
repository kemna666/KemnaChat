#ifndef LOGIN_H
#define LOGIN_H
#include<QString>
#include <QWidget>
#include<QDialog>
#include"NetworkSocket.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
private slots:
    void on_pushButton_clicked();

//信号
    void on_pushButton_2_clicked();

signals:
    void LoginSignal(int status);
private:
    //ClientEvent *client = new ClientEvent("127.0.0.1",5050);
    Ui::Login *ui;
};

#endif // LOGIN_H
