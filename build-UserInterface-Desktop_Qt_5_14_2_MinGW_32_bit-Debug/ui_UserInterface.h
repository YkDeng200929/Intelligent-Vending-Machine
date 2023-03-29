/********************************************************************************
** Form generated from reading UI file 'UserInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
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
    QPushButton *pushButton_drink;
    QPushButton *pushButton_fruit;
    QSpacerItem *verticalSpacer;
    QLabel *label_head_total_price;
    QLabel *label_total_price;
    QPushButton *pushButton_admin;
    QPushButton *pushButton_checkChart;
    QPushButton *pushButton_payment;
    QSpacerItem *verticalSpacer_2;
    QStackedWidget *stackedWidget_userList;
    QWidget *page_drink;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_drink;
    QWidget *page_fruit;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget_fruit;
    QWidget *page_pay_code;
    QGridLayout *gridLayout_5;
    QWidget *widget_code;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_code_pic;
    QLabel *label_count_down;
    QLabel *label_pay_text;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_code_back;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_cart;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget_cart;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_time_hour;
    QLabel *label_time_dot;
    QLabel *label_time_min;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_text;
    QLabel *label_temp;
    QLabel *label_ads;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QMainWindow *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName(QString::fromUtf8("UserInterface"));
        UserInterface->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserInterface->sizePolicy().hasHeightForWidth());
        UserInterface->setSizePolicy(sizePolicy);
        UserInterface->setMaximumSize(QSize(1024, 768));
        UserInterface->setStyleSheet(QString::fromUtf8("#UserInterface{	\n"
"	background-color: rgb(198, 245, 255);\n"
"}\n"
"\n"
"QTableWidget{	\n"
"/*\n"
"	background-color: rgba(132, 202, 128, 170);\n"
"	background-color: rgba(252, 255, 189,170);\n"
"	border: 12px solid rgba(0,0,0,0);\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(132, 202, 128);\n"
"	border-radius: 12px;\n"
"*/\n"
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
"	background-color: rgb(1"
                        "70, 244, 220);\n"
"    border: 3px solid rgb(255, 202, 206);\n"
"    border-bottom-color: rgb(255, 202, 206); /* same as the pane color */\n"
"    border-top-left-radius: 8px;\n"
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
"}\n"
"\n"
"#label_ads{\n"
"	border: 5px solid rgb"
                        "(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"}\n"
