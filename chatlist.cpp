#include "chatlist.h"
#include "ui_chatlist.h"

ChatList::ChatList(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatList)
{
    MessageBox *messagebox = new MessageBox(this);
    messagebox->show();
    ui->setupUi(this);
}

ChatList::~ChatList()
{
    delete ui;
}
