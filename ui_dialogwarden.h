/********************************************************************************
** Form generated from reading UI file 'dialogwarden.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWARDEN_H
#define UI_DIALOGWARDEN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "dialogconfig.h"
#include "dialogdisplayoutput.h"
#include "dialogworking.h"
#include "QtCore/QProcess"
#include "QtCore/QTimer"

QT_BEGIN_NAMESPACE

class Ui_dialogWarden
{
public:
    QAction *fileExitAction;
    QAction *fileCreate_JailAction;
    QAction *jailsRefreshAction;
    QAction *jailsConfigurationAction;
    QAction *fileImport_JailAction;
    QAction *actionTemplate_Manager;
    QWidget *widget;
    QGridLayout *gridLayout_12;
    QGroupBox *groupJailTab;
    QGridLayout *gridLayout_2;
    QTabWidget *tabJail;
    QWidget *tab;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QLabel *label;
    QLabel *labelType;
    QLabel *label_5;
    QLabel *labelSize;
    QLabel *label_4;
    QLabel *labelStartAtBoot;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLabel *labelConnections;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *labelIPs;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout_8;
    QLabel *label_9;
    QLabel *labelPorts;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushUserAdmin;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushServiceGUI;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushTerminal;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushUpdate;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushExportJail;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QGridLayout *gridLayout_15;
    QGroupBox *groupSnaps;
    QGridLayout *gridLayout_13;
    QLabel *labelSnap;
    QSlider *sliderSnaps;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushRestoreSnap;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushCreateSnap;
    QPushButton *pushRemoveSnap;
    QLabel *labelClone;
    QGroupBox *groupSnapSchedule;
    QGridLayout *gridLayout_14;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QComboBox *comboSnapFrequency;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpinBox *spinSnapDays;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTreeWidget *listJails;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushStart;
    QPushButton *pushConfigure;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushAdd;
    QPushButton *pushRemove;
    QMenuBar *MenuBar;
    QMenu *fileMenu;
    QMenu *Jails;

    void setupUi(QMainWindow *dialogWarden)
    {
        if (dialogWarden->objectName().isEmpty())
            dialogWarden->setObjectName(QString::fromUtf8("dialogWarden"));
        dialogWarden->resize(774, 685);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/warden.png"), QSize(), QIcon::Normal, QIcon::Off);
        dialogWarden->setWindowIcon(icon);
        fileExitAction = new QAction(dialogWarden);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/window-close3.png"), QSize(), QIcon::Normal, QIcon::Off);
        fileExitAction->setIcon(icon1);
        fileExitAction->setProperty("name", QVariant(QString::fromUtf8("fileExitAction")));
        fileCreate_JailAction = new QAction(dialogWarden);
        fileCreate_JailAction->setObjectName(QString::fromUtf8("fileCreate_JailAction"));
        fileCreate_JailAction->setProperty("name", QVariant(QString::fromUtf8("fileCreate_JailAction")));
        jailsRefreshAction = new QAction(dialogWarden);
        jailsRefreshAction->setObjectName(QString::fromUtf8("jailsRefreshAction"));
        jailsRefreshAction->setProperty("name", QVariant(QString::fromUtf8("jailsRefreshAction")));
        jailsConfigurationAction = new QAction(dialogWarden);
        jailsConfigurationAction->setObjectName(QString::fromUtf8("jailsConfigurationAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        jailsConfigurationAction->setIcon(icon2);
        jailsConfigurationAction->setProperty("name", QVariant(QString::fromUtf8("jailsConfigurationAction")));
        fileImport_JailAction = new QAction(dialogWarden);
        fileImport_JailAction->setObjectName(QString::fromUtf8("fileImport_JailAction"));
        fileImport_JailAction->setProperty("name", QVariant(QString::fromUtf8("fileImport_JailAction")));
        actionTemplate_Manager = new QAction(dialogWarden);
        actionTemplate_Manager->setObjectName(QString::fromUtf8("actionTemplate_Manager"));
        widget = new QWidget(dialogWarden);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_12 = new QGridLayout(widget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        groupJailTab = new QGroupBox(widget);
        groupJailTab->setObjectName(QString::fromUtf8("groupJailTab"));
        gridLayout_2 = new QGridLayout(groupJailTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabJail = new QTabWidget(groupJailTab);
        tabJail->setObjectName(QString::fromUtf8("tabJail"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabJail->sizePolicy().hasHeightForWidth());
        tabJail->setSizePolicy(sizePolicy);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_9 = new QGridLayout(tab);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy1);
        gridLayout_11 = new QGridLayout(groupBox_4);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_10->addWidget(label, 0, 0, 1, 1);

        labelType = new QLabel(groupBox_4);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        gridLayout_10->addWidget(labelType, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_10->addWidget(label_5, 1, 0, 1, 1);

        labelSize = new QLabel(groupBox_4);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        gridLayout_10->addWidget(labelSize, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_10->addWidget(label_4, 2, 0, 1, 1);

        labelStartAtBoot = new QLabel(groupBox_4);
        labelStartAtBoot->setObjectName(QString::fromUtf8("labelStartAtBoot"));

        gridLayout_10->addWidget(labelStartAtBoot, 2, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        gridLayout_9->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        labelConnections = new QLabel(groupBox_5);
        labelConnections->setObjectName(QString::fromUtf8("labelConnections"));

        horizontalLayout_7->addWidget(labelConnections);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        labelIPs = new QLabel(groupBox_5);
        labelIPs->setObjectName(QString::fromUtf8("labelIPs"));
        labelIPs->setWordWrap(true);

        horizontalLayout_6->addWidget(labelIPs);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_6);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_8->addWidget(label_9, 0, 0, 1, 1);

        labelPorts = new QLabel(groupBox_5);
        labelPorts->setObjectName(QString::fromUtf8("labelPorts"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelPorts->sizePolicy().hasHeightForWidth());
        labelPorts->setSizePolicy(sizePolicy3);
        labelPorts->setMaximumSize(QSize(16777215, 16777215));
        labelPorts->setWordWrap(true);

        gridLayout_8->addWidget(labelPorts, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_8);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_5, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 2, 0, 1, 1);

        tabJail->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushUserAdmin = new QPushButton(groupBox_2);
        pushUserAdmin->setObjectName(QString::fromUtf8("pushUserAdmin"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/cell.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushUserAdmin->setIcon(icon3);

        horizontalLayout_3->addWidget(pushUserAdmin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        pushServiceGUI = new QPushButton(groupBox_2);
        pushServiceGUI->setObjectName(QString::fromUtf8("pushServiceGUI"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/running.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushServiceGUI->setIcon(icon4);

        horizontalLayout_9->addWidget(pushServiceGUI);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        gridLayout_5->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushTerminal = new QPushButton(groupBox_2);
        pushTerminal->setObjectName(QString::fromUtf8("pushTerminal"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/utilities-terminal.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushTerminal->setIcon(icon5);

        horizontalLayout->addWidget(pushTerminal);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_5->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushUpdate = new QPushButton(groupBox_2);
        pushUpdate->setObjectName(QString::fromUtf8("pushUpdate"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/restoresnap.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushUpdate->setIcon(icon6);

        horizontalLayout_2->addWidget(pushUpdate);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        gridLayout_5->addLayout(horizontalLayout_2, 3, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushExportJail = new QPushButton(groupBox_3);
        pushExportJail->setObjectName(QString::fromUtf8("pushExportJail"));
        pushExportJail->setIcon(icon);

        horizontalLayout_5->addWidget(pushExportJail);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout_4->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_3, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(48, 132, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 2, 0, 1, 1);

        tabJail->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_15 = new QGridLayout(tab_3);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        groupSnaps = new QGroupBox(tab_3);
        groupSnaps->setObjectName(QString::fromUtf8("groupSnaps"));
        gridLayout_13 = new QGridLayout(groupSnaps);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        labelSnap = new QLabel(groupSnaps);
        labelSnap->setObjectName(QString::fromUtf8("labelSnap"));

        gridLayout_13->addWidget(labelSnap, 0, 0, 1, 1);

        sliderSnaps = new QSlider(groupSnaps);
        sliderSnaps->setObjectName(QString::fromUtf8("sliderSnaps"));
        sliderSnaps->setMaximum(0);
        sliderSnaps->setOrientation(Qt::Horizontal);
        sliderSnaps->setTickPosition(QSlider::TicksBothSides);
        sliderSnaps->setTickInterval(1);

        gridLayout_13->addWidget(sliderSnaps, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushRestoreSnap = new QPushButton(groupSnaps);
        pushRestoreSnap->setObjectName(QString::fromUtf8("pushRestoreSnap"));
        pushRestoreSnap->setMinimumSize(QSize(32, 32));
        pushRestoreSnap->setMaximumSize(QSize(100, 32));
        pushRestoreSnap->setIcon(icon6);

        horizontalLayout_8->addWidget(pushRestoreSnap);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);

        pushCreateSnap = new QPushButton(groupSnaps);
        pushCreateSnap->setObjectName(QString::fromUtf8("pushCreateSnap"));
        pushCreateSnap->setMinimumSize(QSize(32, 32));
        pushCreateSnap->setMaximumSize(QSize(100, 32));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushCreateSnap->setIcon(icon7);

        horizontalLayout_8->addWidget(pushCreateSnap);

        pushRemoveSnap = new QPushButton(groupSnaps);
        pushRemoveSnap->setObjectName(QString::fromUtf8("pushRemoveSnap"));
        pushRemoveSnap->setMinimumSize(QSize(32, 32));
        pushRemoveSnap->setMaximumSize(QSize(100, 32));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushRemoveSnap->setIcon(icon8);

        horizontalLayout_8->addWidget(pushRemoveSnap);


        gridLayout_13->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        labelClone = new QLabel(groupSnaps);
        labelClone->setObjectName(QString::fromUtf8("labelClone"));
        labelClone->setWordWrap(true);

        gridLayout_13->addWidget(labelClone, 2, 0, 1, 1);


        gridLayout_15->addWidget(groupSnaps, 0, 0, 1, 1);

        groupSnapSchedule = new QGroupBox(tab_3);
        groupSnapSchedule->setObjectName(QString::fromUtf8("groupSnapSchedule"));
        groupSnapSchedule->setCheckable(true);
        groupSnapSchedule->setChecked(false);
        gridLayout_14 = new QGridLayout(groupSnapSchedule);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_6 = new QLabel(groupSnapSchedule);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_12->addWidget(label_6);

        comboSnapFrequency = new QComboBox(groupSnapSchedule);
        comboSnapFrequency->insertItems(0, QStringList()
         << QString::fromUtf8("daily")
         << QString::fromUtf8("hourly")
        );
        comboSnapFrequency->setObjectName(QString::fromUtf8("comboSnapFrequency"));

        horizontalLayout_12->addWidget(comboSnapFrequency);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);


        gridLayout_14->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_8 = new QLabel(groupSnapSchedule);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_11->addWidget(label_8);

        spinSnapDays = new QSpinBox(groupSnapSchedule);
        spinSnapDays->setObjectName(QString::fromUtf8("spinSnapDays"));
        spinSnapDays->setValue(10);

        horizontalLayout_11->addWidget(spinSnapDays);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_14);


        gridLayout_14->addLayout(horizontalLayout_11, 1, 0, 1, 1);


        gridLayout_15->addWidget(groupSnapSchedule, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(710, 248, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_15->addItem(verticalSpacer_3, 2, 0, 1, 1);

        tabJail->addTab(tab_3, QString());

        gridLayout_2->addWidget(tabJail, 0, 0, 1, 1);


        gridLayout_12->addWidget(groupJailTab, 1, 0, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listJails = new QTreeWidget(groupBox);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QString::fromUtf8("Updates"));
        __qtreewidgetitem->setText(2, QString::fromUtf8("Status"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("Jail"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("JDIR"));
        listJails->setHeaderItem(__qtreewidgetitem);
        listJails->setObjectName(QString::fromUtf8("listJails"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(listJails->sizePolicy().hasHeightForWidth());
        listJails->setSizePolicy(sizePolicy4);
        listJails->setIndentation(0);
        listJails->setUniformRowHeights(false);
        listJails->setItemsExpandable(true);
        listJails->setSortingEnabled(true);
        listJails->setAllColumnsShowFocus(true);
        listJails->setHeaderHidden(false);
        listJails->header()->setVisible(true);
        listJails->header()->setCascadingSectionResizes(false);
        listJails->header()->setDefaultSectionSize(90);
        listJails->header()->setMinimumSectionSize(90);
        listJails->header()->setProperty("showSortIndicator", QVariant(true));
        listJails->header()->setStretchLastSection(true);

        gridLayout->addWidget(listJails, 0, 1, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushStart = new QPushButton(groupBox);
        pushStart->setObjectName(QString::fromUtf8("pushStart"));
        pushStart->setMinimumSize(QSize(32, 32));
        pushStart->setMaximumSize(QSize(300, 32));
        pushStart->setIcon(icon4);
        pushStart->setIconSize(QSize(20, 20));
        pushStart->setAutoDefault(false);
        pushStart->setDefault(false);
        pushStart->setFlat(false);

        horizontalLayout_10->addWidget(pushStart);

        pushConfigure = new QPushButton(groupBox);
        pushConfigure->setObjectName(QString::fromUtf8("pushConfigure"));
        pushConfigure->setMinimumSize(QSize(32, 32));
        pushConfigure->setMaximumSize(QSize(400, 32));
        pushConfigure->setIcon(icon2);
        pushConfigure->setIconSize(QSize(20, 20));

        horizontalLayout_10->addWidget(pushConfigure);

        horizontalSpacer = new QSpacerItem(155, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        pushAdd = new QPushButton(groupBox);
        pushAdd->setObjectName(QString::fromUtf8("pushAdd"));
        pushAdd->setMinimumSize(QSize(32, 32));
        pushAdd->setMaximumSize(QSize(300, 32));
        pushAdd->setIcon(icon7);
        pushAdd->setIconSize(QSize(20, 20));

        horizontalLayout_10->addWidget(pushAdd);

        pushRemove = new QPushButton(groupBox);
        pushRemove->setObjectName(QString::fromUtf8("pushRemove"));
        pushRemove->setMinimumSize(QSize(32, 32));
        pushRemove->setMaximumSize(QSize(300, 32));
        pushRemove->setIcon(icon8);
        pushRemove->setIconSize(QSize(20, 20));

        horizontalLayout_10->addWidget(pushRemove);


        gridLayout->addLayout(horizontalLayout_10, 1, 0, 1, 2);


        gridLayout_12->addWidget(groupBox, 0, 0, 1, 1);

        dialogWarden->setCentralWidget(widget);
        MenuBar = new QMenuBar(dialogWarden);
        MenuBar->setObjectName(QString::fromUtf8("MenuBar"));
        MenuBar->setGeometry(QRect(0, 0, 774, 20));
        fileMenu = new QMenu(MenuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        Jails = new QMenu(MenuBar);
        Jails->setObjectName(QString::fromUtf8("Jails"));
        dialogWarden->setMenuBar(MenuBar);

        MenuBar->addAction(fileMenu->menuAction());
        MenuBar->addAction(Jails->menuAction());
        MenuBar->addSeparator();
        fileMenu->addSeparator();
        fileMenu->addSeparator();
        fileMenu->addAction(fileCreate_JailAction);
        fileMenu->addAction(fileImport_JailAction);
        fileMenu->addSeparator();
        fileMenu->addAction(actionTemplate_Manager);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        Jails->addSeparator();
        Jails->addAction(jailsRefreshAction);
        Jails->addSeparator();
        Jails->addAction(jailsConfigurationAction);

        retranslateUi(dialogWarden);
        QObject::connect(jailsConfigurationAction, SIGNAL(triggered()), dialogWarden, SLOT(slotOpenConfig()));
        QObject::connect(fileExitAction, SIGNAL(triggered()), dialogWarden, SLOT(slotExit()));
        QObject::connect(jailsRefreshAction, SIGNAL(triggered()), dialogWarden, SLOT(refreshJails()));
        QObject::connect(fileCreate_JailAction, SIGNAL(triggered()), dialogWarden, SLOT(slotClickedNewJail()));
        QObject::connect(fileImport_JailAction, SIGNAL(triggered()), dialogWarden, SLOT(slotImportJailClicked()));
        QObject::connect(actionTemplate_Manager, SIGNAL(triggered()), dialogWarden, SLOT(slotTemplateOpen()));

        tabJail->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialogWarden);
    } // setupUi

    void retranslateUi(QMainWindow *dialogWarden)
    {
        dialogWarden->setWindowTitle(QApplication::translate("dialogWarden", "The Warden", 0, QApplication::UnicodeUTF8));
        fileExitAction->setText(QApplication::translate("dialogWarden", "&Quit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setIconText(QApplication::translate("dialogWarden", "Exit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setShortcut(QString());
        fileCreate_JailAction->setText(QApplication::translate("dialogWarden", "&New Jail", 0, QApplication::UnicodeUTF8));
        fileCreate_JailAction->setIconText(QApplication::translate("dialogWarden", "New Jail", 0, QApplication::UnicodeUTF8));
        jailsRefreshAction->setText(QApplication::translate("dialogWarden", "&Refresh Jails", 0, QApplication::UnicodeUTF8));
        jailsRefreshAction->setIconText(QApplication::translate("dialogWarden", "Refresh", 0, QApplication::UnicodeUTF8));
        jailsConfigurationAction->setText(QApplication::translate("dialogWarden", "&Settings", 0, QApplication::UnicodeUTF8));
        jailsConfigurationAction->setIconText(QApplication::translate("dialogWarden", "Configuration", 0, QApplication::UnicodeUTF8));
        fileImport_JailAction->setText(QApplication::translate("dialogWarden", "&Import Jail", 0, QApplication::UnicodeUTF8));
        fileImport_JailAction->setIconText(QApplication::translate("dialogWarden", "Import Jail", 0, QApplication::UnicodeUTF8));
        actionTemplate_Manager->setText(QApplication::translate("dialogWarden", "&Template Manager", 0, QApplication::UnicodeUTF8));
        groupJailTab->setTitle(QApplication::translate("dialogWarden", "Working on Jail", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("dialogWarden", "Jail Information", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialogWarden", "Jail Type:", 0, QApplication::UnicodeUTF8));
        labelType->setText(QString());
        label_5->setText(QApplication::translate("dialogWarden", "Size on Disk:", 0, QApplication::UnicodeUTF8));
        labelSize->setText(QString());
        label_4->setText(QApplication::translate("dialogWarden", "Start at boot:", 0, QApplication::UnicodeUTF8));
        labelStartAtBoot->setText(QString());
        groupBox_5->setTitle(QApplication::translate("dialogWarden", "Network Information", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dialogWarden", "Active Connections:", 0, QApplication::UnicodeUTF8));
        labelConnections->setText(QString());
        label_7->setText(QApplication::translate("dialogWarden", "IPs:", 0, QApplication::UnicodeUTF8));
        labelIPs->setText(QString());
        label_9->setText(QApplication::translate("dialogWarden", "Listening on Ports:", 0, QApplication::UnicodeUTF8));
        labelPorts->setText(QString());
        tabJail->setTabText(tabJail->indexOf(tab), QApplication::translate("dialogWarden", "Info", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("dialogWarden", "Jail Management", 0, QApplication::UnicodeUTF8));
        pushUserAdmin->setText(QApplication::translate("dialogWarden", "User Administrator", 0, QApplication::UnicodeUTF8));
        pushServiceGUI->setText(QApplication::translate("dialogWarden", "Service Manager", 0, QApplication::UnicodeUTF8));
        pushTerminal->setText(QApplication::translate("dialogWarden", "Launch Terminal", 0, QApplication::UnicodeUTF8));
        pushUpdate->setText(QApplication::translate("dialogWarden", "Check for Updates", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("dialogWarden", "Utilities", 0, QApplication::UnicodeUTF8));
        pushExportJail->setText(QApplication::translate("dialogWarden", "Export Jail", 0, QApplication::UnicodeUTF8));
        tabJail->setTabText(tabJail->indexOf(tab_2), QApplication::translate("dialogWarden", "Tools", 0, QApplication::UnicodeUTF8));
        groupSnaps->setTitle(QApplication::translate("dialogWarden", "Snapshots", 0, QApplication::UnicodeUTF8));
        labelSnap->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushRestoreSnap->setToolTip(QApplication::translate("dialogWarden", "Restore existing snapshot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushRestoreSnap->setText(QApplication::translate("dialogWarden", "R&estore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushCreateSnap->setToolTip(QApplication::translate("dialogWarden", "Create a new snapshot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushCreateSnap->setText(QApplication::translate("dialogWarden", "&Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushRemoveSnap->setToolTip(QApplication::translate("dialogWarden", "Delete the snapshot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushRemoveSnap->setText(QApplication::translate("dialogWarden", "&Remove", 0, QApplication::UnicodeUTF8));
        labelClone->setText(QString());
        groupSnapSchedule->setTitle(QApplication::translate("dialogWarden", "Scheduled Snapshots", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("dialogWarden", "Snapshot Frequency", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("dialogWarden", "Days to keep", 0, QApplication::UnicodeUTF8));
        tabJail->setTabText(tabJail->indexOf(tab_3), QApplication::translate("dialogWarden", "Snapshots", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("dialogWarden", "Installed Jails", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushStart->setToolTip(QApplication::translate("dialogWarden", "Start the selected jail", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushStart->setText(QApplication::translate("dialogWarden", "&Start Jail", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushConfigure->setToolTip(QApplication::translate("dialogWarden", "Configure the jail", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushConfigure->setText(QApplication::translate("dialogWarden", "J&ail Configuration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushAdd->setToolTip(QApplication::translate("dialogWarden", "Add a new Jail", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushAdd->setText(QApplication::translate("dialogWarden", "&New Jail", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushRemove->setToolTip(QApplication::translate("dialogWarden", "Remove the selected Jail", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushRemove->setText(QApplication::translate("dialogWarden", "&Remove Jail", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("dialogWarden", "&File", 0, QApplication::UnicodeUTF8));
        Jails->setTitle(QApplication::translate("dialogWarden", "&Configure", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogWarden: public Ui_dialogWarden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWARDEN_H