"/*****\346\273\232\345\212\250\346\235\241\346\240\267\345\274\217*****************************************************************************/\n"
"\n"
"QScrollBar:vertical{\n"
"\n"
"margin:16px 0px 16px 0px;\n"
"\n"
"background-color:rgba(0,0,0,0);\n"
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
"QSc"
                        "rollBar::add-line:vertical{\n"
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
        actionadmin_Interface->setObjectName(QString::fromUtf8("actionadmin_Interface"));
        centralwidget = new QWidget(UserInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushButton_drink = new QPushButton(centralwidget);
        pushButton_drink->setObjectName(QString::fromUtf8("pushButton_drink"));
        sizePolicy.setHeightForWidth(pushButton_drink->sizePolicy().hasHeightForWidth());
        pushButton_drink->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        pushButton_drink->setFont(font);

        verticalLayout_2->addWidget(pushButton_drink);

        pushButton_fruit = new QPushButton(centralwidget);
        pushButton_fruit->setObjectName(QString::fromUtf8("pushButton_fruit"));
        sizePolicy.setHeightForWidth(pushButton_fruit->sizePolicy().hasHeightForWidth());
        pushButton_fruit->setSizePolicy(sizePolicy);
        pushButton_fruit->setFont(font);

        verticalLayout_2->addWidget(pushButton_fruit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_head_total_price = new QLabel(centralwidget);
        label_head_total_price->setObjectName(QString::fromUtf8("label_head_total_price"));
        sizePolicy.setHeightForWidth(label_head_total_price->sizePolicy().hasHeightForWidth());
        label_head_total_price->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_head_total_price->setFont(font1);
        label_head_total_price->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_head_total_price);

        label_total_price = new QLabel(centralwidget);
        label_total_price->setObjectName(QString::fromUtf8("label_total_price"));
        sizePolicy.setHeightForWidth(label_total_price->sizePolicy().hasHeightForWidth());
        label_total_price->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cascadia Mono"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_total_price->setFont(font2);
        label_total_price->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_total_price);

        pushButton_admin = new QPushButton(centralwidget);
        pushButton_admin->setObjectName(QString::fromUtf8("pushButton_admin"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cascadia Mono"));
        pushButton_admin->setFont(font3);
        pushButton_admin->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"border: 0px hidden rgba(0,0,0,0);\n"
"border-top-left-radius: 8px;\n"
"border-top-right-radius: 8px;\n"
"border-bottom-left-radius: 8px;\n"
"border-bottom-right-radius: 8px;"));

        verticalLayout_2->addWidget(pushButton_admin);

        pushButton_checkChart = new QPushButton(centralwidget);
        pushButton_checkChart->setObjectName(QString::fromUtf8("pushButton_checkChart"));
        sizePolicy.setHeightForWidth(pushButton_checkChart->sizePolicy().hasHeightForWidth());
        pushButton_checkChart->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        pushButton_checkChart->setFont(font4);
        pushButton_checkChart->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton_payment->setObjectName(QString::fromUtf8("pushButton_payment"));
        sizePolicy.setHeightForWidth(pushButton_payment->sizePolicy().hasHeightForWidth());
        pushButton_payment->setSizePolicy(sizePolicy);
        pushButton_payment->setFont(font4);
        pushButton_payment->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        verticalLayout_2->setStretch(3, 5);
        verticalLayout_2->setStretch(4, 1);
        verticalLayout_2->setStretch(5, 1);
        verticalLayout_2->setStretch(7, 1);
        verticalLayout_2->setStretch(8, 1);
        verticalLayout_2->setStretch(9, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        stackedWidget_userList = new QStackedWidget(centralwidget);
        stackedWidget_userList->setObjectName(QString::fromUtf8("stackedWidget_userList"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget_userList->sizePolicy().hasHeightForWidth());
        stackedWidget_userList->setSizePolicy(sizePolicy1);
        stackedWidget_userList->setMaximumSize(QSize(16777215, 16777215));
        page_drink = new QWidget();
        page_drink->setObjectName(QString::fromUtf8("page_drink"));
        gridLayout = new QGridLayout(page_drink);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidget_drink = new QTableWidget(page_drink);
        if (tableWidget_drink->columnCount() < 3)
            tableWidget_drink->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_drink->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget_drink->rowCount() < 5)
            tableWidget_drink->setRowCount(5);
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
        tableWidget_drink->setObjectName(QString::fromUtf8("tableWidget_drink"));
        sizePolicy.setHeightForWidth(tableWidget_drink->sizePolicy().hasHeightForWidth());
        tableWidget_drink->setSizePolicy(sizePolicy);
        tableWidget_drink->setMaximumSize(QSize(800, 16777215));
        tableWidget_drink->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_drink->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_drink->setShowGrid(false);
        tableWidget_drink->horizontalHeader()->setVisible(false);
        tableWidget_drink->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_drink->horizontalHeader()->setDefaultSectionSize(177);
        tableWidget_drink->verticalHeader()->setVisible(false);
        tableWidget_drink->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_drink->verticalHeader()->setDefaultSectionSize(320);

        gridLayout->addWidget(tableWidget_drink, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_drink);
        page_fruit = new QWidget();
        page_fruit->setObjectName(QString::fromUtf8("page_fruit"));
        gridLayout_2 = new QGridLayout(page_fruit);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidget_fruit = new QTableWidget(page_fruit);
        if (tableWidget_fruit->columnCount() < 3)
            tableWidget_fruit->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_fruit->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        if (tableWidget_fruit->rowCount() < 3)
            tableWidget_fruit->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_fruit->setVerticalHeaderItem(2, __qtablewidgetitem13);
        tableWidget_fruit->setObjectName(QString::fromUtf8("tableWidget_fruit"));
        sizePolicy.setHeightForWidth(tableWidget_fruit->sizePolicy().hasHeightForWidth());
        tableWidget_fruit->setSizePolicy(sizePolicy);
        tableWidget_fruit->setMaximumSize(QSize(800, 16777215));
        tableWidget_fruit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_fruit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_fruit->setShowGrid(false);
        tableWidget_fruit->horizontalHeader()->setVisible(false);
        tableWidget_fruit->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_fruit->horizontalHeader()->setDefaultSectionSize(177);
        tableWidget_fruit->horizontalHeader()->setHighlightSections(true);
        tableWidget_fruit->horizontalHeader()->setStretchLastSection(true);
        tableWidget_fruit->verticalHeader()->setVisible(false);
        tableWidget_fruit->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_fruit->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_fruit->verticalHeader()->setDefaultSectionSize(320);
        tableWidget_fruit->verticalHeader()->setHighlightSections(false);
        tableWidget_fruit->verticalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableWidget_fruit, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_fruit);
        page_pay_code = new QWidget();
        page_pay_code->setObjectName(QString::fromUtf8("page_pay_code"));
        gridLayout_5 = new QGridLayout(page_pay_code);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget_code = new QWidget(page_pay_code);
        widget_code->setObjectName(QString::fromUtf8("widget_code"));
        sizePolicy.setHeightForWidth(widget_code->sizePolicy().hasHeightForWidth());
        widget_code->setSizePolicy(sizePolicy);
        widget_code->setStyleSheet(QString::fromUtf8("#widget_code{\n"
"background-color: rgb(192, 241, 255);\n"
"border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(widget_code);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_code_pic = new QLabel(widget_code);
        label_code_pic->setObjectName(QString::fromUtf8("label_code_pic"));
        sizePolicy.setHeightForWidth(label_code_pic->sizePolicy().hasHeightForWidth());
        label_code_pic->setSizePolicy(sizePolicy);
        label_code_pic->setMaximumSize(QSize(16777215, 16777215));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Cascadia Mono"));
        font5.setPointSize(9);
        label_code_pic->setFont(font5);
        label_code_pic->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_code_pic);

        label_count_down = new QLabel(widget_code);
        label_count_down->setObjectName(QString::fromUtf8("label_count_down"));
        label_count_down->setFont(font);
        label_count_down->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_count_down);

        label_pay_text = new QLabel(widget_code);
        label_pay_text->setObjectName(QString::fromUtf8("label_pay_text"));
        label_pay_text->setFont(font);
        label_pay_text->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_pay_text);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_code_back = new QPushButton(widget_code);
        pushButton_code_back->setObjectName(QString::fromUtf8("pushButton_code_back"));
        sizePolicy.setHeightForWidth(pushButton_code_back->sizePolicy().hasHeightForWidth());
        pushButton_code_back->setSizePolicy(sizePolicy);
        pushButton_code_back->setFont(font);
        pushButton_code_back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_3->addWidget(pushButton_code_back);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        verticalLayout_3->setStretch(0, 12);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(3, 2);
        verticalLayout_3->setStretch(4, 1);

        gridLayout_5->addWidget(widget_code, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_pay_code);
        page_cart = new QWidget();
        page_cart->setObjectName(QString::fromUtf8("page_cart"));
        gridLayout_4 = new QGridLayout(page_cart);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableWidget_cart = new QTableWidget(page_cart);
        if (tableWidget_cart->columnCount() < 1)
            tableWidget_cart->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_cart->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        if (tableWidget_cart->rowCount() < 8)
            tableWidget_cart->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(5, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(6, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_cart->setVerticalHeaderItem(7, __qtablewidgetitem22);
        tableWidget_cart->setObjectName(QString::fromUtf8("tableWidget_cart"));
        sizePolicy.setHeightForWidth(tableWidget_cart->sizePolicy().hasHeightForWidth());
        tableWidget_cart->setSizePolicy(sizePolicy);
        tableWidget_cart->setMaximumSize(QSize(800, 16777215));
        tableWidget_cart->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget_cart->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_cart->setShowGrid(false);
        tableWidget_cart->horizontalHeader()->setVisible(false);
        tableWidget_cart->horizontalHeader()->setMinimumSectionSize(0);
        tableWidget_cart->horizontalHeader()->setDefaultSectionSize(177);
        tableWidget_cart->horizontalHeader()->setHighlightSections(true);
        tableWidget_cart->horizontalHeader()->setStretchLastSection(true);
        tableWidget_cart->verticalHeader()->setVisible(false);
        tableWidget_cart->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget_cart->verticalHeader()->setMinimumSectionSize(0);
        tableWidget_cart->verticalHeader()->setDefaultSectionSize(145);
        tableWidget_cart->verticalHeader()->setHighlightSections(false);
        tableWidget_cart->verticalHeader()->setStretchLastSection(true);

        gridLayout_4->addWidget(tableWidget_cart, 0, 0, 1, 1);

        stackedWidget_userList->addWidget(page_cart);

        horizontalLayout->addWidget(stackedWidget_userList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_time_hour = new QLabel(centralwidget);
        label_time_hour->setObjectName(QString::fromUtf8("label_time_hour"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_time_hour->sizePolicy().hasHeightForWidth());
        label_time_hour->setSizePolicy(sizePolicy2);
        label_time_hour->setMaximumSize(QSize(35, 45));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Cascadia Mono"));
        font6.setPointSize(15);
        label_time_hour->setFont(font6);
        label_time_hour->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_time_hour);

        label_time_dot = new QLabel(centralwidget);
        label_time_dot->setObjectName(QString::fromUtf8("label_time_dot"));
        sizePolicy2.setHeightForWidth(label_time_dot->sizePolicy().hasHeightForWidth());
        label_time_dot->setSizePolicy(sizePolicy2);
        label_time_dot->setMaximumSize(QSize(18, 45));
        label_time_dot->setFont(font6);
        label_time_dot->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_time_dot);

        label_time_min = new QLabel(centralwidget);
        label_time_min->setObjectName(QString::fromUtf8("label_time_min"));
        sizePolicy2.setHeightForWidth(label_time_min->sizePolicy().hasHeightForWidth());
        label_time_min->setSizePolicy(sizePolicy2);
        label_time_min->setMaximumSize(QSize(35, 45));
        label_time_min->setFont(font6);
        label_time_min->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_time_min);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        label_text = new QLabel(centralwidget);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font7.setPointSize(10);
        label_text->setFont(font7);
        label_text->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_text);

        label_temp = new QLabel(centralwidget);
        label_temp->setObjectName(QString::fromUtf8("label_temp"));
        label_temp->setFont(font7);
        label_temp->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_temp);

        label_ads = new QLabel(centralwidget);
        label_ads->setObjectName(QString::fromUtf8("label_ads"));
        sizePolicy.setHeightForWidth(label_ads->sizePolicy().hasHeightForWidth());
        label_ads->setSizePolicy(sizePolicy);
        label_ads->setMaximumSize(QSize(315, 581));
        label_ads->setStyleSheet(QString::fromUtf8(""));
        label_ads->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_ads);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(4, 9);

        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 3);
        UserInterface->setCentralWidget(centralwidget);

        retranslateUi(UserInterface);

        stackedWidget_userList->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QMainWindow *UserInterface)
    {
        UserInterface->setWindowTitle(QCoreApplication::translate("UserInterface", "UserInterface", nullptr));
        actionadmin_Interface->setText(QCoreApplication::translate("UserInterface", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        pushButton_drink->setText(QCoreApplication::translate("UserInterface", "\351\245\256\345\223\201", nullptr));
        pushButton_fruit->setText(QCoreApplication::translate("UserInterface", "\346\260\264\346\236\234", nullptr));
        label_head_total_price->setText(QString());
        label_total_price->setText(QString());
        pushButton_admin->setText(QString());
        pushButton_checkChart->setText(QCoreApplication::translate("UserInterface", "\346\237\245\347\234\213\350\264\255\347\211\251\350\275\246", nullptr));
        pushButton_payment->setText(QCoreApplication::translate("UserInterface", "\347\241\256\350\256\244\346\224\257\344\273\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_drink->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_drink->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_drink->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_drink->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_drink->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_drink->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_drink->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_drink->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_fruit->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_fruit->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_fruit->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_fruit->verticalHeaderItem(0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_fruit->verticalHeaderItem(1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_fruit->verticalHeaderItem(2);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        label_code_pic->setText(QCoreApplication::translate("UserInterface", "pic", nullptr));
        label_count_down->setText(QString());
        label_pay_text->setText(QCoreApplication::translate("UserInterface", "\350\257\267\347\241\256\350\256\244\346\224\257\344\273\230", nullptr));
        pushButton_code_back->setText(QCoreApplication::translate("UserInterface", "\350\277\224\345\233\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_cart->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_cart->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_cart->verticalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_cart->verticalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_cart->verticalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_cart->verticalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_cart->verticalHeaderItem(5);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_cart->verticalHeaderItem(6);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_cart->verticalHeaderItem(7);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("UserInterface", "\346\226\260\345\273\272\350\241\214", nullptr));
        label_time_hour->setText(QCoreApplication::translate("UserInterface", "00", nullptr));
        label_time_dot->setText(QCoreApplication::translate("UserInterface", ":", nullptr));
        label_time_min->setText(QCoreApplication::translate("UserInterface", "00", nullptr));
        label_text->setText(QCoreApplication::translate("UserInterface", "\346\237\234\346\234\272\346\270\251\345\272\246:", nullptr));
        label_temp->setText(QCoreApplication::translate("UserInterface", "0", nullptr));
        label_ads->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
