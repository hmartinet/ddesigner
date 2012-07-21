#-------------------------------------------------
#
# Project created by QtCreator 2012-07-19T23:19:44
#
#-------------------------------------------------

CONFIG   += debug

QT       += core gui opengl

TARGET = netdesigner
TEMPLATE = app


SOURCES += src/mainwindow.cpp \
    src/main.cpp \
    src/displaywidget.cpp \
    src/networkdiagram/nodelink.cpp \
    src/networkdiagram/node.cpp \
    src/networkdiagram/networkdiagram.cpp

HEADERS  += src/mainwindow.h \
    src/displaywidget.h \
    src/networkdiagram/nodelink.h \
    src/networkdiagram/node.h \
    src/networkdiagram/networkdiagram.h

FORMS    += src/mainwindow.ui

RESOURCES += \
    resources.qrc

