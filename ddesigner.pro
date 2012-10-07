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
    diagram/addsvgnodeaction.cpp \
    diagram/diagramaction.cpp \
    diagram/freepointaction.cpp \
    diagram/actionpool.cpp

HEADERS  += mainwindow.h \
    nodetype/nodetypecategoryitem.h \
    nodetype/nodetypecategoryitemconnector.h \
    nodetype/nodetypelistwidget.h \
    nodetype/nodetypeitem.h \
    diagram/svgnodeitem.h \
    diagram/diagramview.h \
    diagram/addsvgnodeaction.h \
    diagram/diagramaction.h \
    diagram/freepointaction.h \
    diagram/actionpool.h

FORMS    += mainwindow.ui
