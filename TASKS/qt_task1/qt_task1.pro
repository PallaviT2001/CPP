QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mybutton.cpp \
    mycheckbox.cpp \
    mymenubar.cpp \
    myradiobutton.cpp \
    myscrollbar.cpp \
    myspinbox.cpp \
    mystatusbar.cpp \
    mytoolbutton.cpp \
    widget.cpp

HEADERS += \
    mybutton.h \
    mycheckbox.h \
    mymenubar.h \
    myradiobutton.h \
    myscrollbar.h \
    myspinbox.h \
    mystatusbar.h \
    mytoolbutton.h \
    widget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
