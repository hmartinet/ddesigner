#############################################################################
# Makefile for building: output/release/ddesigner
# Generated by qmake (2.01a) (Qt 4.8.1) on: Mon Oct 15 00:16:47 2012
# Project:  ddesigner.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile ddesigner.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_SVG_LIB -DQT_XMLPATTERNS_LIB -DQT_XML_LIB -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -Wno-parentheses -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtOpenGL -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtXmlPatterns -I/usr/include/qt4/QtSvg -I/usr/include/qt4 -I. -I.. -I/usr/X11R6/include -I.tmp/release -I.tmp/release
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -L/usr/X11R6/lib -lqjson -lQtSvg -lQtXmlPatterns -lQtXml -lQtOpenGL -lQtGui -lQtCore -lGL -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = .tmp/release/

####### Files

SOURCES       = mainwindow.cpp \
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
		diagram/moveitemmode.cpp .tmp/release/moc_mainwindow.cpp \
		.tmp/release/moc_nodetypecategoryitemconnector.cpp \
		.tmp/release/moc_nodetypelistwidget.cpp \
		.tmp/release/moc_diagramview.cpp \
		.tmp/release/moc_optionsstackedwidget.cpp
OBJECTS       = .tmp/release/mainwindow.o \
		.tmp/release/main.o \
		.tmp/release/nodetypecategoryitem.o \
		.tmp/release/nodetypecategoryitemconnector.o \
		.tmp/release/nodetypelistwidget.o \
		.tmp/release/nodetypeitem.o \
		.tmp/release/svgnodeitem.o \
		.tmp/release/diagramview.o \
		.tmp/release/nodelabelitem.o \
		.tmp/release/noactionmode.o \
		.tmp/release/diagrammode.o \
		.tmp/release/addsvgnodeitemmode.o \
		.tmp/release/optionsstackedwidget.o \
		.tmp/release/moveitemmode.o \
		.tmp/release/moc_mainwindow.o \
		.tmp/release/moc_nodetypecategoryitemconnector.o \
		.tmp/release/moc_nodetypelistwidget.o \
		.tmp/release/moc_diagramview.o \
		.tmp/release/moc_optionsstackedwidget.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		ddesigner.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		ddesigner.pro
QMAKE_TARGET  = ddesigner
DESTDIR       = output/release/
TARGET        = output/release/ddesigner

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): .tmp/release/ui_mainwindow.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) output/release/ || $(MKDIR) output/release/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ddesigner.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		ddesigner.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/opengl.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/x86_64-linux-gnu/libQtSvg.prl \
		/usr/lib/x86_64-linux-gnu/libQtXmlPatterns.prl \
		/usr/lib/x86_64-linux-gnu/libQtXml.prl \
		/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile ddesigner.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
