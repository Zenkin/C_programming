TEMPLATE = subdirs

SUBDIRS += \
    Hello_world \
    math

Hello_world.depends = math

QMAKE_CFLAGS += -std=C11
