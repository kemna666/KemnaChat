#include "friendlist.h"
#include "ui_friendlist.h"
#include <QTreeWidget>
FriendList::FriendList(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FriendList)
{
    ui->setupUi(this);
    setupFriendList();
}

FriendList::~FriendList()
{
    delete ui;
}
void FriendList::setupFriendList() {
    // 设置 QTreeWidget 的列数和标题
    ui->Friends->setColumnCount(2);
    ui->Friends->setHeaderLabels({"Name", "Status"});

    // 添加好友分组
    QTreeWidgetItem *family = new QTreeWidgetItem(ui->Friends, {"Family", ""});
    QTreeWidgetItem *friends = new QTreeWidgetItem(ui->Friends, {"Friends", ""});

    // 添加好友信息
    QTreeWidgetItem *child = new QTreeWidgetItem(family, {"Alice", "Online"});
    new QTreeWidgetItem(family, {"Bob", "Offline"});
    new QTreeWidgetItem(friends, {"Charlie", "Away"});
    new QTreeWidgetItem(friends, {"David", "Online"});
}
