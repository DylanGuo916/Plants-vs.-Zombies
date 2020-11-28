QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
#    Plants/plant.cpp \
#    Zombies/zombie.cpp \
    aspectratiolayout.cpp \
    gamescene.cpp \
    imagemanager.cpp \
    main.cpp \
    mainview.cpp \
    mainwindow.cpp \
    menuscene.cpp

HEADERS += \
#    Plants/plant.h \
#    Zombies/zombie.h \
    aspectratiolayout.h \
    gamescene.h \
    imagemanager.h \
    mainview.h \
    mainwindow.h \
    menuscene.h

TRANSLATIONS += \
    Plants_VS_Zombies_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    audio.qrc \
    images.qrc
