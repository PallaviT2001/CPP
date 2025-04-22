TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        book.cpp \
        librarian.cpp \
        library.cpp \
        main.cpp \
        student.cpp \
        studentrecord.cpp

HEADERS += \
    book.h \
    librarian.h \
    library.h \
    student.h \
    studentrecord.h
