/********************************************************************************
** Form generated from reading UI file 'UserInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInterface
{
public:
    QAction *actionadmin_Interface;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_admin;
    QPushButton *pushButton_drink;
    QPushButton *pushButton_fruit;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_checkChart;
    QPushButton *pushButton_payment;
    QSpacerItem *verticalSpacer_2;
    QStackedWidget *stackedWidget_userList;
    QWidget *page_1;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_drink;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget_fruit;
    QWidget *page_admin;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_admin;
    QWidget *page_cart;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget_cart;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_time_hour;
    QLabel *label_time_dot;
    QLabel *label_time_min;
    QLabel *label_text;
    QLabel *label_temp;
    QLabel *label_ads;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QMainWindow *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName(QStringLiteral("UserInterface"));
        UserInterface->resize(1080, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserInterface->sizePolicy().hasHeightForWidth());
        UserInterface->setSizePolicy(sizePolicy);
        UserInterface->setMaximumSize(QSize(1080, 720));
        UserInterface->setStyleSheet(QString::fromUtf8("#UserInterface{	\n"
"	background-color: rgb(198, 245, 255);\n"
"}\n"
"\n"
"QTableWidget{	\n"
"	background-color: rgba(252, 255, 189,170);\n"
"	border: 12px solid rgba(0,0,0,0);\n"
"	/*border: 5px solid rgb(255, 110, 255);*/\n"
"	/*border-color: rgb(255, 123, 169);*/\n"
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
"    border-top-right-radius: 8p"
                        "x;\n"
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
"}\n"
"\n"
"#label_ads{\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"}\n"
"/*****\346\273\232\345\212\250\346\235\241\346\240\267\345\274\217*****************************************************"
                        "************************/\n"
