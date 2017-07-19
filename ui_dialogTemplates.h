/********************************************************************************
** Form generated from reading UI file 'dialogTemplates.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEMPLATES_H
#define UI_DIALOGTEMPLATES_H

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
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogTemplates
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *listTemps;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushAdd;
    QPushButton *pushRemove;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushClose;

    void setupUi(QDialog *dialogTemplates)
    {
        if (dialogTemplates->objectName().isEmpty())
            dialogTemplates->setObjectName(QString::fromUtf8("dialogTemplates"));
        dialogTemplates->resize(424, 273);
        gridLayout = new QGridLayout(dialogTemplates);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listTemps = new QTreeWidget(dialogTemplates);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("Arch"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("Version"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("Nickname"));
        listTemps->setHeaderItem(__qtreewidgetitem);
        listTemps->setObjectName(QString::fromUtf8("listTemps"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listTemps->sizePolicy().hasHeightForWidth());
        listTemps->setSizePolicy(sizePolicy);
        listTemps->setIndentation(0);
        listTemps->setUniformRowHeights(false);
        listTemps->setItemsExpandable(true);
        listTemps->setSortingEnabled(true);
        listTemps->setAllColumnsShowFocus(true);
        listTemps->setHeaderHidden(false);
        listTemps->header()->setVisible(true);
        listTemps->header()->setCascadingSectionResizes(false);
        listTemps->header()->setDefaultSectionSize(90);
        listTemps->header()->setMinimumSectionSize(90);
        listTemps->header()->setProperty("showSortIndicator", QVariant(true));
        listTemps->header()->setStretchLastSection(true);

        gridLayout->addWidget(listTemps, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushAdd = new QPushButton(dialogTemplates);
        pushAdd->setObjectName(QString::fromUtf8("pushAdd"));
        pushAdd->setMinimumSize(QSize(32, 32));
        pushAdd->setMaximumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushAdd->setIcon(icon);
        pushAdd->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushAdd);

        pushRemove = new QPushButton(dialogTemplates);
        pushRemove->setObjectName(QString::fromUtf8("pushRemove"));
        pushRemove->setMinimumSize(QSize(32, 32));
        pushRemove->setMaximumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/edit_remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushRemove->setIcon(icon1);
        pushRemove->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(pushRemove);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        pushClose = new QPushButton(dialogTemplates);
        pushClose->setObjectName(QString::fromUtf8("pushClose"));

        gridLayout->addWidget(pushClose, 2, 1, 1, 1);


        retranslateUi(dialogTemplates);

        QMetaObject::connectSlotsByName(dialogTemplates);
    } // setupUi

    void retranslateUi(QDialog *dialogTemplates)
    {
        dialogTemplates->setWindowTitle(QApplication::translate("dialogTemplates", "Jail Templates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushAdd->setToolTip(QApplication::translate("dialogTemplates", "Add a new Jail", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushAdd->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushRemove->setToolTip(QApplication::translate("dialogTemplates", "Remove the selected Jail", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushRemove->setText(QString());
        pushClose->setText(QApplication::translate("dialogTemplates", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogTemplates: public Ui_dialogTemplates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEMPLATES_H
