TEMPLATE = app
QT       += core gui xml xmlpatterns svg opengl
LIBS     += -lqjson
TARGET   = ddesigner

SUBDIRS = lefttoolbox \
        networkdiagram \
        nodetype

include(ddesigner.pri)

INCLUDEPATH += . ..

SOURCES += mainwindow.cpp \
    main.cpp \
    nodetype/nodetypecategoryitem.cpp \
    nodetype/nodetypecategoryitemconnector.cpp \
    nodetype/nodetypelistwidget.cpp \
    nodetype/nodetypeitem.cpp \
    diagram/svgnodeitem.cpp \
    diagram/diagramview.cpp \
    diagram/nodelabelitem.cpp \
    diagram/addnodeactionmode.cpp \
    diagram/diagramactionmode.cpp

HEADERS  += mainwindow.h \
    nodetype/nodetypecategoryitem.h \
    nodetype/nodetypecategoryitemconnector.h \
    nodetype/nodetypelistwidget.h \
    nodetype/nodetypeitem.h \
    diagram/svgnodeitem.h \
    diagram/diagramview.h \
    diagram/nodelabelitem.h \
    diagram/diagramactionmode.h \
    diagram/addnodeactionmode.h

FORMS    += mainwindow.ui
