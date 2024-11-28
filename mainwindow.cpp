#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"login.h"
#include"settings.h"
#include<QPushButton>
#include<QDebug>
extern Status Logined=FAILED;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->ExitLogin->setText("点击登录");

}
void MainWindow::LoginSignal(int status){
    qDebug()<<"信号已经被接受！"<<status;
    if(status==0){
        SetWindowsStatus(SUCCESS);
    }else if(status==1){
        SetWindowsStatus(FAILED);
    }
}
MainWindow::~MainWindow()
{
    delete friendlist;
    delete ui;
}
void MainWindow::SetWindowsStatus(Status status){
    if(status==SUCCESS){
        //更新按钮文本
        Logined=SUCCESS;
        ui->ExitLogin->setText("退出登录");
        //加入好友列表等子窗口
        friendlist->show();
        //更新布局

        this->setLayout(alayout);
    }else{
        //更新按钮文本
        Logined=FAILED;
        friendlist->close();
        ui->ExitLogin->setText("点击登录");
    }
}

void MainWindow::on_ExitLogin_clicked()
{
    if(Logined==FAILED){
    Login *LoginWindow = new Login;
    connect(LoginWindow,SIGNAL(LoginSignal(int)),this,SLOT(LoginSignal(int)));
    LoginWindow->show();
    }else{
        SetWindowsStatus(FAILED);
    }
}


void MainWindow::on_Settings_clicked()
{
    Settings *settings = new Settings;
    settings->show();
}

