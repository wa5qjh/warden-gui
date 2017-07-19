/********************************************************************************
** Form generated from reading UI file 'dialogworking.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWORKING_H
#define UI_DIALOGWORKING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_dialogWorking
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QSpacerItem *spacer1_2;
    QSpacerItem *spacer1;
    QLabel *textText;
    QProgressBar *progressBarWorking;

    void setupUi(QDialog *dialogWorking)
    {
        if (dialogWorking->objectName().isEmpty())
            dialogWorking->setObjectName(QString::fromUtf8("dialogWorking"));
        dialogWorking->resize(307, 94);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/warden.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialogWorking->setWindowIcon(icon);
        gridLayout = new QGridLayout(dialogWorking);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        spacer1_2 = new QSpacerItem(20, 80, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacer1_2, 0, 2, 3, 1);

        spacer1 = new QSpacerItem(20, 80, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout1->addItem(spacer1, 0, 0, 3, 1);

        textText = new QLabel(dialogWorking);
        textText->setObjectName(QString::fromUtf8("textText"));
        textText->setAlignment(Qt::AlignCenter);
        textText->setWordWrap(false);

        gridLayout1->addWidget(textText, 0, 1, 1, 1);

        progressBarWorking = new QProgressBar(dialogWorking);
        progressBarWorking->setObjectName(QString::fromUtf8("progressBarWorking"));
        progressBarWorking->setValue(24);

        gridLayout1->addWidget(progressBarWorking, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);


        retranslateUi(dialogWorking);

        QMetaObject::connectSlotsByName(dialogWorking);
    } // setupUi

    void retranslateUi(QDialog *dialogWorking)
    {
        dialogWorking->setWindowTitle(QApplication::translate("dialogWorking", "Working", 0, QApplication::UnicodeUTF8));
        textText->setText(QApplication::translate("dialogWorking", "Working", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogWorking: public Ui_dialogWorking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWORKING_H