"\n"
"QScrollBar:vertical{\n"
"\n"
"margin:16px 0px 16px 0px;\n"
"\n"
"background-color:rgba(0,0,0,0);\n"
"\n"
"border:0px;\n"
"\n"
"width:14px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:vertical{\n"
"\n"
"background-color: rgba(129, 168, 130, 170);\n"
"\n"
"border-radius:7px;\n"
"\n"
"width:13px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover{\n"
"\n"
"background-color:rgba(129, 168, 130, 170);\n"
"\n"
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
"border-image:url(:/commonImg/Resources/image/common/arrowUp.png);\n"
"\n"
""
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
        actionadmin_Interface = new QAction(UserInterface);
        actionadmin_Interface->setObjectName(QStringLiteral("actionadmin_Interface"));
        centralwidget = new QWidget(UserInterface);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_admin = new QPushButton(centralwidget);
        pushButton_admin->setObjectName(QStringLiteral("pushButton_admin"));
        QFont font;
        font.setFamily(QStringLiteral("Cascadia Mono"));
        pushButton_admin->setFont(font);
        pushButton_admin->setStyleSheet(QLatin1String("border: 3px solid rgb(255, 143, 145);\n"
"border-top-left-radius: 8px;\n"
"border-top-right-radius: 8px;\n"
"border-bottom-left-radius: 8px;\n"
"border-bottom-right-radius: 8px;"));

        verticalLayout_2->addWidget(pushButton_admin);

        pushButton_drink = new QPushButton(centralwidget);
        pushButton_drink->setObjectName(QStringLiteral("pushButton_drink"));
        sizePolicy.setHeightForWidth(pushButton_drink->sizePolicy().hasHeightForWidth());
        pushButton_drink->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        pushButton_drink->setFont(font1);

        verticalLayout_2->addWidget(pushButton_drink);

        pushButton_fruit = new QPushButton(centralwidget);
        pushButton_fruit->setObjectName(QStringLiteral("pushButton_fruit"));
        sizePolicy.setHeightForWidth(pushButton_fruit->sizePolicy().hasHeightForWidth());
        pushButton_fruit->setSizePolicy(sizePolicy);
        pushButton_fruit->setFont(font1);

        verticalLayout_2->addWidget(pushButton_fruit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_checkChart = new QPushButton(centralwidget);
        pushButton_checkChart->setObjectName(QStringLiteral("pushButton_checkChart"));
        sizePolicy.setHeightForWidth(pushButton_checkChart->sizePolicy().hasHeightForWidth());
        pushButton_checkChart->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        pushButton_checkChart->setFont(font2);
        pushButton_checkChart->setStyleSheet(QLatin1String("QPushButton{\n"
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

        verticalLayout_2->addWidget(pushButton_checkChart);

        pushButton_payment = new QPushButton(centralwidget);
        pushButton_payment->setObjectName(QStringLiteral("pushButton_payment"));
        sizePolicy.setHeightForWidth(pushButton_payment->sizePolicy().hasHeightForWidth());
        pushButton_payment->setSizePolicy(sizePolicy);
        pushButton_payment->setFont(font2);
        pushButton_payment->setStyleSheet(QLatin1String("QPushButton{\n"
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

        verticalLayout_2->addWidget(pushButton_payment);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 5);
        verticalLayout_2->setStretch(5, 1);
        verticalLayout_2->setStretch(6, 1);
        verticalLayout_2->setStretch(7, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        stackedWidget_userList = new QStackedWidget(centralwidget);
        stackedWidget_userList->setObjectName(QStringLiteral("stackedWidget_userList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget_userList->sizePolicy().hasHeightForWidth());
        stackedWidget_userList->setSizePolicy(sizePolicy1);
        stackedWidget_userList->setMaximumSize(QSize(16777215, 16777215));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        gridLayout = new QGridLayout(page_1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget_drink = new QTableWidget(page_1);
        if (tableWidget_drink->columnCount() < 3)
            tableWidget_drink->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget_drink->rowCount() < 8)
            tableWidget_drink->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_drink->setVerticalHeaderItem(7, __qtablewidgetitem10);
        tableWidget_drink->setObjectName(QStringLiteral("tableWidget_drink"));
        sizePolicy.setHeightForWidth(tableWidget_drink->sizePolicy().hasHeightForWidth());
        tableWidget_drink->setSizePolicy(sizePolicy);
        tableWidget_drink->setMaximumSize(QSize(800, 16777215));
        tableWidget_drink->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_drink->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_drink->setShowGrid(false);
        tableWidget_drink->horizontalHeader()->setVisible(false);
        tableWidget_drink->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_drink->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_drink->verticalHeader()->setVisible(false);
        tableWidget_drink->verticalHeader()->setDefaultSectionSize(384);
        tableWidget_drink->verticalHeader()->setMinimumSectionSize(0);

        gridLayout->addWidget(tableWidget_drink, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget_fruit = new QTableWidget(page_2);
        if (tableWidget_fruit->columnCount() < 3)
            tableWidget_fruit->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        if (tableWidget_fruit->rowCount() < 9)
            tableWidget_fruit->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(7, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(8, __qtablewidgetitem22);
        tableWidget_fruit->setObjectName(QStringLiteral("tableWidget_fruit"));
        sizePolicy.setHeightForWidth(tableWidget_fruit->sizePolicy().hasHeightForWidth());
        tableWidget_fruit->setSizePolicy(sizePolicy);
        tableWidget_fruit->setMaximumSize(QSize(800, 16777215));
        tableWidget_fruit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_fruit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_fruit->setShowGrid(false);
        tableWidget_fruit->horizontalHeader()->setVisible(false);
        tableWidget_fruit->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_fruit->horizontalHeader()->setHighlightSections(true);
        tableWidget_fruit->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_fruit->horizontalHeader()->setStretchLastSection(true);
        tableWidget_fruit->verticalHeader()->setVisible(false);
        tableWidget_fruit->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_fruit->verticalHeader()->setDefaultSectionSize(384);
        tableWidget_fruit->verticalHeader()->setHighlightSections(false);
        tableWidget_fruit->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_fruit->verticalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableWidget_fruit, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_2);
        page_admin = new QWidget();
        page_admin->setObjectName(QStringLiteral("page_admin"));
        gridLayout_3 = new QGridLayout(page_admin);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget_admin = new QTableWidget(page_admin);
        if (tableWidget_admin->columnCount() < 4)
            tableWidget_admin->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_admin->setHorizontalHeaderItem(0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_admin->setHorizontalHeaderItem(1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_admin->setHorizontalHeaderItem(2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_admin->setHorizontalHeaderItem(3, __qtablewidgetitem26);
        if (tableWidget_admin->rowCount() < 8)
            tableWidget_admin->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(6, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_admin->setVerticalHeaderItem(7, __qtablewidgetitem34);
        tableWidget_admin->setObjectName(QStringLiteral("tableWidget_admin"));
        sizePolicy.setHeightForWidth(tableWidget_admin->sizePolicy().hasHeightForWidth());
        tableWidget_admin->setSizePolicy(sizePolicy);
        tableWidget_admin->setMaximumSize(QSize(800, 16777215));
        tableWidget_admin->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_admin->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_admin->setShowGrid(true);
        tableWidget_admin->horizontalHeader()->setVisible(false);
        tableWidget_admin->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_admin->horizontalHeader()->setHighlightSections(true);
        tableWidget_admin->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_admin->horizontalHeader()->setStretchLastSection(true);
        tableWidget_admin->verticalHeader()->setVisible(false);
        tableWidget_admin->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_admin->verticalHeader()->setDefaultSectionSize(384);
        tableWidget_admin->verticalHeader()->setHighlightSections(false);
        tableWidget_admin->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_admin->verticalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidget_admin, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_admin);
        page_cart = new QWidget();
        page_cart->setObjectName(QStringLiteral("page_cart"));
        gridLayout_4 = new QGridLayout(page_cart);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableWidget_cart = new QTableWidget(page_cart);
        if (tableWidget_cart->columnCount() < 3)
            tableWidget_cart->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_cart->setHorizontalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_cart->setHorizontalHeaderItem(1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_cart->setHorizontalHeaderItem(2, __qtablewidgetitem37);
        if (tableWidget_cart->rowCount() < 8)
            tableWidget_cart->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(2, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(3, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(4, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(5, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(6, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(7, __qtablewidgetitem45);
        tableWidget_cart->setObjectName(QStringLiteral("tableWidget_cart"));
        sizePolicy.setHeightForWidth(tableWidget_cart->sizePolicy().hasHeightForWidth());
        tableWidget_cart->setSizePolicy(sizePolicy);
        tableWidget_cart->setMaximumSize(QSize(800, 16777215));
        tableWidget_cart->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_cart->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_cart->setShowGrid(true);
        tableWidget_cart->horizontalHeader()->setVisible(false);
        tableWidget_cart->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_cart->horizontalHeader()->setHighlightSections(true);
        tableWidget_cart->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_cart->horizontalHeader()->setStretchLastSection(true);
        tableWidget_cart->verticalHeader()->setVisible(false);
        tableWidget_cart->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_cart->verticalHeader()->setDefaultSectionSize(384);
        tableWidget_cart->verticalHeader()->setHighlightSections(false);
        tableWidget_cart->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_cart->verticalHeader()->setStretchLastSection(true);

        gridLayout_4->addWidget(tableWidget_cart, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_cart);

        horizontalLayout->addWidget(stackedWidget_userList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_time_hour = new QLabel(centralwidget);
        label_time_hour->setObjectName(QStringLiteral("label_time_hour"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_time_hour->sizePolicy().hasHeightForWidth());
        label_time_hour->setSizePolicy(sizePolicy2);
        label_time_hour->setMaximumSize(QSize(35, 45));
        QFont font3;
        font3.setFamily(QStringLiteral("Cascadia Mono"));
        font3.setPointSize(15);
        label_time_hour->setFont(font3);
        label_time_hour->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_time_hour);

        label_time_dot = new QLabel(centralwidget);
        label_time_dot->setObjectName(QStringLiteral("label_time_dot"));
        sizePolicy2.setHeightForWidth(label_time_dot->sizePolicy().hasHeightForWidth());
        label_time_dot->setSizePolicy(sizePolicy2);
        label_time_dot->setMaximumSize(QSize(18, 45));
        label_time_dot->setFont(font3);
        label_time_dot->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_time_dot);

        label_time_min = new QLabel(centralwidget);
        label_time_min->setObjectName(QStringLiteral("label_time_min"));
        sizePolicy2.setHeightForWidth(label_time_min->sizePolicy().hasHeightForWidth());
        label_time_min->setSizePolicy(sizePolicy2);
        label_time_min->setMaximumSize(QSize(35, 45));
        label_time_min->setFont(font3);
        label_time_min->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_time_min);

        label_text = new QLabel(centralwidget);
        label_text->setObjectName(QStringLiteral("label_text"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font4.setPointSize(10);
        label_text->setFont(font4);
        label_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_text);

        label_temp = new QLabel(centralwidget);
        label_temp->setObjectName(QStringLiteral("label_temp"));
        label_temp->setFont(font4);
        label_temp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_temp);


        verticalLayout->addLayout(horizontalLayout_2);

        label_ads = new QLabel(centralwidget);
        label_ads->setObjectName(QStringLiteral("label_ads"));
        sizePolicy.setHeightForWidth(label_ads->sizePolicy().hasHeightForWidth());
        label_ads->setSizePolicy(sizePolicy);
        label_ads->setMaximumSize(QSize(315, 581));
        label_ads->setStyleSheet(QStringLiteral(""));
        label_ads->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_ads);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 9);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 3);
        UserInterface->setCentralWidget(centralwidget);

        retranslateUi(UserInterface);

        stackedWidget_userList->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QMainWindow *UserInterface)
    {
        UserInterface->setWindowTitle(QApplication::translate("UserInterface", "UserInterface", Q_NULLPTR));
        actionadmin_Interface->setText(QApplication::translate("UserInterface", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", Q_NULLPTR));
        pushButton_admin->setText(QApplication::translate("UserInterface", "Admin", Q_NULLPTR));
        pushButton_drink->setText(QApplication::translate("UserInterface", "\351\245\256\345\223\201", Q_NULLPTR));
        pushButton_fruit->setText(QApplication::translate("UserInterface", "\346\260\264\346\236\234", Q_NULLPTR));
        pushButton_checkChart->setText(QApplication::translate("UserInterface", "\346\237\245\347\234\213\350\264\255\347\211\251\350\275\246", Q_NULLPTR));
        pushButton_payment->setText(QApplication::translate("UserInterface", "\347\241\256\350\256\244\346\224\257\344\273\230", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_drink->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_drink->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_drink->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_drink->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_drink->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_drink->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_drink->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_drink->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_drink->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_drink->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_drink->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_fruit->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_fruit->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_fruit->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_fruit->verticalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_fruit->verticalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_fruit->verticalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_fruit->verticalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_fruit->verticalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_fruit->verticalHeaderItem(5);
        ___qtablewidgetitem19->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_fruit->verticalHeaderItem(6);
        ___qtablewidgetitem20->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_fruit->verticalHeaderItem(7);
        ___qtablewidgetitem21->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_fruit->verticalHeaderItem(8);
        ___qtablewidgetitem22->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_admin->horizontalHeaderItem(0);
        ___qtablewidgetitem23->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_admin->horizontalHeaderItem(1);
        ___qtablewidgetitem24->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_admin->horizontalHeaderItem(2);
        ___qtablewidgetitem25->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_admin->horizontalHeaderItem(3);
        ___qtablewidgetitem26->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_admin->verticalHeaderItem(0);
        ___qtablewidgetitem27->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_admin->verticalHeaderItem(1);
        ___qtablewidgetitem28->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_admin->verticalHeaderItem(2);
        ___qtablewidgetitem29->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_admin->verticalHeaderItem(3);
        ___qtablewidgetitem30->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_admin->verticalHeaderItem(4);
        ___qtablewidgetitem31->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_admin->verticalHeaderItem(5);
        ___qtablewidgetitem32->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_admin->verticalHeaderItem(6);
        ___qtablewidgetitem33->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_admin->verticalHeaderItem(7);
        ___qtablewidgetitem34->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_cart->horizontalHeaderItem(0);
        ___qtablewidgetitem35->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_cart->horizontalHeaderItem(1);
        ___qtablewidgetitem36->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_cart->horizontalHeaderItem(2);
        ___qtablewidgetitem37->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_cart->verticalHeaderItem(0);
        ___qtablewidgetitem38->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_cart->verticalHeaderItem(1);
        ___qtablewidgetitem39->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_cart->verticalHeaderItem(2);
        ___qtablewidgetitem40->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_cart->verticalHeaderItem(3);
        ___qtablewidgetitem41->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_cart->verticalHeaderItem(4);
        ___qtablewidgetitem42->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_cart->verticalHeaderItem(5);
        ___qtablewidgetitem43->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_cart->verticalHeaderItem(6);
        ___qtablewidgetitem44->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_cart->verticalHeaderItem(7);
        ___qtablewidgetitem45->setText(QApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        label_time_hour->setText(QApplication::translate("UserInterface", "00", Q_NULLPTR));
        label_time_dot->setText(QApplication::translate("UserInterface", ":", Q_NULLPTR));
        label_time_min->setText(QApplication::translate("UserInterface", "00", Q_NULLPTR));
        label_text->setText(QApplication::translate("UserInterface", "\346\237\234\346\234\272\346\270\251\345\272\246:", Q_NULLPTR));
        label_temp->setText(QApplication::translate("UserInterface", "36\342\204\203", Q_NULLPTR));
        label_ads->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
