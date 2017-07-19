/********************************************************************************
** Form generated from reading UI file 'dialogdisplayoutput.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDISPLAYOUTPUT_H
#define UI_DIALOGDISPLAYOUTPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_dialogDisplayOutput
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacer5;
    QPushButton *pushClose;
    QSpacerItem *spacer6;
    QTextEdit *lineDisplay;

    void setupUi(QDialog *dialogDisplayOutput)
    {
        if (dialogDisplayOutput->objectName().isEmpty())
            dialogDisplayOutput->setObjectName(QString::fromUtf8("dialogDisplayOutput"));
        dialogDisplayOutput->resize(544, 355);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/warden.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialogDisplayOutput->setWindowIcon(icon);
        gridLayout = new QGridLayout(dialogDisplayOutput);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacer5 = new QSpacerItem(191, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer5);

        pushClose = new QPushButton(dialogDisplayOutput);
        pushClose->setObjectName(QString::fromUtf8("pushClose"));

        hboxLayout->addWidget(pushClose);

        spacer6 = new QSpacerItem(201, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer6);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        lineDisplay = new QTextEdit(dialogDisplayOutput);
        lineDisplay->setObjectName(QString::fromUtf8("lineDisplay"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush2(QColor(180, 180, 180, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        QBrush brush3(QColor(114, 114, 114, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush4(QColor(88, 88, 88, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        lineDisplay->setPalette(palette);
        lineDisplay->setReadOnly(true);

        gridLayout->addWidget(lineDisplay, 0, 0, 1, 1);


        retranslateUi(dialogDisplayOutput);
        QObject::connect(pushClose, SIGNAL(clicked()), dialogDisplayOutput, SLOT(slotPushClose()));

        QMetaObject::connectSlotsByName(dialogDisplayOutput);
    } // setupUi

    void retranslateUi(QDialog *dialogDisplayOutput)
    {
        dialogDisplayOutput->setWindowTitle(QApplication::translate("dialogDisplayOutput", "Command Output", 0, QApplication::UnicodeUTF8));
        pushClose->setText(QApplication::translate("dialogDisplayOutput", "&Close", 0, QApplication::UnicodeUTF8));
        pushClose->setShortcut(QApplication::translate("dialogDisplayOutput", "Alt+C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogDisplayOutput: public Ui_dialogDisplayOutput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDISPLAYOUTPUT_H
