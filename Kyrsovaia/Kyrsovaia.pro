QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    body_typpe.cpp \
    form.cpp \
    form2.cpp \
    form2.cpp \
    main.cpp \
    mainwindow.cpp \
    weight.cpp

HEADERS += \
    body_typpe.h \
    form.h \
    form2.h \
    form2.h \
    mainwindow.h \
    weight.h

FORMS += \
    form.ui \
    form2.ui \
    form2.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Background.qrc \
    Favicon.qrc \
    footer_img.qrc

DISTFILES += \
    Bez_Imeni-1.png \
    Снимок.PNG