ddesigner.pri:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/opengl.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/x86_64-linux-gnu/libQtSvg.prl:
/usr/lib/x86_64-linux-gnu/libQtXmlPatterns.prl:
/usr/lib/x86_64-linux-gnu/libQtXml.prl:
/usr/lib/x86_64-linux-gnu/libQtOpenGL.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile ddesigner.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/release/ddesigner1.0.0 || $(MKDIR) .tmp/release/ddesigner1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/release/ddesigner1.0.0/ && $(COPY_FILE) --parents mainwindow.h nodetype/nodetypecategoryitem.h nodetype/nodetypecategoryitemconnector.h nodetype/nodetypelistwidget.h nodetype/nodetypeitem.h diagram/svgnodeitem.h diagram/diagramview.h diagram/nodelabelitem.h diagram/noactionmode.h diagram/diagrammode.h diagram/addsvgnodeitemmode.h nodetype/optionsstackedwidget.h diagram/moveitemmode.h .tmp/release/ddesigner1.0.0/ && $(COPY_FILE) --parents mainwindow.cpp main.cpp nodetype/nodetypecategoryitem.cpp nodetype/nodetypecategoryitemconnector.cpp nodetype/nodetypelistwidget.cpp nodetype/nodetypeitem.cpp diagram/svgnodeitem.cpp diagram/diagramview.cpp diagram/nodelabelitem.cpp diagram/noactionmode.cpp diagram/diagrammode.cpp diagram/addsvgnodeitemmode.cpp nodetype/optionsstackedwidget.cpp diagram/moveitemmode.cpp .tmp/release/ddesigner1.0.0/ && $(COPY_FILE) --parents mainwindow.ui .tmp/release/ddesigner1.0.0/ && (cd `dirname .tmp/release/ddesigner1.0.0` && $(TAR) ddesigner1.0.0.tar ddesigner1.0.0 && $(COMPRESS) ddesigner1.0.0.tar) && $(MOVE) `dirname .tmp/release/ddesigner1.0.0`/ddesigner1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/release/ddesigner1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: .tmp/release/moc_mainwindow.cpp .tmp/release/moc_nodetypecategoryitemconnector.cpp .tmp/release/moc_nodetypelistwidget.cpp .tmp/release/moc_diagramview.cpp .tmp/release/moc_optionsstackedwidget.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) .tmp/release/moc_mainwindow.cpp .tmp/release/moc_nodetypecategoryitemconnector.cpp .tmp/release/moc_nodetypelistwidget.cpp .tmp/release/moc_diagramview.cpp .tmp/release/moc_optionsstackedwidget.cpp
.tmp/release/moc_mainwindow.cpp: mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainwindow.h -o .tmp/release/moc_mainwindow.cpp

.tmp/release/moc_nodetypecategoryitemconnector.cpp: nodetype/nodetypecategoryitem.h \
		nodetype/nodetypecategoryitemconnector.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) nodetype/nodetypecategoryitemconnector.h -o .tmp/release/moc_nodetypecategoryitemconnector.cpp

.tmp/release/moc_nodetypelistwidget.cpp: nodetype/nodetypecategoryitem.h \
		nodetype/nodetypeitem.h \
		nodetype/nodetypelistwidget.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) nodetype/nodetypelistwidget.h -o .tmp/release/moc_nodetypelistwidget.cpp

.tmp/release/moc_diagramview.cpp: diagram/diagrammode.h \
		diagram/diagramview.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) diagram/diagramview.h -o .tmp/release/moc_diagramview.cpp

.tmp/release/moc_optionsstackedwidget.cpp: nodetype/optionsstackedwidget.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) nodetype/optionsstackedwidget.h -o .tmp/release/moc_optionsstackedwidget.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: .tmp/release/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) .tmp/release/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: .tmp/release/ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) .tmp/release/ui_mainwindow.h
.tmp/release/ui_mainwindow.h: mainwindow.ui \
		diagram/diagramview.h \
		nodetype/nodetypelistwidget.h \
		nodetype/optionsstackedwidget.h \
		diagram/diagrammode.h \
		nodetype/nodetypecategoryitem.h \
		nodetype/nodetypeitem.h
	/usr/bin/uic-qt4 mainwindow.ui -o .tmp/release/ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

.tmp/release/mainwindow.o: mainwindow.cpp mainwindow.h \
		.tmp/release/ui_mainwindow.h \
		diagram/diagramview.h \
		diagram/diagrammode.h \
		nodetype/nodetypelistwidget.h \
		nodetype/nodetypecategoryitem.h \
		nodetype/nodetypeitem.h \
		nodetype/optionsstackedwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/mainwindow.o mainwindow.cpp

.tmp/release/main.o: main.cpp mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/main.o main.cpp

.tmp/release/nodetypecategoryitem.o: nodetype/nodetypecategoryitem.cpp nodetype/nodetypecategoryitem.h \
		nodetype/nodetypecategoryitemconnector.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/nodetypecategoryitem.o nodetype/nodetypecategoryitem.cpp

.tmp/release/nodetypecategoryitemconnector.o: nodetype/nodetypecategoryitemconnector.cpp nodetype/nodetypecategoryitemconnector.h \
		nodetype/nodetypecategoryitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/nodetypecategoryitemconnector.o nodetype/nodetypecategoryitemconnector.cpp

.tmp/release/nodetypelistwidget.o: nodetype/nodetypelistwidget.cpp nodetype/nodetypelistwidget.h \
		nodetype/nodetypecategoryitem.h \
		nodetype/nodetypeitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/nodetypelistwidget.o nodetype/nodetypelistwidget.cpp

