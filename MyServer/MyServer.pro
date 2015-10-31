#-------------------------------------------------
#
# Project created by QtCreator 2015-10-31T16:58:48
#
#-------------------------------------------------

QT       += core gui
QT       += core gui
QT       += network
QT       += network widgets
QT       += widgets
QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyServer
TEMPLATE = app


SOURCES += main.cpp\
        server.cpp

HEADERS  += server.h

FORMS    += server.ui
