TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    input_data.c \
    print_error.c \
    data_processing.c \
    output_data.c

HEADERS += \
    input_data.h \
    print_error.h \
    data_processing.h \
    output_data.h

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Library/release/ -lLibrary
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Library/debug/ -lLibrary
else:unix: LIBS += -L$$OUT_PWD/../Library/ -lLibrary

INCLUDEPATH += $$PWD/../Library
DEPENDPATH += $$PWD/../Library

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Library/release/libLibrary.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Library/debug/libLibrary.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Library/release/Library.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../Library/debug/Library.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../Library/libLibrary.a
