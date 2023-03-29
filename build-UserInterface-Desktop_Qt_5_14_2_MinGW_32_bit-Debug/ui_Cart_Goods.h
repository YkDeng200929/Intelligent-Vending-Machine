/********************************************************************************
** Form generated from reading UI file 'Cart_Goods.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CART_GOODS_H
#define UI_CART_GOODS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Cart_Goods
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_pic;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_text;
    QLabel *label_total_price;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_reduce;
    QLabel *label_add_num;
    QPushButton *pushButton_add;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *Cart_Goods)
    {
        if (Cart_Goods->objectName().isEmpty())
            Cart_Goods->setObjectName(QString::fromUtf8("Cart_Goods"));
        Cart_Goods->resize(555, 145);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Cart_Goods->sizePolicy().hasHeightForWidth());
        Cart_Goods->setSizePolicy(sizePolicy);
        Cart_Goods->setMaximumSize(QSize(555, 145));
        Cart_Goods->setStyleSheet(QString::fromUtf8("#Cart_Goods{\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"	background-color: rgb(255, 208, 245);\n"
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
"}"));
        horizontalLayout_2 = new QHBoxLayout(Cart_Goods);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_pic = new QLabel(Cart_Goods);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        sizePolicy.setHeightForWidth(label_pic->sizePolicy().hasHeightForWidth());
        label_pic->setSizePolicy(sizePolicy);
        label_pic->setScaledContents(true);
        label_pic->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_pic);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_text = new QLabel(Cart_Goods);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        sizePolicy.setHeightForWidth(label_text->sizePolicy().hasHeightForWidth());
        label_text->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        label_text->setFont(font);
        label_text->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_text);

        label_total_price = new QLabel(Cart_Goods);
        label_total_price->setObjectName(QString::fromUtf8("label_total_price"));
        sizePolicy.setHeightForWidth(label_total_price->sizePolicy().hasHeightForWidth());
        label_total_price->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cascadia Mono"));
        font1.setPointSize(12);
        label_total_price->setFont(font1);
        label_total_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_total_price);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_reduce = new QPushButton(Cart_Goods);
        pushButton_reduce->setObjectName(QString::fromUtf8("pushButton_reduce"));
        sizePolicy.setHeightForWidth(pushButton_reduce->sizePolicy().hasHeightForWidth());
        pushButton_reduce->setSizePolicy(sizePolicy);
        pushButton_reduce->setMaximumSize(QSize(42, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cascadia Mono"));
        pushButton_reduce->setFont(font2);

        horizontalLayout->addWidget(pushButton_reduce);

        label_add_num = new QLabel(Cart_Goods);
        label_add_num->setObjectName(QString::fromUtf8("label_add_num"));
        sizePolicy.setHeightForWidth(label_add_num->sizePolicy().hasHeightForWidth());
        label_add_num->setSizePolicy(sizePolicy);
        label_add_num->setFont(font2);
        label_add_num->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_add_num);

        pushButton_add = new QPushButton(Cart_Goods);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setMaximumSize(QSize(42, 16777215));
        pushButton_add->setFont(font2);

        horizontalLayout->addWidget(pushButton_add);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        pushButton_clear = new QPushButton(Cart_Goods);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setMaximumSize(QSize(115, 60));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        pushButton_clear->setFont(font3);

        verticalLayout->addWidget(pushButton_clear);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 2);
        horizontalLayout_2->setStretch(5, 1);

        retranslateUi(Cart_Goods);

        QMetaObject::connectSlotsByName(Cart_Goods);
    } // setupUi

    void retranslateUi(QDialog *Cart_Goods)
    {
        Cart_Goods->setWindowTitle(QCoreApplication::translate("Cart_Goods", "Dialog", nullptr));
        label_pic->setText(QString());
        label_text->setText(QCoreApplication::translate("Cart_Goods", "\346\200\273\351\207\221\351\242\235: ", nullptr));
        label_total_price->setText(QCoreApplication::translate("Cart_Goods", "0", nullptr));
        pushButton_reduce->setText(QCoreApplication::translate("Cart_Goods", "-", nullptr));
        label_add_num->setText(QCoreApplication::translate("Cart_Goods", "0", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Cart_Goods", "+", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Cart_Goods", "\347\247\273\345\207\272\350\264\255\347\211\251\350\275\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cart_Goods: public Ui_Cart_Goods {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CART_GOODS_H
