#ifndef FRIENDLIST_H
#define FRIENDLIST_H

#include <QWidget>
#include <QTreeWidget>
namespace Ui {
class FriendList;
}

class FriendList : public QWidget
{
    Q_OBJECT

public:
    explicit FriendList(QWidget *parent = nullptr);
    ~FriendList();

private:
    Ui::FriendList *ui;
    void setupFriendList();
};

#endif // FRIENDLIST_H
