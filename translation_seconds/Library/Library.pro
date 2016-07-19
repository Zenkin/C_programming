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

SOURCES += library.c

HEADERS += library.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
