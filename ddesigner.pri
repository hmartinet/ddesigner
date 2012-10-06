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

DESTDIR = output/$$FOLDER
MOC_DIR = .tmp/$$FOLDER
OBJECTS_DIR = .tmp/$$FOLDER
RCC_DIR = .tmp/$$FOLDER
UI_DIR = .tmp/$$FOLDER

QMAKE_CXXFLAGS_WARN_ON = -Wall -Wno-parentheses

OTHER_FILES += \
    resources/library/tango/computer-desktop/computer-hp-pavilion-t3700.svg \
    resources/library/tango/computer-laptop/computer-laptop-lenovo-thinkpad-r61.svg \
    resources/library/tango/descriptor.json

resources.path    = $$DESTDIR
resources.files    = resources/*
INSTALLS       += resources

