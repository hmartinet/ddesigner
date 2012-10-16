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
    diagram/noactionmode.cpp \
    diagram/diagrammode.cpp \
    diagram/addsvgnodeitemmode.cpp \
    nodetype/optionsstackedwidget.cpp \
    diagram/moveitemmode.cpp \
    diagram/diagramscene.cpp

HEADERS  += mainwindow.h \
    nodetype/nodetypecategoryitem.h \
    nodetype/nodetypecategoryitemconnector.h \
    nodetype/nodetypelistwidget.h \
    nodetype/nodetypeitem.h \
    diagram/svgnodeitem.h \
    diagram/diagramview.h \
    diagram/nodelabelitem.h \
    diagram/noactionmode.h \
    diagram/diagrammode.h \
    diagram/addsvgnodeitemmode.h \
    nodetype/optionsstackedwidget.h \
    diagram/moveitemmode.h \
    diagram/diagramscene.h

FORMS    += mainwindow.ui
