/********************************************************************************
** Form generated from reading UI file 'messagebox.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEBOX_H
#define UI_MESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageBox
{
public:

    void setupUi(QWidget *MessageBox)
    {
        if (MessageBox->objectName().isEmpty())
            MessageBox->setObjectName("MessageBox");
        MessageBox->resize(400, 300);

        retranslateUi(MessageBox);

        QMetaObject::connectSlotsByName(MessageBox);
    } // setupUi

    void retranslateUi(QWidget *MessageBox)
    {
        MessageBox->setWindowTitle(QCoreApplication::translate("MessageBox", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageBox: public Ui_MessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEBOX_H
