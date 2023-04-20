TARGET = calc
VERSION = 1.0

PREFIX = /usr

DEB_PACKAGE_NAME = calc
DEB_PACKAGE_VERSION = $$VERSION
DEB_MAINTAINER = Adam Valik <xvalik05@stud.fit.vutbr.cz>
DEB_CHANGELOG_DIST = unstable
DEB_SECTION = utils

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mathlib.cpp \
    arguments_parser.cpp

HEADERS += \
    mainwindow.h \
    mathlib.h \
    arguments_parser.h

FORMS += \
    mainwindow.ui

target.path = $$PREFIX/bin
INSTALLS += target

QT += core gui widgets
CONFIG += c++17

CONFIG += qt
CONFIG += release
CONFIG -= debug_and_release
CONFIG -= debug
TEMPLATE = app

MAKEFILE = QMakefile

