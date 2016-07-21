#-------------------------------------------------
#
# Project created by QtCreator 2016-07-19T21:34:55
#
#-------------------------------------------------

QMAKE_CFLAGS += -std=c11

QT       -= core gui

TARGET = Library
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    pick_out_dhms.c \
    conver_seconds.c

HEADERS += \
    convert_seconds.h \
    pick_out_dhms.h \
    struct_count.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
