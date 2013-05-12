CONFIG(debug, debug|release) {
   FOLDER = debug
   DEFINES += DEBUG
} else {
   FOLDER = release
   prof {
      QMAKE_CXXFLAGS += -pg -g
      QMAKE_LFLAGS += -pg
      QMAKE_LFLAGS_RELEASE -= -Wl,-s
   }
}
QMAKE_CXXFLAGS += -std=c++0x

DESTDIR = output/$$FOLDER
MOC_DIR = .tmp/$$FOLDER
OBJECTS_DIR = .tmp/$$FOLDER
RCC_DIR = .tmp/$$FOLDER
UI_DIR = .tmp/$$FOLDER

OTHER_FILES += resources/style/ddesigner.css

QMAKE_CXXFLAGS_WARN_ON = -Wall -Wno-parentheses

resources.path    = $$DESTDIR
resources.files    = resources/*
INSTALLS       += resources

