TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp \
    matematica.cpp \
    parser.cpp

HEADERS += \
    matematica.h \
    matrix.h \
    parser.h

QMAKE_CXXFLAGS += -std=c++14
