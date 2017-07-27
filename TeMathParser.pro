TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp \
    parser.cpp

HEADERS += \
    parser.h

QMAKE_CXXFLAGS += -std=c++14
