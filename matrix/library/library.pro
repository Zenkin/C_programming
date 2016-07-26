#-------------------------------------------------
#
# Project created by QtCreator 2016-07-26T18:18:23
#
#-------------------------------------------------

QT       -= core gui

TARGET = library
TEMPLATE = lib
CONFIG += staticlib

SOURCES += library.c

HEADERS += library.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

QMAKE_CFLAGS += -std=c11
