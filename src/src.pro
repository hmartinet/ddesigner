TEMPLATE = app
QT       += core gui svg opengl
TARGET  = netdesigner

SUBDIRS = lefttoolbox \
        networkdiagram

include(../netdesigner.pri)

INCLUDEPATH += . ..

SOURCES += mainwindow.cpp \
    main.cpp \
    displaywidget.cpp \
    networkdiagram/nodelink.cpp \
    networkdiagram/node.cpp \
    networkdiagram/networkdiagram.cpp \
    nodelistwidget.cpp \
    nodecategoryitem.cpp \
    nodecategoryitemconnector.cpp

HEADERS  += mainwindow.h \
    displaywidget.h \
    networkdiagram/nodelink.h \
    networkdiagram/node.h \
    networkdiagram/networkdiagram.h \
    nodelistwidget.h \
    nodecategoryitem.h \
    nodecategoryitemconnector.h

FORMS    += mainwindow.ui

RESOURCES += ../resources.qrc

