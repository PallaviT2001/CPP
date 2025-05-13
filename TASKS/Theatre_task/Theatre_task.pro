TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        calender.cpp \
        date.cpp \
        main.cpp \
        mainwindow.cpp \
        month.cpp \
        theatre.cpp \
        theatremanager.cpp \
        year.cpp

HEADERS += \
    calender.h \
    date.h \
    mainwindow.h \
    month.h \
    theatre.h \
    theatremanager.h \
    year.h

QT += widgets
