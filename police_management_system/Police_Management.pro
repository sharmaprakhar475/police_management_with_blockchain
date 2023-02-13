QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    block.cpp \
    complaint.cpp \
    fir.cpp \
    global.cpp \
    main.cpp \
    mainwindow.cpp \
    police_login_page.cpp \
    police_menu_page.cpp \
    police_register_page.cpp \
    policestation.cpp \
    register_complaint.cpp \
    register_fir.cpp \
    sha256.cpp \
    update_complaint_status.cpp \
    update_fir_status.cpp \
    user.cpp \
    user_login_page.cpp \
    user_menu_page.cpp \
    user_register_page.cpp \
    view_complaint_status.cpp \
    view_fir.cpp

HEADERS += \
    block.h \
    complaint.h \
    fir.h \
    global.h \
    mainwindow.h \
    police_login_page.h \
    police_menu_page.h \
    police_register_page.h \
    policestation.h \
    register_complaint.h \
    register_fir.h \
    sha256.h \
    update_complaint_status.h \
    update_fir_status.h \
    user.h \
    user_login_page.h \
    user_menu_page.h \
    user_register_page.h \
    view_complaint_status.h \
    view_fir.h

FORMS += \
    mainwindow.ui \
    police_login_page.ui \
    police_menu_page.ui \
    police_register_page.ui \
    register_complaint.ui \
    register_fir.ui \
    update_complaint_status.ui \
    update_fir_status.ui \
    user_login_page.ui \
    user_menu_page.ui \
    user_register_page.ui \
    view_complaint_status.ui \
    view_fir.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
