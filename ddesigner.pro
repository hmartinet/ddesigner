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
    \
    nodetype/nodetypecategoryitem.cpp \
    nodetype/nodetypecategoryitemconnector.cpp \
    nodetype/nodetypelistwidget.cpp \
    nodetype/nodetypeitem.cpp \
    nodetype/optionsstackedwidget.cpp \
    \
    diagram/diagramscene.cpp \
    diagram/diagramview.cpp \
    \
    diagram/items/nodelabelitem.cpp \
    diagram/items/svgnodeitem.cpp \
    \
    diagram/modes/noactionmode.cpp \
    diagram/modes/diagrammode.cpp \
    diagram/modes/addsvgnodeitemmode.cpp \
    diagram/modes/moveitemmode.cpp

HEADERS  += mainwindow.h \
    \
    nodetype/nodetypecategoryitem.h \
    nodetype/nodetypecategoryitemconnector.h \
    nodetype/nodetypelistwidget.h \
    nodetype/nodetypeitem.h \
    nodetype/optionsstackedwidget.h \
    \
    diagram/diagramscene.h \
    diagram/diagramview.h \
    \
    diagram/items/nodelabelitem.h \
    diagram/items/svgnodeitem.h \
    \
    diagram/modes/noactionmode.h \
    diagram/modes/diagrammode.h \
    diagram/modes/addsvgnodeitemmode.h \
    diagram/modes/moveitemmode.h

FORMS    += mainwindow.ui

RESOURCES += \
    icons.qrc
