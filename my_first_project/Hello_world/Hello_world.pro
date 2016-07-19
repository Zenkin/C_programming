TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    hello_world.c

HEADERS += \
    hello_world.h

QMAKE_CFLAGS += -std=c11

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../math/release/ -lmath
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../math/debug/ -lmath
else:unix: LIBS += -L$$OUT_PWD/../math/ -lmath

INCLUDEPATH += $$PWD/../math
DEPENDPATH += $$PWD/../math

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math/release/libmath.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math/debug/libmath.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math/release/math.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math/debug/math.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../math/libmath.a