.tmp/release/nodetypeitem.o: nodetype/nodetypeitem.cpp nodetype/nodetypeitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/nodetypeitem.o nodetype/nodetypeitem.cpp

.tmp/release/svgnodeitem.o: diagram/svgnodeitem.cpp diagram/diagramview.h \
		diagram/diagrammode.h \
		diagram/svgnodeitem.h \
		diagram/nodelabelitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/svgnodeitem.o diagram/svgnodeitem.cpp

.tmp/release/diagramview.o: diagram/diagramview.cpp diagram/diagramview.h \
		diagram/diagrammode.h \
		diagram/noactionmode.h \
		diagram/addsvgnodeitemmode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/diagramview.o diagram/diagramview.cpp

.tmp/release/nodelabelitem.o: diagram/nodelabelitem.cpp diagram/nodelabelitem.h \
		diagram/diagramview.h \
		diagram/diagrammode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/nodelabelitem.o diagram/nodelabelitem.cpp

.tmp/release/noactionmode.o: diagram/noactionmode.cpp diagram/noactionmode.h \
		diagram/diagrammode.h \
		diagram/diagramview.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/noactionmode.o diagram/noactionmode.cpp

.tmp/release/diagrammode.o: diagram/diagrammode.cpp diagram/diagrammode.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/diagrammode.o diagram/diagrammode.cpp

.tmp/release/addsvgnodeitemmode.o: diagram/addsvgnodeitemmode.cpp diagram/addsvgnodeitemmode.h \
		diagram/diagrammode.h \
		diagram/diagramview.h \
		diagram/svgnodeitem.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/addsvgnodeitemmode.o diagram/addsvgnodeitemmode.cpp

.tmp/release/optionsstackedwidget.o: nodetype/optionsstackedwidget.cpp nodetype/optionsstackedwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/optionsstackedwidget.o nodetype/optionsstackedwidget.cpp

.tmp/release/moveitemmode.o: diagram/moveitemmode.cpp diagram/moveitemmode.h \
		diagram/diagrammode.h \
		diagram/diagramview.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/moveitemmode.o diagram/moveitemmode.cpp

.tmp/release/moc_mainwindow.o: .tmp/release/moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/moc_mainwindow.o .tmp/release/moc_mainwindow.cpp

.tmp/release/moc_nodetypecategoryitemconnector.o: .tmp/release/moc_nodetypecategoryitemconnector.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/moc_nodetypecategoryitemconnector.o .tmp/release/moc_nodetypecategoryitemconnector.cpp

.tmp/release/moc_nodetypelistwidget.o: .tmp/release/moc_nodetypelistwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/moc_nodetypelistwidget.o .tmp/release/moc_nodetypelistwidget.cpp

.tmp/release/moc_diagramview.o: .tmp/release/moc_diagramview.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/moc_diagramview.o .tmp/release/moc_diagramview.cpp

.tmp/release/moc_optionsstackedwidget.o: .tmp/release/moc_optionsstackedwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/release/moc_optionsstackedwidget.o .tmp/release/moc_optionsstackedwidget.cpp

####### Install

install_resources: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/home/hmartinet/ddesigner/output/release/ || $(MKDIR) $(INSTALL_ROOT)/home/hmartinet/ddesigner/output/release/ 
	-$(INSTALL_FILE) /home/hmartinet/ddesigner/resources/ddesigner.svg $(INSTALL_ROOT)/home/hmartinet/ddesigner/output/release/
	-$(INSTALL_DIR) /home/hmartinet/ddesigner/resources/library $(INSTALL_ROOT)/home/hmartinet/ddesigner/output/release/


uninstall_resources:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/home/hmartinet/ddesigner/output/release/ddesigner.svg 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/home/hmartinet/ddesigner/output/release/library
	-$(DEL_DIR) $(INSTALL_ROOT)/home/hmartinet/ddesigner/output/release/ 


install:  install_resources  FORCE

uninstall: uninstall_resources   FORCE

FORCE:

