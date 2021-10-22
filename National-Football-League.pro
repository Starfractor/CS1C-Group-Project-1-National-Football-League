TEMPLATE = app
TARGET = name_of_the_app

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES +=  main.cpp \
    capacitywindow.cpp \
    contactuswindow.cpp \
    helpwindow.cpp \
    listwindow.cpp \
    loginwindow.cpp \
    maintenancewindow.cpp \
    mainwindow.cpp

FORMS += \
    capacitywindow.ui \
    contactuswindow.ui \
    helpwindow.ui \
    listwindow.ui \
    loginwindow.ui \
    maintenancewindow.ui \
    mainwindow.ui

HEADERS += \
    capacitywindow.h \
    contactuswindow.h \
    helpwindow.h \
    listwindow.h \
    loginwindow.h \
    maintenancewindow.h \
    mainwindow.h

RESOURCES +=
