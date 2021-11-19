TEMPLATE = app
TARGET = name_of_the_app

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES +=  main.cpp \
    capacitywindow.cpp \
    contactuswindow.cpp \
    footballteam.cpp \
    helpwindow.cpp \
    listwindow.cpp \
    loginwindow.cpp \
    maintenancewindow.cpp \
    mainwindow.cpp \
    multisorttableview.cpp \
    teamlist.cpp \
    teamlistmodel.cpp

FORMS += \
    capacitywindow.ui \
    contactuswindow.ui \
    helpwindow.ui \
    listwindow.ui \
    loginwindow.ui \
    maintenancewindow.ui \
    mainwindow.ui

HEADERS += \
    alphanumcomparer.h \
    alphanumsortproxymodel.h \
    capacitywindow.h \
    columnssorter.h \
    contactuswindow.h \
    footballteam.h \
    helpwindow.h \
    listwindow.h \
    loginwindow.h \
    maintenancewindow.h \
    mainwindow.h \
    multisorttableview.h \
    sortfilterproxymodel.h \
    teamlist.h \
    teamlistmodel.h

RESOURCES += \
    Resources.qrc

CONFIG += \
    sdk_no_version_check
