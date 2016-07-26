TEMPLATE = subdirs

SUBDIRS += \
    app \
    library \
    library

app.depends = library
