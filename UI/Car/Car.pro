QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += C++11

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    drawimage.cpp

HEADERS += \
    mainwindow.h \
    drawimage.h

FORMS += \
    mainwindow.ui


qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target





SUBDIRS += \
    Car.pro



RESOURCES += \
    res.qrc
