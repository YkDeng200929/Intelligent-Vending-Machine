/********************************************************************************
** Form generated from reading UI file 'Goods_Admin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_ADMIN_H
#define UI_GOODS_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Goods_Admin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_goods_pic;
    QLabel *label_store;
    QLabel *label_price;
    QLabel *label_goods_name;
    QPushButton *pushButton_add;
    QLabel *label;
    QPushButton *pushButton_reduce;

    void setupUi(QDialog *Goods_Admin)
    {
        if (Goods_Admin->objectName().isEmpty())
            Goods_Admin->setObjectName(QString::fromUtf8("Goods_Admin"));
        Goods_Admin->setEnabled(true);
        Goods_Admin->resize(188, 340);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Goods_Admin->sizePolicy().hasHeightForWidth());
        Goods_Admin->setSizePolicy(sizePolicy);
        Goods_Admin->setMinimumSize(QSize(0, 0));
        Goods_Admin->setMaximumSize(QSize(188, 340));
        Goods_Admin->setBaseSize(QSize(0, 0));
        Goods_Admin->setStyleSheet(QString::fromUtf8("#Goods_Admin{\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"	background-color: rgb(255, 208, 245);\n"
"}"));
        verticalLayout = new QVBoxLayout(Goods_Admin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_goods_pic = new QLabel(Goods_Admin);
        label_goods_pic->setObjectName(QString::fromUtf8("label_goods_pic"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_goods_pic->sizePolicy().hasHeightForWidth());
        label_goods_pic->setSizePolicy(sizePolicy1);
        label_goods_pic->setMaximumSize(QSize(188, 16777215));
        label_goods_pic->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_goods_pic);

        label_store = new QLabel(Goods_Admin);
        label_store->setObjectName(QString::fromUtf8("label_store"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(94);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_store->sizePolicy().hasHeightForWidth());
        label_store->setSizePolicy(sizePolicy2);
        label_store->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        label_store->setFont(font);
        label_store->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_store);

        label_price = new QLabel(Goods_Admin);
        label_price->setObjectName(QString::fromUtf8("label_price"));
        sizePolicy1.setHeightForWidth(label_price->sizePolicy().hasHeightForWidth());
        label_price->setSizePolicy(sizePolicy1);
        label_price->setMaximumSize(QSize(188, 16777215));
        label_price->setFont(font);
        label_price->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_price);

        label_goods_name = new QLabel(Goods_Admin);
        label_goods_name->setObjectName(QString::fromUtf8("label_goods_name"));
        label_goods_name->setFont(font);
        label_goods_name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_goods_name);

        pushButton_add = new QPushButton(Goods_Admin);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy1.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy1);
        pushButton_add->setFont(font);

        verticalLayout->addWidget(pushButton_add);

        label = new QLabel(Goods_Admin);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cascadia Mono"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton_reduce = new QPushButton(Goods_Admin);
        pushButton_reduce->setObjectName(QString::fromUtf8("pushButton_reduce"));
        sizePolicy1.setHeightForWidth(pushButton_reduce->sizePolicy().hasHeightForWidth());
        pushButton_reduce->setSizePolicy(sizePolicy1);
        pushButton_reduce->setFont(font);

        verticalLayout->addWidget(pushButton_reduce);

        verticalLayout->setStretch(0, 9);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        retranslateUi(Goods_Admin);

        QMetaObject::connectSlotsByName(Goods_Admin);
    } // setupUi

    void retranslateUi(QDialog *Goods_Admin)
    {
        Goods_Admin->setWindowTitle(QCoreApplication::translate("Goods_Admin", "Dialog", nullptr));
        label_goods_pic->setText(QCoreApplication::translate("Goods_Admin", "\345\233\276\347\211\207", nullptr));
        label_store->setText(QCoreApplication::translate("Goods_Admin", "0", nullptr));
        label_price->setText(QCoreApplication::translate("Goods_Admin", "0", nullptr));
        label_goods_name->setText(QString());
        pushButton_add->setText(QCoreApplication::translate("Goods_Admin", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("Goods_Admin", "0", nullptr));
        pushButton_reduce->setText(QCoreApplication::translate("Goods_Admin", "\347\247\273\351\231\244\345\225\206\345\223\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Goods_Admin: public Ui_Goods_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_ADMIN_H
