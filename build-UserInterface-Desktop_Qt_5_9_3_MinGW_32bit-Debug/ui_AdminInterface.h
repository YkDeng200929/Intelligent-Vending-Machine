/********************************************************************************
** Form generated from reading UI file 'AdminInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_drink;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_quit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_add_type;
    QPushButton *pushButton_ack;

    void setupUi(QWidget *AdminInterface)
    {
        if (AdminInterface->objectName().isEmpty())
            AdminInterface->setObjectName(QStringLiteral("AdminInterface"));
        AdminInterface->resize(849, 584);
        AdminInterface->setStyleSheet(QLatin1String("#AdminInterface{	\n"
"	background-color: rgb(198, 245, 255);\n"
"}\n"
"\n"
"QTableWidget{	\n"
"	background-color: rgba(252, 255, 189,170);\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
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
"}"));
        gridLayout_2 = new QGridLayout(AdminInterface);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(AdminInterface);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_drink = new QTableWidget(tab);
        if (tableWidget_drink->columnCount() < 4)
            tableWidget_drink->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget_drink->rowCount() < 4)
            tableWidget_drink->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(3, __qtablewidgetitem7);
        tableWidget_drink->setObjectName(QStringLiteral("tableWidget_drink"));
        tableWidget_drink->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_drink->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_drink->setShowGrid(false);
        tableWidget_drink->horizontalHeader()->setVisible(false);
        tableWidget_drink->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_drink->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget_drink->horizontalHeader()->setStretchLastSection(true);
        tableWidget_drink->verticalHeader()->setVisible(false);
        tableWidget_drink->verticalHeader()->setDefaultSectionSize(400);
        tableWidget_drink->verticalHeader()->setMinimumSectionSize(150);
        tableWidget_drink->verticalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidget_drink, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem15);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setShowGrid(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(400);
        tableWidget->verticalHeader()->setMinimumSectionSize(150);
        tableWidget->verticalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_quit = new QPushButton(AdminInterface);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_quit->sizePolicy().hasHeightForWidth());
        pushButton_quit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_quit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_add_type = new QPushButton(AdminInterface);
        pushButton_add_type->setObjectName(QStringLiteral("pushButton_add_type"));
        sizePolicy.setHeightForWidth(pushButton_add_type->sizePolicy().hasHeightForWidth());
        pushButton_add_type->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_add_type);

        pushButton_ack = new QPushButton(AdminInterface);
        pushButton_ack->setObjectName(QStringLiteral("pushButton_ack"));
        sizePolicy.setHeightForWidth(pushButton_ack->sizePolicy().hasHeightForWidth());
        pushButton_ack->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_ack);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 9);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 2);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 9);
        verticalLayout->setStretch(1, 1);

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(AdminInterface);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminInterface);
    } // setupUi

    void retranslateUi(QWidget *AdminInterface)
    {
        AdminInterface->setWindowTitle(QApplication::translate("AdminInterface", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_drink->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_drink->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_drink->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_drink->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_drink->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_drink->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_drink->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_drink->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminInterface", "\351\245\256\345\223\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("AdminInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminInterface", "\346\260\264\346\236\234", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("AdminInterface", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_add_type->setText(QApplication::translate("AdminInterface", "\346\226\260\345\242\236\345\223\201\347\261\273", Q_NULLPTR));
        pushButton_ack->setText(QApplication::translate("AdminInterface", "\347\241\256\350\256\244\350\241\245\350\264\247", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminInterface: public Ui_AdminInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
