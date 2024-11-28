#include "login.h"
#include "ui_login.h"

#include<qerrormessage.h>
#include<QMessageBox>
#include<QDebug>
Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}
Login::~Login()
{
    delete ui;
}
//点击登录按钮的事件
void Login::on_pushButton_clicked()
{
    //检查账号密码是否存在&&是否正确
    QString username = ui->UserEdit->toPlainText();
    QString password = ui->PasswordEdit->toPlainText();
    //int Vaild = client->OnLogin(username,password);
    int Vaild = 0;
    if(Vaild ==0){
        QMessageBox::information(this, tr("登陆成功"), tr("登录成功！"));
        //发射登陆成功信号
        qDebug()<<"发射信号完毕！";
        emit LoginSignal(0);
        this->close();
    }else if(Vaild==1){
        QMessageBox::information(this, tr("登陆失败"), tr("登录失败！原因：用户名或密码错误"));
        //发射登陆失败信号
        qDebug()<<"发射信号完毕！";
        emit LoginSignal(-1);
    }else if(Vaild ==2){
        QErrorMessage *errorDialog = new QErrorMessage(this);
        errorDialog->showMessage("无效的输入！");

    }
    //关闭窗口
}



void Login::on_pushButton_2_clicked()
{
    QString username = ui->UserEdit->toPlainText();
    QString password = ui->PasswordEdit->toPlainText();
    //注册按钮按下的事件
}

