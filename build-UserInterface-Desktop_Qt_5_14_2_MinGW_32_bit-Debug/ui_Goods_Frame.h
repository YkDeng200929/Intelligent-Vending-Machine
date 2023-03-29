/********************************************************************************
** Form generated from reading UI file 'Goods_Frame.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_FRAME_H
#define UI_GOODS_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Goods_Frame
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_goods_pic;
    QLabel *label_goods_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_store;
    QLabel *label_price;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_left;
    QLabel *label_change_num;
    QPushButton *pushButton_right;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Goods_Frame)
    {
        if (Goods_Frame->objectName().isEmpty())
            Goods_Frame->setObjectName(QString::fromUtf8("Goods_Frame"));
        Goods_Frame->resize(200, 384);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Goods_Frame->sizePolicy().hasHeightForWidth());
        Goods_Frame->setSizePolicy(sizePolicy);
        Goods_Frame->setMinimumSize(QSize(149, 384));
        Goods_Frame->setMaximumSize(QSize(200, 384));
        Goods_Frame->setStyleSheet(QString::fromUtf8("#Goods_Frame{\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"	background-color: rgb(255, 208, 245);\n"
"}"));
        verticalLayout = new QVBoxLayout(Goods_Frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_goods_pic = new QLabel(Goods_Frame);
        label_goods_pic->setObjectName(QString::fromUtf8("label_goods_pic"));
        label_goods_pic->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_goods_pic);

        label_goods_name = new QLabel(Goods_Frame);
        label_goods_name->setObjectName(QString::fromUtf8("label_goods_name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        label_goods_name->setFont(font);
        label_goods_name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_goods_name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_store = new QLabel(Goods_Frame);
        label_store->setObjectName(QString::fromUtf8("label_store"));
        label_store->setFont(font);
        label_store->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_store);

        label_price = new QLabel(Goods_Frame);
        label_price->setObjectName(QString::fromUtf8("label_price"));
        label_price->setFont(font);
        label_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_price);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_left = new QPushButton(Goods_Frame);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_left->sizePolicy().hasHeightForWidth());
        pushButton_left->setSizePolicy(sizePolicy1);
        pushButton_left->setFont(font);

        horizontalLayout->addWidget(pushButton_left);

        label_change_num = new QLabel(Goods_Frame);
        label_change_num->setObjectName(QString::fromUtf8("label_change_num"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cascadia Mono"));
        label_change_num->setFont(font1);
        label_change_num->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_change_num);

        pushButton_right = new QPushButton(Goods_Frame);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        sizePolicy1.setHeightForWidth(pushButton_right->sizePolicy().hasHeightForWidth());
        pushButton_right->setSizePolicy(sizePolicy1);
        pushButton_right->setFont(font);

        horizontalLayout->addWidget(pushButton_right);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(3, 5);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 5);

        retranslateUi(Goods_Frame);

        QMetaObject::connectSlotsByName(Goods_Frame);
    } // setupUi

    void retranslateUi(QWidget *Goods_Frame)
    {
        Goods_Frame->setWindowTitle(QCoreApplication::translate("Goods_Frame", "Form", nullptr));
        label_goods_pic->setText(QCoreApplication::translate("Goods_Frame", "\345\233\276\347\211\207", nullptr));
        label_goods_name->setText(QCoreApplication::translate("Goods_Frame", "\345\272\223\345\255\230", nullptr));
        label_store->setText(QCoreApplication::translate("Goods_Frame", "\345\272\223\345\255\230", nullptr));
        label_price->setText(QCoreApplication::translate("Goods_Frame", "\345\215\225\344\273\267", nullptr));
        pushButton_left->setText(QString());
        label_change_num->setText(QCoreApplication::translate("Goods_Frame", "0", nullptr));
        pushButton_right->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Goods_Frame: public Ui_Goods_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_FRAME_H
