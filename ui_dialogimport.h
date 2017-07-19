/********************************************************************************
** Form generated from reading UI file 'dialogimport.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGIMPORT_H
#define UI_DIALOGIMPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_dialogImport
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushOk;
    QPushButton *pushCancel;
    QGroupBox *groupIP;
    QGridLayout *gridLayout;
    QLineEdit *lineIP;
    QGroupBox *groupHostname;
    QGridLayout *gridLayout_2;
    QLineEdit *lineHostname;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupName;
    QGridLayout *gridLayout_4;
    QLineEdit *lineJailName;

    void setupUi(QDialog *dialogImport)
    {
        if (dialogImport->objectName().isEmpty())
            dialogImport->setObjectName(QString::fromUtf8("dialogImport"));
        dialogImport->setWindowModality(Qt::ApplicationModal);
        dialogImport->resize(400, 282);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dialogImport->sizePolicy().hasHeightForWidth());
        dialogImport->setSizePolicy(sizePolicy);
        dialogImport->setMinimumSize(QSize(400, 250));
        dialogImport->setBaseSize(QSize(400, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/cell.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialogImport->setWindowIcon(icon);
        dialogImport->setSizeGripEnabled(true);
        gridLayout_3 = new QGridLayout(dialogImport);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(dialogImport);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushOk = new QPushButton(dialogImport);
        pushOk->setObjectName(QString::fromUtf8("pushOk"));

        horizontalLayout->addWidget(pushOk);

        pushCancel = new QPushButton(dialogImport);
        pushCancel->setObjectName(QString::fromUtf8("pushCancel"));

        horizontalLayout->addWidget(pushCancel);


        gridLayout_3->addLayout(horizontalLayout, 6, 0, 1, 1);

        groupIP = new QGroupBox(dialogImport);
        groupIP->setObjectName(QString::fromUtf8("groupIP"));
        sizePolicy.setHeightForWidth(groupIP->sizePolicy().hasHeightForWidth());
        groupIP->setSizePolicy(sizePolicy);
        groupIP->setCheckable(true);
        groupIP->setChecked(false);
        gridLayout = new QGridLayout(groupIP);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineIP = new QLineEdit(groupIP);
        lineIP->setObjectName(QString::fromUtf8("lineIP"));
        lineIP->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineIP, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupIP, 3, 0, 1, 1);

        groupHostname = new QGroupBox(dialogImport);
        groupHostname->setObjectName(QString::fromUtf8("groupHostname"));
        sizePolicy.setHeightForWidth(groupHostname->sizePolicy().hasHeightForWidth());
        groupHostname->setSizePolicy(sizePolicy);
        groupHostname->setCheckable(true);
        groupHostname->setChecked(false);
        gridLayout_2 = new QGridLayout(groupHostname);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineHostname = new QLineEdit(groupHostname);
        lineHostname->setObjectName(QString::fromUtf8("lineHostname"));

        gridLayout_2->addWidget(lineHostname, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupHostname, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);

        groupName = new QGroupBox(dialogImport);
        groupName->setObjectName(QString::fromUtf8("groupName"));
        gridLayout_4 = new QGridLayout(groupName);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lineJailName = new QLineEdit(groupName);
        lineJailName->setObjectName(QString::fromUtf8("lineJailName"));

        gridLayout_4->addWidget(lineJailName, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupName, 2, 0, 1, 1);


        retranslateUi(dialogImport);

        QMetaObject::connectSlotsByName(dialogImport);
    } // setupUi

    void retranslateUi(QDialog *dialogImport)
    {
        dialogImport->setWindowTitle(QApplication::translate("dialogImport", "Import Jail", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialogImport", "Enter the nickname for this new jail. You have the option to change the IP / Hostname of the imported jail. Any internal references to the old IP / hostname may still need to be changed after importing. ", 0, QApplication::UnicodeUTF8));
        pushOk->setText(QApplication::translate("dialogImport", "&Ok", 0, QApplication::UnicodeUTF8));
        pushCancel->setText(QApplication::translate("dialogImport", "&Cancel", 0, QApplication::UnicodeUTF8));
        groupIP->setTitle(QApplication::translate("dialogImport", "IPv4 Address", 0, QApplication::UnicodeUTF8));
        lineIP->setInputMask(QApplication::translate("dialogImport", "999\\.999\\.999\\.999; ", 0, QApplication::UnicodeUTF8));
        lineIP->setText(QApplication::translate("dialogImport", "...", 0, QApplication::UnicodeUTF8));
        groupHostname->setTitle(QApplication::translate("dialogImport", "Hostname", 0, QApplication::UnicodeUTF8));
        groupName->setTitle(QApplication::translate("dialogImport", "Jail Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogImport: public Ui_dialogImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGIMPORT_H
