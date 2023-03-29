/********************************************************************************
** Form generated from reading UI file 'BossMachineInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOSSMACHINEINFO_H
#define UI_BOSSMACHINEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BossMachineInfo
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_machine_id;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_default_text1;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_admin_code;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_generate_code;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_ctl_door;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_drink_info;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget_snack_info;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_machine_door_info;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *BossMachineInfo)
    {
        if (BossMachineInfo->objectName().isEmpty())
            BossMachineInfo->setObjectName(QStringLiteral("BossMachineInfo"));
        BossMachineInfo->resize(450, 890);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BossMachineInfo->sizePolicy().hasHeightForWidth());
        BossMachineInfo->setSizePolicy(sizePolicy);
        BossMachineInfo->setMaximumSize(QSize(450, 890));
        BossMachineInfo->setStyleSheet(QLatin1String("#BossMachineInfo{		\n"
"	background-color: rgb(199, 236, 247);\n"
"}\n"
"\n"
"QTableView::item:selected{\n"
"    selection-background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"QTableWidget{	\n"
"	background-color: rgba(252, 255, 189,170);\n"
"	border: 3px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"}\n"
"QPushButton{\n"
"	background-color: rgb(255, 229, 235);\n"
"	border: 3px solid rgb(255, 125, 153);\n"
"    border-radius: 12px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                        stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"	border: 3px solid rgb(255, 174, 192);\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    /*left: 5px;  move to the right by 5px */\n"
"	alignment: center;\n"
"}\n"
"\n"
"QTabBar::tab {    \n"
"	background-color: rgb(170, 244, 220);\n"
"    border: 3px solid rgb(255, 202, 206);\n"
"    border-bottom-color: rgb(255, 202, 206); /* same as the pane color */\n"
"  "
                        "  border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;\n"
"	border-bottom-left-radius: 8px;\n"
"	border-bottom-right-radius: 8px;\n"
"    padding: 2px;\n"
"	min-height: 30px;\n"
"	min-width : 60px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {		\n"
"	background-color: rgb(212, 255, 241);\n"
"}\n"
"\n"
"QTabBar::tab:selected {	\n"
"	background-color: rgb(72, 221, 152);\n"
"	border: 3px solid rgb(255, 143, 145);\n"
"    border-bottom-color: rgb(255, 143, 145); /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 1px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"QTableView::item:selected{\n"
"    selection-background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"\n"
"QTabWidget:pane {\n"
"	border-top:  0px hidden rgba(0,0,0,0);\n"
"	background:  transparent; \n"
"}"));
        verticalLayout = new QVBoxLayout(BossMachineInfo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_machine_id = new QLabel(BossMachineInfo);
        label_machine_id->setObjectName(QStringLiteral("label_machine_id"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_machine_id->sizePolicy().hasHeightForWidth());
        label_machine_id->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_machine_id->setFont(font);
        label_machine_id->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_machine_id);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_10 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        label_default_text1 = new QLabel(BossMachineInfo);
        label_default_text1->setObjectName(QStringLiteral("label_default_text1"));
        sizePolicy1.setHeightForWidth(label_default_text1->sizePolicy().hasHeightForWidth());
        label_default_text1->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_default_text1->setFont(font1);
        label_default_text1->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_default_text1);

        horizontalSpacer_11 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        label_admin_code = new QLabel(BossMachineInfo);
        label_admin_code->setObjectName(QStringLiteral("label_admin_code"));
        sizePolicy1.setHeightForWidth(label_admin_code->sizePolicy().hasHeightForWidth());
        label_admin_code->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QStringLiteral("Cascadia Mono"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        label_admin_code->setFont(font2);
        label_admin_code->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_admin_code);

        horizontalSpacer_12 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 2);
        horizontalLayout_5->setStretch(3, 2);
        horizontalLayout_5->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        pushButton_generate_code = new QPushButton(BossMachineInfo);
        pushButton_generate_code->setObjectName(QStringLiteral("pushButton_generate_code"));
        sizePolicy1.setHeightForWidth(pushButton_generate_code->sizePolicy().hasHeightForWidth());
        pushButton_generate_code->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(12);
        pushButton_generate_code->setFont(font3);

        horizontalLayout_4->addWidget(pushButton_generate_code);

        horizontalSpacer_6 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pushButton_ctl_door = new QPushButton(BossMachineInfo);
        pushButton_ctl_door->setObjectName(QStringLiteral("pushButton_ctl_door"));
        sizePolicy1.setHeightForWidth(pushButton_ctl_door->sizePolicy().hasHeightForWidth());
        pushButton_ctl_door->setSizePolicy(sizePolicy1);
        pushButton_ctl_door->setFont(font3);

        horizontalLayout_4->addWidget(pushButton_ctl_door);

        horizontalSpacer_9 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 2);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tabWidget = new QTabWidget(BossMachineInfo);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_drink_info = new QTableWidget(tab);
        tableWidget_drink_info->setObjectName(QStringLiteral("tableWidget_drink_info"));

        gridLayout->addWidget(tableWidget_drink_info, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget_snack_info = new QTableWidget(tab_2);
        tableWidget_snack_info->setObjectName(QStringLiteral("tableWidget_snack_info"));

        gridLayout_2->addWidget(tableWidget_snack_info, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_3->addWidget(tabWidget);

        horizontalLayout_3->setStretch(0, 12);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_14 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        label_machine_door_info = new QLabel(BossMachineInfo);
        label_machine_door_info->setObjectName(QStringLiteral("label_machine_door_info"));
        sizePolicy1.setHeightForWidth(label_machine_door_info->sizePolicy().hasHeightForWidth());
        label_machine_door_info->setSizePolicy(sizePolicy1);
        label_machine_door_info->setFont(font1);
        label_machine_door_info->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_machine_door_info);

        horizontalSpacer_13 = new QSpacerItem(21, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_back = new QPushButton(BossMachineInfo);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        sizePolicy1.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy1);
        pushButton_back->setFont(font3);

        horizontalLayout->addWidget(pushButton_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 120);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 1);
        verticalLayout->setStretch(8, 1);
        verticalLayout->setStretch(9, 1);

        retranslateUi(BossMachineInfo);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BossMachineInfo);
    } // setupUi

    void retranslateUi(QDialog *BossMachineInfo)
    {
        BossMachineInfo->setWindowTitle(QApplication::translate("BossMachineInfo", "Dialog", Q_NULLPTR));
        label_machine_id->setText(QApplication::translate("BossMachineInfo", "\344\270\200\345\217\267\346\237\234\346\234\272", Q_NULLPTR));
        label_default_text1->setText(QApplication::translate("BossMachineInfo", "\346\216\210\346\235\203\347\240\201:", Q_NULLPTR));
        label_admin_code->setText(QApplication::translate("BossMachineInfo", "0", Q_NULLPTR));
        pushButton_generate_code->setText(QApplication::translate("BossMachineInfo", "\347\224\237\346\210\220\346\216\210\346\235\203\347\240\201", Q_NULLPTR));
        pushButton_ctl_door->setText(QApplication::translate("BossMachineInfo", "\345\274\200\345\205\263\346\237\234\351\227\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("BossMachineInfo", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("BossMachineInfo", "Tab 2", Q_NULLPTR));
        label_machine_door_info->setText(QApplication::translate("BossMachineInfo", "\346\237\234\351\227\250\345\267\262\345\205\263\351\227\255", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("BossMachineInfo", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BossMachineInfo: public Ui_BossMachineInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOSSMACHINEINFO_H
