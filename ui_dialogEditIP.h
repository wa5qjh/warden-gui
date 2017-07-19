/********************************************************************************
** Form generated from reading UI file 'dialogEditIP.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITIP_H
#define UI_DIALOGEDITIP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogEditIP
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabConfig;
    QGridLayout *gridLayout_7;
    QCheckBox *checkVNET;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QCheckBox *checkIPv4;
    QLineEdit *lineIP;
    QCheckBox *checkIPv4Bridge;
    QLineEdit *lineIPBridge;
    QCheckBox *checkIPv4Router;
    QLineEdit *lineIPRouter;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QCheckBox *checkIPv6;
    QLineEdit *lineIP6;
    QCheckBox *checkIPv6Bridge;
    QLineEdit *lineIP6Bridge;
    QCheckBox *checkIPv6Router;
    QLineEdit *lineIP6Router;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QComboBox *comboIPType;
    QListWidget *listIP;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushAdd;
    QPushButton *pushRemove;
    QWidget *tab_4;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QListWidget *listPerms;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushCancel;

    void setupUi(QDialog *dialogEditIP)
    {
        if (dialogEditIP->objectName().isEmpty())
            dialogEditIP->setObjectName(QString::fromUtf8("dialogEditIP"));
        dialogEditIP->resize(502, 413);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/preferences-system.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialogEditIP->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(dialogEditIP);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(dialogEditIP);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabConfig = new QWidget();
        tabConfig->setObjectName(QString::fromUtf8("tabConfig"));
        gridLayout_7 = new QGridLayout(tabConfig);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        checkVNET = new QCheckBox(tabConfig);
        checkVNET->setObjectName(QString::fromUtf8("checkVNET"));

        gridLayout_7->addWidget(checkVNET, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 271, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 1, 0, 1, 1);

        tabWidget->addTab(tabConfig, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkIPv4 = new QCheckBox(tab);
        checkIPv4->setObjectName(QString::fromUtf8("checkIPv4"));
        checkIPv4->setChecked(false);

        gridLayout_4->addWidget(checkIPv4, 0, 0, 1, 1);

        lineIP = new QLineEdit(tab);
        lineIP->setObjectName(QString::fromUtf8("lineIP"));
        lineIP->setEnabled(false);
        lineIP->setInputMask(QString::fromUtf8(""));
        lineIP->setAlignment(Qt::AlignHCenter);

        gridLayout_4->addWidget(lineIP, 1, 0, 1, 1);

        checkIPv4Bridge = new QCheckBox(tab);
        checkIPv4Bridge->setObjectName(QString::fromUtf8("checkIPv4Bridge"));

        gridLayout_4->addWidget(checkIPv4Bridge, 2, 0, 1, 1);

        lineIPBridge = new QLineEdit(tab);
        lineIPBridge->setObjectName(QString::fromUtf8("lineIPBridge"));
        lineIPBridge->setEnabled(false);

        gridLayout_4->addWidget(lineIPBridge, 3, 0, 1, 1);

        checkIPv4Router = new QCheckBox(tab);
        checkIPv4Router->setObjectName(QString::fromUtf8("checkIPv4Router"));

        gridLayout_4->addWidget(checkIPv4Router, 4, 0, 1, 1);

        lineIPRouter = new QLineEdit(tab);
        lineIPRouter->setObjectName(QString::fromUtf8("lineIPRouter"));
        lineIPRouter->setEnabled(false);

        gridLayout_4->addWidget(lineIPRouter, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 6, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkIPv6 = new QCheckBox(tab_3);
        checkIPv6->setObjectName(QString::fromUtf8("checkIPv6"));

        gridLayout_5->addWidget(checkIPv6, 0, 0, 1, 1);

        lineIP6 = new QLineEdit(tab_3);
        lineIP6->setObjectName(QString::fromUtf8("lineIP6"));
        lineIP6->setEnabled(false);

        gridLayout_5->addWidget(lineIP6, 1, 0, 1, 1);

        checkIPv6Bridge = new QCheckBox(tab_3);
        checkIPv6Bridge->setObjectName(QString::fromUtf8("checkIPv6Bridge"));

        gridLayout_5->addWidget(checkIPv6Bridge, 2, 0, 1, 1);

        lineIP6Bridge = new QLineEdit(tab_3);
        lineIP6Bridge->setObjectName(QString::fromUtf8("lineIP6Bridge"));
        lineIP6Bridge->setEnabled(false);

        gridLayout_5->addWidget(lineIP6Bridge, 3, 0, 1, 1);

        checkIPv6Router = new QCheckBox(tab_3);
        checkIPv6Router->setObjectName(QString::fromUtf8("checkIPv6Router"));

        gridLayout_5->addWidget(checkIPv6Router, 4, 0, 1, 1);

        lineIP6Router = new QLineEdit(tab_3);
        lineIP6Router->setObjectName(QString::fromUtf8("lineIP6Router"));
        lineIP6Router->setEnabled(false);

        gridLayout_5->addWidget(lineIP6Router, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 140, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 6, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        comboIPType = new QComboBox(tab_2);
        comboIPType->setObjectName(QString::fromUtf8("comboIPType"));

        gridLayout_3->addWidget(comboIPType, 0, 0, 1, 1);

        listIP = new QListWidget(tab_2);
        listIP->setObjectName(QString::fromUtf8("listIP"));

        gridLayout_3->addWidget(listIP, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushAdd = new QPushButton(tab_2);
        pushAdd->setObjectName(QString::fromUtf8("pushAdd"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAdd->setIcon(icon1);

        horizontalLayout_2->addWidget(pushAdd);

        pushRemove = new QPushButton(tab_2);
        pushRemove->setObjectName(QString::fromUtf8("pushRemove"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushRemove->setIcon(icon2);

        horizontalLayout_2->addWidget(pushRemove);


        gridLayout_3->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_6 = new QGridLayout(tab_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        listPerms = new QListWidget(tab_4);
        listPerms->setObjectName(QString::fromUtf8("listPerms"));

        gridLayout_6->addWidget(listPerms, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushSave = new QPushButton(dialogEditIP);
        pushSave->setObjectName(QString::fromUtf8("pushSave"));
        pushSave->setIcon(icon);

        horizontalLayout->addWidget(pushSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushCancel = new QPushButton(dialogEditIP);
        pushCancel->setObjectName(QString::fromUtf8("pushCancel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/dialog-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushCancel->setIcon(icon3);

        horizontalLayout->addWidget(pushCancel);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(dialogEditIP);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialogEditIP);
    } // setupUi

    void retranslateUi(QDialog *dialogEditIP)
    {
        dialogEditIP->setWindowTitle(QApplication::translate("dialogEditIP", "Jail Configuration", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("dialogEditIP", "Jail Configuration", 0, QApplication::UnicodeUTF8));
        checkVNET->setText(QApplication::translate("dialogEditIP", "Enable VNET / VIMAGE support", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabConfig), QApplication::translate("dialogEditIP", "Options", 0, QApplication::UnicodeUTF8));
        checkIPv4->setText(QApplication::translate("dialogEditIP", "IPv4 Address", 0, QApplication::UnicodeUTF8));
        checkIPv4Bridge->setText(QApplication::translate("dialogEditIP", "IPv4 Bridge Address (Requires VNET)", 0, QApplication::UnicodeUTF8));
        checkIPv4Router->setText(QApplication::translate("dialogEditIP", "IPv4 Default Router (Requires VNET)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("dialogEditIP", "IPv4", 0, QApplication::UnicodeUTF8));
        checkIPv6->setText(QApplication::translate("dialogEditIP", "IPv6 Address", 0, QApplication::UnicodeUTF8));
        checkIPv6Bridge->setText(QApplication::translate("dialogEditIP", "IPv6 Bridge Address (Requires VNET)", 0, QApplication::UnicodeUTF8));
        checkIPv6Router->setText(QApplication::translate("dialogEditIP", "IPv6 Default Router (Requires VNET)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("dialogEditIP", "IPv6", 0, QApplication::UnicodeUTF8));
        comboIPType->clear();
        comboIPType->insertItems(0, QStringList()
         << QApplication::translate("dialogEditIP", "IPv4 Aliases", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("dialogEditIP", "IPv4 Bridge Aliases", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("dialogEditIP", "IPv6 Aliases", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("dialogEditIP", "IPv6 Bridge Aliases", 0, QApplication::UnicodeUTF8)
        );
        pushAdd->setText(QApplication::translate("dialogEditIP", "&Add", 0, QApplication::UnicodeUTF8));
        pushRemove->setText(QApplication::translate("dialogEditIP", "&Remove", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("dialogEditIP", "Aliases", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialogEditIP", "The following permissions can be enabled or disabled for this jail. For more details hover over each item or refer to the jail manpage.", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("dialogEditIP", "Permissions", 0, QApplication::UnicodeUTF8));
        pushSave->setText(QApplication::translate("dialogEditIP", "&Save", 0, QApplication::UnicodeUTF8));
        pushCancel->setText(QApplication::translate("dialogEditIP", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogEditIP: public Ui_dialogEditIP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITIP_H
