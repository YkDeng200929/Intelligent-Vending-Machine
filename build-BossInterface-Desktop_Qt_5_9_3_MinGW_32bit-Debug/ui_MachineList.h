/********************************************************************************
** Form generated from reading UI file 'MachineList.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINELIST_H
#define UI_MACHINELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MachineList
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_display_text;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget_machine_list;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *MachineList)
    {
        if (MachineList->objectName().isEmpty())
            MachineList->setObjectName(QStringLiteral("MachineList"));
        MachineList->resize(450, 890);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MachineList->sizePolicy().hasHeightForWidth());
        MachineList->setSizePolicy(sizePolicy);
        MachineList->setMinimumSize(QSize(0, 0));
        MachineList->setMaximumSize(QSize(450, 890));
        MachineList->setStyleSheet(QLatin1String("#MachineList{		\n"
"background-color: rgb(199, 236, 247);\n"
"}\n"
"\n"
"QTableView::item:selected{\n"
"    selection-background-color: rgba(0, 0, 0, 0);\n"
"}\n"
"QTableWidget{	\n"
"	background-color: rgba(252, 255, 189,170);\n"
"	border: 0px hidden rgba(0,0,0,0);\n"
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
"}"));
        verticalLayout = new QVBoxLayout(MachineList);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_display_text = new QLabel(MachineList);
        label_display_text->setObjectName(QStringLiteral("label_display_text"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_display_text->sizePolicy().hasHeightForWidth());
        label_display_text->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_display_text->setFont(font);
        label_display_text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_display_text);

        verticalSpacer_3 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tableWidget_machine_list = new QTableWidget(MachineList);
        tableWidget_machine_list->setObjectName(QStringLiteral("tableWidget_machine_list"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        tableWidget_machine_list->setFont(font1);
        tableWidget_machine_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_machine_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_machine_list->setShowGrid(false);
        tableWidget_machine_list->horizontalHeader()->setVisible(false);
        tableWidget_machine_list->horizontalHeader()->setDefaultSectionSize(300);
        tableWidget_machine_list->horizontalHeader()->setHighlightSections(true);
        tableWidget_machine_list->horizontalHeader()->setMinimumSectionSize(300);
        tableWidget_machine_list->verticalHeader()->setVisible(false);

        horizontalLayout_2->addWidget(tableWidget_machine_list);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 11);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_back = new QPushButton(MachineList);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        sizePolicy1.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        pushButton_back->setFont(font2);

        horizontalLayout->addWidget(pushButton_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 8);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 2);
        verticalLayout->setStretch(6, 3);

        retranslateUi(MachineList);

        QMetaObject::connectSlotsByName(MachineList);
    } // setupUi

    void retranslateUi(QDialog *MachineList)
    {
        MachineList->setWindowTitle(QApplication::translate("MachineList", "Dialog", Q_NULLPTR));
        label_display_text->setText(QApplication::translate("MachineList", "\346\237\245\347\234\213\346\202\250\347\232\204\346\237\234\346\234\272", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("MachineList", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MachineList: public Ui_MachineList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINELIST_H
