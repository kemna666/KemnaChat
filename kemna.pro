#导入网络模块和sql模块
QT       += core gui \
            network \
            sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    NetworkSocket.cpp \
    chatlist.cpp \
    friendlist.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    messagebox.cpp \
    settings.cpp

HEADERS += \
    NetworkSocket.h \
    chatlist.h \
    friendlist.h \
    login.h \
    mainwindow.h \
    messagebox.h \
    settings.h

FORMS += \
    chatlist.ui \
    friendlist.ui \
    login.ui \
    mainwindow.ui \
    messagebox.ui \
    settings.ui

TRANSLATIONS += \
    kemna_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
