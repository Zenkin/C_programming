TEMPLATE = subdirs

SUBDIRS += \
    Application \
    math_operations

QMAKE_CFLAGS += -std=C11

Application.depends = math_operations
