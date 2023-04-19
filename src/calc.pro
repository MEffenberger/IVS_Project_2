QT += core gui widgets

CONFIG += c++17

MAKEFILE = QMakefile

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
