TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    CException.cpp \
    testfailure.cpp

HEADERS += \
    CstCodErr.h \
    CException.h
