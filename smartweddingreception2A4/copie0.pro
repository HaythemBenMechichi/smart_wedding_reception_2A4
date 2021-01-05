
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    bague.cpp \
    buffet.cpp \
    buffet.cpp \
    client.cpp \
    connectionoracle.cpp \
    connectiooracle.cpp \
    decoration.cpp \
    decoration.cpp \
    fleuriste.cpp \
    gateau.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    musique.cpp \
    musique.cpp \
    offre.cpp \
    promotion.cpp \
    reclamation.cpp \
    robe.cpp \
    salle.cpp \
    salle.cpp \
    smtp.cpp

HEADERS += \
    arduino.h \
    bague.h \
    buffet.h \
    buffet.h \
    client.h \
    connectionoracle.h \
    connectiooracle.h \
    decoration.h \
    decoration.h \
    fleuriste.h \
    gateau.h \
    login.h \
    mainwindow.h \
    musique.h \
    musique.h \
    offre.h \
    promotion.h \
    reclamation.h \
    robe.h \
    salle.h \
    salle.h \
    smtp.h

FORMS += \
    login.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    mesResources.qrc \
    resource.qrc
