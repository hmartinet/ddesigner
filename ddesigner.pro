TEMPLATE = app
QT       += core gui xml xmlpatterns svg opengl
LIBS     += -lqjson
TARGET   = ddesigner

SUBDIRS = lefttoolbox \
        networkdiagram \
        nodetype

include(ddesigner.pri)

INCLUDEPATH += . ..

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
    diagram/fourdirection.h \
    \
    diagram/items/nodelabelitem.h \
    diagram/items/linkitem.h \
    diagram/items/nodesvgitem.h \
    \
    diagram/modes/noactionmode.h \
    diagram/modes/diagrammode.h \
    diagram/modes/moveitemmode.h \
    diagram/modes/linkmode.h \
    diagram/modes/addnodesvgitemmode.h \
    diagram/items/nodeitem.h \
    diagram/items/linkanchor.h \
    diagram/itemdata.h

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
    diagram/items/linkitem.cpp \
    diagram/items/nodesvgitem.cpp \
    \
    diagram/modes/noactionmode.cpp \
    diagram/modes/diagrammode.cpp \
    diagram/modes/moveitemmode.cpp \
    diagram/modes/linkmode.cpp \
    diagram/modes/addnodesvgitemmode.cpp \
    diagram/items/nodeitem.cpp \
    diagram/items/linkanchor.cpp

FORMS    += mainwindow.ui

RESOURCES += \
    icons.qrc
