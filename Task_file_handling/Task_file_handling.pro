TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        csvdata.cpp \
        fileoperation.cpp \
        jsondata.cpp \
        main.cpp \
        student.cpp \
        studentmanagement.cpp \
        xmldata.cpp

HEADERS += \
    csvdata.h \
    fileoperation.h \
    jsondata.h \
    student.h \
    studentmanagement.h \
    xmldata.h
