/********************************************************************************
** Form generated from reading UI file 'wizardNewJail.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARDNEWJAIL_H
#define UI_WIZARDNEWJAIL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWizard>
#include <QtGui/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_wizardNewJail
{
public:
    QWizardPage *Page_IP;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *textLabel1_2;
    QLineEdit *lineHost;
    QCheckBox *checkIPv6;
    QLineEdit *lineIP;
    QCheckBox *checkIPv4;
    QSpacerItem *verticalSpacer_23;
    QLineEdit *lineIP6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelMessage;
    QWizardPage *Page_Type;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_12;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QRadioButton *radioTraditionalJail;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *checkPCBSDUtils;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_11;
    QComboBox *comboTemplate;
    QRadioButton *radioPortsJail;
    QRadioButton *radioLinuxJail;
    QSpacerItem *verticalSpacer_9;
    QWizardPage *Page_Root;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *_3;
    QLabel *textLabel2;
    QLineEdit *lineRoot;
    QSpacerItem *verticalSpacer_15;
    QVBoxLayout *_5;
    QLabel *textLabel2_2;
    QLineEdit *lineRoot2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QWizardPage *Page_Linux;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_21;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_20;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineLinuxScript;
    QPushButton *pushLinuxScript;
    QSpacerItem *verticalSpacer_22;
    QSpacerItem *horizontalSpacer_9;
    QWizardPage *Page_Opts;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_18;
    QSpacerItem *verticalSpacer_19;
    QLabel *labelConfirm;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_16;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QCheckBox *checkSystemSource;
    QCheckBox *checkPortsTree;
    QCheckBox *checkAutostart;
    QSpacerItem *verticalSpacer_17;

    void setupUi(QWizard *wizardNewJail)
    {
        if (wizardNewJail->objectName().isEmpty())
            wizardNewJail->setObjectName(QString::fromUtf8("wizardNewJail"));
        wizardNewJail->resize(631, 388);
        Page_IP = new QWizardPage();
        Page_IP->setObjectName(QString::fromUtf8("Page_IP"));
        gridLayout_2 = new QGridLayout(Page_IP);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(Page_IP);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(55, 55));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/cell.png")));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 4, 1);

        verticalSpacer = new QSpacerItem(387, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 2);

        label = new QLabel(Page_IP);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 1, 1, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(17, 256, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 3, 1);

        verticalSpacer_3 = new QSpacerItem(418, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 2, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 58, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textLabel1_2 = new QLabel(Page_IP);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        textLabel1_2->setAlignment(Qt::AlignCenter);
        textLabel1_2->setWordWrap(false);

        gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

        lineHost = new QLineEdit(Page_IP);
        lineHost->setObjectName(QString::fromUtf8("lineHost"));
        lineHost->setAlignment(Qt::AlignHCenter);

        gridLayout->addWidget(lineHost, 1, 0, 1, 1);

        checkIPv6 = new QCheckBox(Page_IP);
        checkIPv6->setObjectName(QString::fromUtf8("checkIPv6"));

        gridLayout->addWidget(checkIPv6, 5, 0, 1, 1);

        lineIP = new QLineEdit(Page_IP);
        lineIP->setObjectName(QString::fromUtf8("lineIP"));
        lineIP->setEnabled(true);
        lineIP->setInputMask(QString::fromUtf8(""));

        gridLayout->addWidget(lineIP, 4, 0, 1, 1);

        checkIPv4 = new QCheckBox(Page_IP);
        checkIPv4->setObjectName(QString::fromUtf8("checkIPv4"));
        checkIPv4->setChecked(true);

        gridLayout->addWidget(checkIPv4, 3, 0, 1, 1);

        verticalSpacer_23 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_23, 2, 0, 1, 1);

        lineIP6 = new QLineEdit(Page_IP);
        lineIP6->setObjectName(QString::fromUtf8("lineIP6"));
        lineIP6->setEnabled(false);

        gridLayout->addWidget(lineIP6, 6, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(335, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(387, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 1, 1, 3);

        labelMessage = new QLabel(Page_IP);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        labelMessage->setFont(font);
        labelMessage->setFocusPolicy(Qt::NoFocus);
        labelMessage->setLayoutDirection(Qt::LeftToRight);
        labelMessage->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelMessage, 5, 2, 1, 1);

        wizardNewJail->addPage(Page_IP);
        Page_Type = new QWizardPage();
        Page_Type->setObjectName(QString::fromUtf8("Page_Type"));
        gridLayout_4 = new QGridLayout(Page_Type);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(Page_Type);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMaximumSize(QSize(55, 55));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/cell.png")));
        label_7->setScaledContents(true);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_7);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_14);


        gridLayout_4->addLayout(verticalLayout_6, 0, 0, 4, 1);

        verticalSpacer_12 = new QSpacerItem(387, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_12, 0, 1, 1, 1);

        label_5 = new QLabel(Page_Type);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);

        gridLayout_4->addWidget(label_5, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(17, 256, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 2, 3, 1);

        verticalSpacer_8 = new QSpacerItem(418, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_8, 2, 1, 1, 1);

        groupBox = new QGroupBox(Page_Type);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        radioTraditionalJail = new QRadioButton(groupBox);
        radioTraditionalJail->setObjectName(QString::fromUtf8("radioTraditionalJail"));
        radioTraditionalJail->setChecked(true);

        gridLayout_9->addWidget(radioTraditionalJail, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        checkPCBSDUtils = new QCheckBox(groupBox);
        checkPCBSDUtils->setObjectName(QString::fromUtf8("checkPCBSDUtils"));
        checkPCBSDUtils->setChecked(true);

        horizontalLayout_2->addWidget(checkPCBSDUtils);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_12);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        comboTemplate = new QComboBox(groupBox);
        comboTemplate->setObjectName(QString::fromUtf8("comboTemplate"));

        horizontalLayout_3->addWidget(comboTemplate);


        gridLayout_3->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_3, 1, 0, 1, 1);

        radioPortsJail = new QRadioButton(groupBox);
        radioPortsJail->setObjectName(QString::fromUtf8("radioPortsJail"));

        gridLayout_9->addWidget(radioPortsJail, 2, 0, 1, 1);

        radioLinuxJail = new QRadioButton(groupBox);
        radioLinuxJail->setObjectName(QString::fromUtf8("radioLinuxJail"));

        gridLayout_9->addWidget(radioLinuxJail, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 3, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(348, 151, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_9, 4, 1, 1, 1);

        wizardNewJail->addPage(Page_Type);
        Page_Root = new QWizardPage();
        Page_Root->setObjectName(QString::fromUtf8("Page_Root"));
        gridLayout_5 = new QGridLayout(Page_Root);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(Page_Root);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(55, 55));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/cell.png")));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_11);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 5, 1);

        verticalSpacer_7 = new QSpacerItem(387, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_7, 0, 1, 1, 3);

        label_3 = new QLabel(Page_Root);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        gridLayout_5->addWidget(label_3, 1, 1, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(17, 256, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 1, 4, 4, 1);

        verticalSpacer_5 = new QSpacerItem(418, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_5, 2, 1, 1, 3);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        _3 = new QVBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        textLabel2 = new QLabel(Page_Root);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        textLabel2->setAlignment(Qt::AlignCenter);
        textLabel2->setWordWrap(false);

        _3->addWidget(textLabel2);

        lineRoot = new QLineEdit(Page_Root);
        lineRoot->setObjectName(QString::fromUtf8("lineRoot"));
        lineRoot->setEchoMode(QLineEdit::Password);

        _3->addWidget(lineRoot);


        verticalLayout_2->addLayout(_3);

        verticalSpacer_15 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_15);

        _5 = new QVBoxLayout();
        _5->setObjectName(QString::fromUtf8("_5"));
        textLabel2_2 = new QLabel(Page_Root);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setAlignment(Qt::AlignCenter);
        textLabel2_2->setWordWrap(false);

        _5->addWidget(textLabel2_2);

        lineRoot2 = new QLineEdit(Page_Root);
        lineRoot2->setObjectName(QString::fromUtf8("lineRoot2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineRoot2->sizePolicy().hasHeightForWidth());
        lineRoot2->setSizePolicy(sizePolicy2);
        lineRoot2->setEchoMode(QLineEdit::Password);

        _5->addWidget(lineRoot2);


        verticalLayout_2->addLayout(_5);


        gridLayout_5->addLayout(verticalLayout_2, 3, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 3, 3, 1, 1);

        verticalSpacer_6 = new QSpacerItem(387, 111, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 4, 1, 1, 3);

        wizardNewJail->addPage(Page_Root);
        Page_Linux = new QWizardPage();
        Page_Linux->setObjectName(QString::fromUtf8("Page_Linux"));
        gridLayout_8 = new QGridLayout(Page_Linux);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(Page_Linux);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMaximumSize(QSize(55, 55));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/cell.png")));
        label_6->setScaledContents(true);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_13);


        gridLayout_8->addLayout(verticalLayout_5, 0, 0, 7, 1);

        verticalSpacer_21 = new QSpacerItem(387, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_8->addItem(verticalSpacer_21, 0, 1, 1, 1);

        label_10 = new QLabel(Page_Linux);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_10->setWordWrap(true);

        gridLayout_8->addWidget(label_10, 1, 1, 1, 1);

        verticalSpacer_20 = new QSpacerItem(418, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_8->addItem(verticalSpacer_20, 2, 1, 1, 1);

        label_11 = new QLabel(Page_Linux);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_8->addWidget(label_11, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineLinuxScript = new QLineEdit(Page_Linux);
        lineLinuxScript->setObjectName(QString::fromUtf8("lineLinuxScript"));
        lineLinuxScript->setReadOnly(true);

        horizontalLayout->addWidget(lineLinuxScript);

        pushLinuxScript = new QPushButton(Page_Linux);
        pushLinuxScript->setObjectName(QString::fromUtf8("pushLinuxScript"));
        sizePolicy.setHeightForWidth(pushLinuxScript->sizePolicy().hasHeightForWidth());
        pushLinuxScript->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushLinuxScript->setIcon(icon);

        horizontalLayout->addWidget(pushLinuxScript);


        gridLayout_8->addLayout(horizontalLayout, 4, 1, 1, 1);

        verticalSpacer_22 = new QSpacerItem(20, 145, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_22, 5, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(458, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_9, 6, 1, 1, 1);

        wizardNewJail->addPage(Page_Linux);
        Page_Opts = new QWizardPage();
        Page_Opts->setObjectName(QString::fromUtf8("Page_Opts"));
        gridLayout_7 = new QGridLayout(Page_Opts);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_8 = new QLabel(Page_Opts);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMaximumSize(QSize(55, 55));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/cell.png")));
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_8);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_18);


        gridLayout_7->addLayout(verticalLayout_7, 0, 0, 5, 1);

        verticalSpacer_19 = new QSpacerItem(387, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_7->addItem(verticalSpacer_19, 0, 1, 1, 1);

        labelConfirm = new QLabel(Page_Opts);
        labelConfirm->setObjectName(QString::fromUtf8("labelConfirm"));
        sizePolicy1.setHeightForWidth(labelConfirm->sizePolicy().hasHeightForWidth());
        labelConfirm->setSizePolicy(sizePolicy1);
        labelConfirm->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelConfirm->setWordWrap(true);

        gridLayout_7->addWidget(labelConfirm, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(17, 256, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 1, 2, 4, 1);

        verticalSpacer_16 = new QSpacerItem(418, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_7->addItem(verticalSpacer_16, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(Page_Opts);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        checkSystemSource = new QCheckBox(groupBox_2);
        checkSystemSource->setObjectName(QString::fromUtf8("checkSystemSource"));

        gridLayout_6->addWidget(checkSystemSource, 0, 0, 1, 1);

        checkPortsTree = new QCheckBox(groupBox_2);
        checkPortsTree->setObjectName(QString::fromUtf8("checkPortsTree"));

        gridLayout_6->addWidget(checkPortsTree, 1, 0, 1, 1);

        checkAutostart = new QCheckBox(groupBox_2);
        checkAutostart->setObjectName(QString::fromUtf8("checkAutostart"));

        gridLayout_6->addWidget(checkAutostart, 2, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 3, 1, 1, 1);

        verticalSpacer_17 = new QSpacerItem(387, 96, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_17, 4, 1, 1, 1);

        wizardNewJail->addPage(Page_Opts);

        retranslateUi(wizardNewJail);

        QMetaObject::connectSlotsByName(wizardNewJail);
    } // setupUi

    void retranslateUi(QWizard *wizardNewJail)
    {
        wizardNewJail->setWindowTitle(QApplication::translate("wizardNewJail", "New Jail Wizard", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("wizardNewJail", "This wizard will walk you through creating a new jail. First, enter a hostname and IP address not currently in use on the network. If you plan to use IPv6 to access the jail, check the IPv6 Address box and input a valid IPv6 address. When finished, click Next to continue.", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("wizardNewJail", "Hostname", 0, QApplication::UnicodeUTF8));
        lineHost->setText(QApplication::translate("wizardNewJail", "Jailbird", 0, QApplication::UnicodeUTF8));
        checkIPv6->setText(QApplication::translate("wizardNewJail", "IPv6 Address", 0, QApplication::UnicodeUTF8));
        lineIP->setText(QString());
        checkIPv4->setText(QApplication::translate("wizardNewJail", "IPv4 Address", 0, QApplication::UnicodeUTF8));
        labelMessage->setText(QString());
        label_7->setText(QString());
        label_5->setText(QApplication::translate("wizardNewJail", "Please select the type of jail you want to create. ", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("wizardNewJail", "Jail Type", 0, QApplication::UnicodeUTF8));
        radioTraditionalJail->setText(QApplication::translate("wizardNewJail", "Traditional Jail (Secure, best for services)", 0, QApplication::UnicodeUTF8));
        checkPCBSDUtils->setText(QApplication::translate("wizardNewJail", "Install PKGNG and PC-BSD utilities", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("wizardNewJail", "Jail Version", 0, QApplication::UnicodeUTF8));
        radioPortsJail->setText(QApplication::translate("wizardNewJail", "Ports Jail (Insecure, allows running X applications)", 0, QApplication::UnicodeUTF8));
        radioLinuxJail->setText(QApplication::translate("wizardNewJail", "Linux Jail (Run Linux within a jail) - Experimental!", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_3->setText(QApplication::translate("wizardNewJail", "Next enter the root password for this jail. ", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("wizardNewJail", "Root Password", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("wizardNewJail", "Root Password (Confirm)", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_10->setText(QApplication::translate("wizardNewJail", "Please select the Linux install script to use for this jail.", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        pushLinuxScript->setText(QString());
        label_8->setText(QString());
        labelConfirm->setText(QApplication::translate("wizardNewJail", "Please take a moment and set any other options for this jail. Note that including the system source option requires that they be present in /usr/src. ", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("wizardNewJail", "Jail Options", 0, QApplication::UnicodeUTF8));
        checkSystemSource->setText(QApplication::translate("wizardNewJail", "Include system source", 0, QApplication::UnicodeUTF8));
        checkPortsTree->setText(QApplication::translate("wizardNewJail", "Include ports tree", 0, QApplication::UnicodeUTF8));
        checkAutostart->setText(QApplication::translate("wizardNewJail", "Start jail at system bootup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class wizardNewJail: public Ui_wizardNewJail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARDNEWJAIL_H
