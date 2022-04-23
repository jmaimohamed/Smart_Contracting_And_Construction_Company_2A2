QT       += core gui sql printsupport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.

DEFINES += QT_DEPRECATED_WARNINGS SMTP_BUILD

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    main.cpp \
    mainwindow.cpp \
    partenaire.cpp \
    ./smtp/src/emailaddress.cpp \
    ./smtp/src/mimeattachment.cpp \
    ./smtp/src/mimefile.cpp \
    ./smtp/src/mimehtml.cpp \
    ./smtp/src/mimeinlinefile.cpp \
    ./smtp/src/mimemessage.cpp \
    ./smtp/src/mimepart.cpp \
    ./smtp/src/mimetext.cpp \
    ./smtp/src/smtpclient.cpp \
    ./smtp/src/quotedprintable.cpp \
    ./smtp/src/mimemultipart.cpp \
    ./smtp/src/mimecontentformatter.cpp \

HEADERS += \
    connection.h \
    mainwindow.h \
    partenaire.h \
     ./smtp/src/emailaddress.h \
     ./smtp/src/mimeattachment.h \
    ./smtp/src/mimefile.h \
    ./smtp/src/mimehtml.h \
     ./smtp/src/mimeinlinefile.h \
     ./smtp/src/mimemessage.h \
     ./smtp/src/mimepart.h \
     ./smtp/src/mimetext.h \
     ./smtp/src/smtpclient.h \
     ./smtp/src/SmtpMime \
     ./smtp/src/quotedprintable.h \
     ./smtp/src/mimemultipart.h \
     ./smtp/src/mimecontentformatter.h \
     ./smtp/src/smtpexports.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    prediction.py
