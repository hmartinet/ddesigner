#-------------------------------------------------
#
# Project created by QtCreator 2012-07-19T23:19:44
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = netdesigner
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    displaywidget.cpp \
    networkdiagram/networkdiagram.cpp \
    networkdiagram/nodelink.cpp

HEADERS  += mainwindow.h \
    displaywidget.h \
    networkdiagram/networkdiagram.h \
    networkdiagram/nodelink.h

FORMS    += mainwindow.ui
