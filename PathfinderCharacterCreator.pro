#-------------------------------------------------
#
# Project created by QtCreator 2013-02-15T05:11:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PathfinderCharacterCreator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    manualdiceroller.cpp

HEADERS  += mainwindow.h \
    manualdiceroller.h

FORMS    += mainwindow.ui \
    manualdiceroller.ui

OTHER_FILES += \
    README.md
