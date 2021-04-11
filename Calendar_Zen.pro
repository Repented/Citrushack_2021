QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    PlanContainer.cpp \
    addeventwindow.cpp \
    editeventwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    modifywindow.cpp \
    monthlyviewwindow.cpp \
    removeeventwindow.cpp

HEADERS += \
    Plan.h \
    PlanContainer.h \
    Scheduler.h \
    addeventwindow.h \
    editeventwindow.h \
    mainwindow.h \
    modifywindow.h \
    monthlyviewwindow.h \
    removeeventwindow.h

FORMS += \
    addeventwindow.ui \
    editeventwindow.ui \
    mainwindow.ui \
    modifywindow.ui \
    monthlyviewwindow.ui \
    removeeventwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
