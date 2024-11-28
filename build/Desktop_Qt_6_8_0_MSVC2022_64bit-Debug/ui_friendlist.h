/********************************************************************************
** Form generated from reading UI file 'friendlist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDLIST_H
#define UI_FRIENDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendList
{
public:
    QTreeWidget *Friends;

    void setupUi(QWidget *FriendList)
    {
        if (FriendList->objectName().isEmpty())
            FriendList->setObjectName("FriendList");
        FriendList->resize(304, 576);
        Friends = new QTreeWidget(FriendList);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        Friends->setHeaderItem(__qtreewidgetitem);
        Friends->setObjectName("Friends");
        Friends->setGeometry(QRect(0, 0, 311, 581));

        retranslateUi(FriendList);

        QMetaObject::connectSlotsByName(FriendList);
    } // setupUi

    void retranslateUi(QWidget *FriendList)
    {
        FriendList->setWindowTitle(QCoreApplication::translate("FriendList", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FriendList: public Ui_FriendList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDLIST_H
