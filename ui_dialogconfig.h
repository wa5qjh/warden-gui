/********************************************************************************
** Form generated from reading UI file 'dialogconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONFIG_H
#define UI_DIALOGCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "QtWidgets/QFileDialog"

QT_BEGIN_NAMESPACE

class Ui_dialogConfig
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacer2;
    QPushButton *pushSave;
    QSpacerItem *spacer1;
    QPushButton *pushCancel;
    QSpacerItem *spacer3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *textLabel1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacer4;
    QComboBox *comboNIC;
    QSpacerItem *spacer5;
    QLabel *textLabel1_2;
    QHBoxLayout *hboxLayout2;
    QLineEdit *lineJailDir;
    QPushButton *pushJailDir;
    QLabel *textLabel1_2_2;
    QHBoxLayout *hboxLayout3;
    QLineEdit *lineTMPDIR;
    QPushButton *pushTmpDir;

    void setupUi(QDialog *dialogConfig)
    {
        if (dialogConfig->objectName().isEmpty())
            dialogConfig->setObjectName(QStringLiteral("dialogConfig"));
        dialogConfig->resize(262, 257);
        QIcon icon;
        icon.addFile(QStringLiteral(":/cell.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialogConfig->setWindowIcon(icon);
        gridLayout = new QGridLayout(dialogConfig);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacer2 = new QSpacerItem(31, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer2);

        pushSave = new QPushButton(dialogConfig);
        pushSave->setObjectName(QStringLiteral("pushSave"));

        hboxLayout->addWidget(pushSave);

        spacer1 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer1);

        pushCancel = new QPushButton(dialogConfig);
        pushCancel->setObjectName(QStringLiteral("pushCancel"));

        hboxLayout->addWidget(pushCancel);

        spacer3 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer3);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        groupBox = new QGroupBox(dialogConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setAlignment(Qt::AlignCenter);
        textLabel1->setWordWrap(false);

        gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacer4 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer4);

        comboNIC = new QComboBox(groupBox);
        comboNIC->setObjectName(QStringLiteral("comboNIC"));

        hboxLayout1->addWidget(comboNIC);

        spacer5 = new QSpacerItem(70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer5);


        gridLayout1->addLayout(hboxLayout1, 1, 0, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignCenter);
        textLabel1_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_2, 2, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        lineJailDir = new QLineEdit(groupBox);
        lineJailDir->setObjectName(QStringLiteral("lineJailDir"));
        lineJailDir->setReadOnly(true);

        hboxLayout2->addWidget(lineJailDir);

        pushJailDir = new QPushButton(groupBox);
        pushJailDir->setObjectName(QStringLiteral("pushJailDir"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushJailDir->setIcon(icon1);

        hboxLayout2->addWidget(pushJailDir);


        gridLayout1->addLayout(hboxLayout2, 3, 0, 1, 1);

        textLabel1_2_2 = new QLabel(groupBox);
        textLabel1_2_2->setObjectName(QStringLiteral("textLabel1_2_2"));
        textLabel1_2_2->setAlignment(Qt::AlignCenter);
        textLabel1_2_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_2_2, 4, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        lineTMPDIR = new QLineEdit(groupBox);
        lineTMPDIR->setObjectName(QStringLiteral("lineTMPDIR"));
        lineTMPDIR->setReadOnly(true);

        hboxLayout3->addWidget(lineTMPDIR);

        pushTmpDir = new QPushButton(groupBox);
        pushTmpDir->setObjectName(QStringLiteral("pushTmpDir"));
        pushTmpDir->setIcon(icon1);

        hboxLayout3->addWidget(pushTmpDir);


        gridLayout1->addLayout(hboxLayout3, 5, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(dialogConfig);
        QObject::connect(pushSave, SIGNAL(clicked()), dialogConfig, SLOT(slotSave()));
        QObject::connect(pushCancel, SIGNAL(clicked()), dialogConfig, SLOT(slotCancel()));
        QObject::connect(pushJailDir, SIGNAL(clicked()), dialogConfig, SLOT(slotChangeJailDir()));
        QObject::connect(pushTmpDir, SIGNAL(clicked()), dialogConfig, SLOT(slotChangeTMPDIR()));

        QMetaObject::connectSlotsByName(dialogConfig);
    } // setupUi

    void retranslateUi(QDialog *dialogConfig)
    {
        dialogConfig->setWindowTitle(QApplication::translate("dialogConfig", "Configuration", Q_NULLPTR));
        pushSave->setText(QApplication::translate("dialogConfig", "&Save", Q_NULLPTR));
        pushSave->setShortcut(QApplication::translate("dialogConfig", "Alt+S", Q_NULLPTR));
        pushCancel->setText(QApplication::translate("dialogConfig", "&Cancel", Q_NULLPTR));
        pushCancel->setShortcut(QApplication::translate("dialogConfig", "Alt+C", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("dialogConfig", "Configuration", Q_NULLPTR));
        textLabel1->setText(QApplication::translate("dialogConfig", "Jail Network Interface", Q_NULLPTR));
        textLabel1_2->setText(QApplication::translate("dialogConfig", "Jail Directory", Q_NULLPTR));
        pushJailDir->setText(QString());
        textLabel1_2_2->setText(QApplication::translate("dialogConfig", "Temp Directory", Q_NULLPTR));
        pushTmpDir->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dialogConfig: public Ui_dialogConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONFIG_H
