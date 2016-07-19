#-------------------------------------------------
#
# Project created by QtCreator 2016-07-15T18:12:52
#
#-------------------------------------------------

QT       -= core gui

TARGET = math
TEMPLATE = lib
CONFIG += staticlib

SOURCES += factorial.c

HEADERS += factorial.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

QMAKE_CFLAGS += -std=c11
