#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"friendlist.h"
#include"chatlist.h"
#include<QHBoxLayout>
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
enum Status{SUCCESS,FAILED};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
//接收登陆状态信号的槽
    void LoginSignal(int status);
private slots:
    void on_ExitLogin_clicked();
    void on_Settings_clicked();

private:
    FriendList *friendlist = new FriendList;
    //ChatList *chatlist = new ChatList(this);
    QHBoxLayout *alayout = new QHBoxLayout;
    void SetWindowsStatus(Status status);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
