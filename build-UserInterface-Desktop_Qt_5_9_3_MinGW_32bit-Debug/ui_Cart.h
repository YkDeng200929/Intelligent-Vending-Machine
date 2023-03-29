/********************************************************************************
** Form generated from reading UI file 'Cart.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_H
#define UI_CART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cart
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_userList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_quit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_pay;
    QLabel *label_priceText;
    QLabel *label_priceNum;

    void setupUi(QWidget *Cart)
    {
        if (Cart->objectName().isEmpty())
            Cart->setObjectName(QStringLiteral("Cart"));
        Cart->resize(1080, 720);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Cart->sizePolicy().hasHeightForWidth());
        Cart->setSizePolicy(sizePolicy);
        Cart->setStyleSheet(QLatin1String("#Cart{	\n"
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
""));
        gridLayout = new QGridLayout(Cart);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget_userList = new QTableWidget(Cart);
        if (tableWidget_userList->columnCount() < 4)
            tableWidget_userList->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_userList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_userList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_userList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_userList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget_userList->rowCount() < 7)
            tableWidget_userList->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_userList->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_userList->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_userList->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_userList->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_userList->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_userList->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_userList->setVerticalHeaderItem(6, __qtablewidgetitem10);
        tableWidget_userList->setObjectName(QStringLiteral("tableWidget_userList"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        tableWidget_userList->setFont(font);
        tableWidget_userList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_userList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_userList->setShowGrid(true);
        tableWidget_userList->horizontalHeader()->setVisible(false);
        tableWidget_userList->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_userList->horizontalHeader()->setMinimumSectionSize(200);
        tableWidget_userList->verticalHeader()->setVisible(false);
        tableWidget_userList->verticalHeader()->setDefaultSectionSize(400);
        tableWidget_userList->verticalHeader()->setMinimumSectionSize(150);

        verticalLayout->addWidget(tableWidget_userList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_quit = new QPushButton(Cart);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        sizePolicy.setHeightForWidth(pushButton_quit->sizePolicy().hasHeightForWidth());
        pushButton_quit->setSizePolicy(sizePolicy);
        pushButton_quit->setFont(font);

        horizontalLayout->addWidget(pushButton_quit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_pay = new QPushButton(Cart);
        pushButton_pay->setObjectName(QStringLiteral("pushButton_pay"));
        sizePolicy.setHeightForWidth(pushButton_pay->sizePolicy().hasHeightForWidth());
        pushButton_pay->setSizePolicy(sizePolicy);
        pushButton_pay->setFont(font);

        horizontalLayout->addWidget(pushButton_pay);

        label_priceText = new QLabel(Cart);
        label_priceText->setObjectName(QStringLiteral("label_priceText"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(15);
        label_priceText->setFont(font1);
        label_priceText->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_priceText);

        label_priceNum = new QLabel(Cart);
        label_priceNum->setObjectName(QStringLiteral("label_priceNum"));
        sizePolicy.setHeightForWidth(label_priceNum->sizePolicy().hasHeightForWidth());
        label_priceNum->setSizePolicy(sizePolicy);
        label_priceNum->setFont(font1);
        label_priceNum->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_priceNum);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 12);
        horizontalLayout->setStretch(3, 5);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Cart);

        QMetaObject::connectSlotsByName(Cart);
    } // setupUi

    void retranslateUi(QWidget *Cart)
    {
        Cart->setWindowTitle(QApplication::translate("Cart", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_userList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_userList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_userList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_userList->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\345\210\227", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_userList->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_userList->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_userList->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_userList->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_userList->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_userList->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_userList->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("Cart", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("Cart", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_pay->setText(QApplication::translate("Cart", "\347\241\256\350\256\244\346\224\257\344\273\230", Q_NULLPTR));
        label_priceText->setText(QApplication::translate("Cart", "\346\200\273\351\207\221\351\242\235:", Q_NULLPTR));
        label_priceNum->setText(QApplication::translate("Cart", "7", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Cart: public Ui_Cart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_H
