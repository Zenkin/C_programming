TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    application.c \
    header_logo.c

QMAKE_CFLAGS += -std=c11

HEADERS += \
    application.h

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../math_operations/release/ -lmath_operations
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../math_operations/debug/ -lmath_operations
else:unix: LIBS += -L$$OUT_PWD/../math_operations/ -lmath_operations

INCLUDEPATH += $$PWD/../math_operations
DEPENDPATH += $$PWD/../math_operations

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math_operations/release/libmath_operations.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math_operations/debug/libmath_operations.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math_operations/release/math_operations.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../math_operations/debug/math_operations.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../math_operations/libmath_operations.a
