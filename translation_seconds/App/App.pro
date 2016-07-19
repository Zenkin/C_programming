TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    input_data.c \
    print_error.c

HEADERS += \
    input_data.h \
    print_error.h \
    all_include.h
