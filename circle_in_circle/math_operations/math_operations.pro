#-------------------------------------------------
#
# Project created by QtCreator 2016-07-17T17:26:02
#
#-------------------------------------------------

QT       -= core gui

TARGET = math_operations
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    by_zero_chek.c \
    start_cheking.c \
    max_and_min_circle.c

HEADERS += math_operations.h \
    by_zero_chek.h \
    start_cheking.h \
    max_and_min_circle.h \
    circle.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

QMAKE_CFLAGS += -std=c11
