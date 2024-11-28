/********************************************************************************
** Form generated from reading UI file 'chatlist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATLIST_H
#define UI_CHATLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatList
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *ChatList)
    {
        if (ChatList->objectName().isEmpty())
            ChatList->setObjectName("ChatList");
        ChatList->resize(400, 300);
        pushButton = new QPushButton(ChatList);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 20, 56, 18));

        retranslateUi(ChatList);

        QMetaObject::connectSlotsByName(ChatList);
    } // setupUi

    void retranslateUi(QWidget *ChatList)
    {
        ChatList->setWindowTitle(QCoreApplication::translate("ChatList", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ChatList", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatList: public Ui_ChatList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATLIST_H
