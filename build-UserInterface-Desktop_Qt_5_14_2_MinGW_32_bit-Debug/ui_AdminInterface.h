/********************************************************************************
** Form generated from reading UI file 'AdminInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_AdminInterface
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_drink;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_fruit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_quit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_warning;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_ack;

    void setupUi(QWidget *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName(QString::fromUtf8("AdminInterface"));
        AdminInterface->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdminInterface->sizePolicy().hasHeightForWidth());
        AdminInterface->setSizePolicy(sizePolicy);
        AdminInterface->setMinimumSize(QSize(1024, 768));
        AdminInterface->setMaximumSize(QSize(1024, 768));
        AdminInterface->setStyleSheet(QString::fromUtf8("#AdminInterface{	\n"
"	background-color: rgb(198, 245, 255);\n"
"}\n"
"\n"
"QTableWidget{	\n"
"	background-color: rgba(252, 255, 189,170);\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 18px;\n"
"}\n"
"\n"
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
"    left: 5px; /* move to the right by 5px */\n"
"}\n"
"\n"
"QTabBar::tab {    \n"
"	background-color: rgb(170, 244, 220);\n"
"    border: 3px solid rgb(255, 202, 206);\n"
"    border-bottom-color: rgb(255, 202, 206); /* same as the pane color */\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;\n"
"	border-bottom-left-radius: 8px;\n"
"	b"
                        "order-bottom-right-radius: 8px;\n"
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
"QTabWidget:pane{\n"
"	border-top:  0px hidden rgba(0,0,0,0);\n"
"	background:  transparent; \n"
"}\n"
"\n"
"/*\346\273\232\345\212\250\346\235\241\346\240\267\345\274\217*/\n"
"\n"
"/*****\346\273\232\345\212\250\346\235\241\346\240\267\345\274\217*****************************************************************************/\n"
"\n"
"QScrollBar:vertical{\n"
"\n"
"margin:16px 0px 16px 0px;\n"
"\n"
"bac"
                        "kground-color:rgba(0,0,0,0);\n"
"\n"
"/*border:0px;*/\n"
"border: 2px solid rgb(255, 110, 255);\n"
"border-color: rgba(179, 226, 205, 150);\n"
"background-color: rgba(176, 216, 203, 90);\n"
"border-radius: 8px;\n"
"width:17px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical{\n"
"\n"
"background-color: rgba(129, 168, 130, 170);\n"
"border-radius:6px;\n"
"\n"
"width:13px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover{\n"
"background-color:rgba(111, 152, 133,180);\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical{\n"
"\n"
"subcontrol-position:top;\n"
"\n"
"subcontrol-origin:margin;\n"
"\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"border:0px hidden rgba(0,0,0,0);\n"
"\n"
"height:0px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical{\n"
"\n"
"subcontrol-position:bottom;\n"
"\n"
"subcontrol-origin:margin;\n"
"\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"border:0px hidden rgba(0,0,0,0);\n"
"\n"
"height:0px;\n"
"\n"
"}\n"
"\n"
"/*\n"
"QScrollBar::up-arrow:vertical{\n"
"\n"
"border-image:url(:/commonImg/Resources/imag"
                        "e/common/arrowUp.png);\n"
"\n"
"width:12px;\n"
"\n"
"height:6px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::down-arrow:vertical{\n"
"\n"
"border-image:url(:/commonImg/Resources/image/common/arrowDown.png);\n"
"\n"
"width:12px;\n"
"\n"
"height:6px;\n"
"\n"
"}\n"
"*/\n"
"\n"
"QScrollBar::sub-page:vertical,QScrollBar::add-page:vertical{\n"
"\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(AdminInterface);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(AdminInterface);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_drink = new QTableWidget(tab);
        if (tableWidget_drink->columnCount() < 5)
            tableWidget_drink->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget_drink->rowCount() < 3)
            tableWidget_drink->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(2, __qtablewidgetitem7);
        tableWidget_drink->setObjectName(QString::fromUtf8("tableWidget_drink"));
        tableWidget_drink->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_drink->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_drink->setShowGrid(false);
        tableWidget_drink->horizontalHeader()->setVisible(false);
        tableWidget_drink->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_drink->horizontalHeader()->setDefaultSectionSize(188);
        tableWidget_drink->horizontalHeader()->setStretchLastSection(true);
        tableWidget_drink->verticalHeader()->setVisible(false);
        tableWidget_drink->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_drink->verticalHeader()->setDefaultSectionSize(340);
        tableWidget_drink->verticalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget_drink, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableWidget_fruit = new QTableWidget(tab_2);
        if (tableWidget_fruit->columnCount() < 5)
            tableWidget_fruit->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        if (tableWidget_fruit->rowCount() < 2)
            tableWidget_fruit->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(1, __qtablewidgetitem14);
        tableWidget_fruit->setObjectName(QString::fromUtf8("tableWidget_fruit"));
        tableWidget_fruit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_fruit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_fruit->setShowGrid(false);
        tableWidget_fruit->horizontalHeader()->setVisible(false);
        tableWidget_fruit->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_fruit->horizontalHeader()->setDefaultSectionSize(188);
        tableWidget_fruit->horizontalHeader()->setStretchLastSection(true);
        tableWidget_fruit->verticalHeader()->setVisible(false);
        tableWidget_fruit->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_fruit->verticalHeader()->setDefaultSectionSize(340);
        tableWidget_fruit->verticalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidget_fruit, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_quit = new QPushButton(AdminInterface);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_quit->sizePolicy().hasHeightForWidth());
        pushButton_quit->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        pushButton_quit->setFont(font1);

        horizontalLayout->addWidget(pushButton_quit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_warning = new QLabel(AdminInterface);
        label_warning->setObjectName(QString::fromUtf8("label_warning"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_warning->setFont(font2);
        label_warning->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_warning);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_ack = new QPushButton(AdminInterface);
        pushButton_ack->setObjectName(QString::fromUtf8("pushButton_ack"));
        sizePolicy1.setHeightForWidth(pushButton_ack->sizePolicy().hasHeightForWidth());
        pushButton_ack->setSizePolicy(sizePolicy1);
        pushButton_ack->setFont(font1);

        horizontalLayout->addWidget(pushButton_ack);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 2);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 9);
        verticalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 16);

        retranslateUi(AdminInterface);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QWidget *AdminInterface)
    {
        AdminInterface->setWindowTitle(QCoreApplication::translate("AdminInterface", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_drink->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_drink->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_drink->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_drink->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_drink->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_drink->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_drink->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_drink->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AdminInterface", "\351\245\256\345\223\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_fruit->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_fruit->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_fruit->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_fruit->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_fruit->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_fruit->verticalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_fruit->verticalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AdminInterface", "\346\260\264\346\236\234", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("AdminInterface", "\351\200\200\345\207\272", nullptr));
        label_warning->setText(QString());
        pushButton_ack->setText(QCoreApplication::translate("AdminInterface", "\347\241\256\350\256\244\350\241\245\350\264\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
