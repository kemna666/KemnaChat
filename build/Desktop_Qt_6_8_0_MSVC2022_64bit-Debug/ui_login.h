/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QPlainTextEdit *UserEdit;
    QPlainTextEdit *PasswordEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(299, 300);
        UserEdit = new QPlainTextEdit(Login);
        UserEdit->setObjectName("UserEdit");
        UserEdit->setGeometry(QRect(80, 140, 181, 31));
        UserEdit->setOverwriteMode(false);
        UserEdit->setCenterOnScroll(false);
        PasswordEdit = new QPlainTextEdit(Login);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setGeometry(QRect(80, 180, 181, 31));
        PasswordEdit->setOverwriteMode(true);
        pushButton = new QPushButton(Login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 250, 56, 21));
        checkBox = new QCheckBox(Login);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(30, 220, 71, 16));
        checkBox_2 = new QCheckBox(Login);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(190, 220, 71, 16));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 150, 40, 12));
        label_2 = new QLabel(Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 180, 31, 21));
        pushButton_2 = new QPushButton(Login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 250, 61, 21));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        UserEdit->setPlainText(QString());
        PasswordEdit->setPlainText(QString());
        pushButton->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        checkBox->setText(QCoreApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Login", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
