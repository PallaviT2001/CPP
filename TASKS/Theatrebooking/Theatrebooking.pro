TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        calendar.cpp \
        date.cpp \
        main.cpp \
        month.cpp \
        theatre.cpp \
        theatremanager.cpp \
        year.cpp

HEADERS += \
    calendar.h \
    date.h \
    month.h \
    theatre.h \
    theatremanager.h \
    year.h
