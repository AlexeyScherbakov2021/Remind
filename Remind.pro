QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Repository/repository.cpp \
    dlgperson.cpp \
    main.cpp \
    mainwindow.cpp \
    persondelegate.cpp \
 \#    remindmodel.cpp
    selectdatedialog.cpp

HEADERS += \
    Model/Harmfact.h \
    Model/Medical.h \
    Model/Person.h \
    Repository/IRepository.h \
    Repository/repository.h \
    dlgperson.h \
    mainwindow.h \
    persondelegate.h \
 \#    remindmodel.h
    selectdatedialog.h

FORMS += \
    dlgperson.ui \
    mainwindow.ui \
    selectdatedialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
