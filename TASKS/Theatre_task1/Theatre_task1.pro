QT = core \
    widgets

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        Theatremanager.cpp \
        calender.cpp \
        date.cpp \
        main.cpp \
        mainwindow.cpp \
        month.cpp \
        theatre.cpp \
        year.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    Theatremanager.h \
    calender.h \
    date.h \
    mainwindow.h \
    month.h \
    theatre.h \
    year.h
