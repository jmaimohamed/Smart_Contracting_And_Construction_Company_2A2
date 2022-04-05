#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------

QT       += core gui sql multimedia multimediawidgets printsupport network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#TARGET = Atelier_Connexion
#TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS SMTP_BUILD

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    ../Atelier_Connexion/emailaddress.cpp \
      ../Atelier_Connexion/mimeattachment.cpp \
     ../Atelier_Connexion/mimecontentformatter.cpp \
      ../Atelier_Connexion/mimefile.cpp \
     ../Atelier_Connexion/mimehtml.cpp \
     ../Atelier_Connexion/mimeinlinefile.cpp \
     ../Atelier_Connexion/mimemessage.cpp \
    ../Atelier_Connexion/mimemultipart.cpp \
     ../Atelier_Connexion/mimepart.cpp \
     ../Atelier_Connexion/mimetext.cpp \
      ../Atelier_Connexion/quotedprintable.cpp \
     ../Atelier_Connexion/smtpclient.cpp \
    fournisseur.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp\ \
    page_web.cpp

HEADERS += \
    ../Atelier_Connexion/SmtpMime \
    ../Atelier_Connexion/emailaddress.h \
    ../Atelier_Connexion/mimeattachment.h \
    ../Atelier_Connexion/mimecontentformatter.h \
    ../Atelier_Connexion/mimefile.h \
    ../Atelier_Connexion/mimehtml.h \
    ../Atelier_Connexion/mimeinlinefile.h \
    ../Atelier_Connexion/mimemessage.h \
    ../Atelier_Connexion/mimemultipart.h \
    ../Atelier_Connexion/mimepart.h \
    ../Atelier_Connexion/mimetext.h \
    ../Atelier_Connexion/quotedprintable.h \
    ../Atelier_Connexion/smtpclient.h \
    ../Atelier_Connexion/smtpexports.h \
    fournisseur.h \
        mainwindow.h \
    connection.h\ \
    page_web.h



FORMS += \
        mainwindow.ui
QMAKE_CXXFLAGS += -std=gnu++14
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
