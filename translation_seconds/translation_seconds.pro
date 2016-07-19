TEMPLATE = subdirs

SUBDIRS += \
    App \
    Library

App.depends = Library
