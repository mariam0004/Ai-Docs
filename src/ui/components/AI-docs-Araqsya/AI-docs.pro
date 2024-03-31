QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    filepicker.cpp \
    main.cpp \
    documentsbytitle.cpp \
    midsidebuttons.cpp \
    openfilewindow.cpp \
    ownedby.cpp \
    sortoptions.cpp \
    viewstyle.cpp

HEADERS += \
    documentsbytitle.h \
    filepicker.h \
    midsidebuttons.h \
    openfilewindow.h \
    ownedby.h \
    sortoptions.h \
    viewstyle.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    view-grid.png \
    view-list.png

RESOURCES += \
       resources.qrc
