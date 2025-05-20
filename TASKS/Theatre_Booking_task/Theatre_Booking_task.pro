TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        Theatremanager.cpp \
        calender.cpp \
        date.cpp \
        main.cpp \
        mainwindow.cpp \
        month.cpp \
        theatre.cpp \
        year.cpp

HEADERS += \
    Theatremanager.h \
    calender.h \
    date.h \
    mainwindow.h \
    month.h \
    theatre.h \
    year.h

QT += widgets
