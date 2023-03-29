/********************************************************************************
** Form generated from reading UI file 'Goods_Test.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_TEST_H
#define UI_GOODS_TEST_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Goods_Test
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
    QPushButton *pushButton_add_remove;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Goods_Test)
    {
        if (Goods_Test->objectName().isEmpty())
            Goods_Test->setObjectName(QStringLiteral("Goods_Test"));
        Goods_Test->resize(200, 384);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Goods_Test->sizePolicy().hasHeightForWidth());
        Goods_Test->setSizePolicy(sizePolicy);
        Goods_Test->setMinimumSize(QSize(149, 384));
        Goods_Test->setMaximumSize(QSize(200, 384));
        Goods_Test->setStyleSheet(QLatin1String("#Goods_Test{\n"
"	border: 5px solid rgb(255, 110, 255);\n"
"	border-color: rgb(255, 123, 169);\n"
"	border-radius: 12px;\n"
"	background-color: rgb(255, 208, 245);\n"
"}"));
        verticalLayout = new QVBoxLayout(Goods_Test);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_goods_pic = new QLabel(Goods_Test);
        label_goods_pic->setObjectName(QStringLiteral("label_goods_pic"));
        label_goods_pic->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_goods_pic);

        label_goods_name = new QLabel(Goods_Test);
        label_goods_name->setObjectName(QStringLiteral("label_goods_name"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        label_goods_name->setFont(font);
        label_goods_name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_goods_name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_store = new QLabel(Goods_Test);
        label_store->setObjectName(QStringLiteral("label_store"));
        label_store->setFont(font);
        label_store->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_store);

        label_price = new QLabel(Goods_Test);
        label_price->setObjectName(QStringLiteral("label_price"));
        label_price->setFont(font);
        label_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_price);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_add_remove = new QPushButton(Goods_Test);
        pushButton_add_remove->setObjectName(QStringLiteral("pushButton_add_remove"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_add_remove->sizePolicy().hasHeightForWidth());
        pushButton_add_remove->setSizePolicy(sizePolicy1);
        pushButton_add_remove->setFont(font);

        horizontalLayout->addWidget(pushButton_add_remove);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 33, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);

        retranslateUi(Goods_Test);

        QMetaObject::connectSlotsByName(Goods_Test);
    } // setupUi

    void retranslateUi(QDialog *Goods_Test)
    {
        Goods_Test->setWindowTitle(QApplication::translate("Goods_Test", "Dialog", Q_NULLPTR));
        label_goods_pic->setText(QApplication::translate("Goods_Test", "\345\233\276\347\211\207", Q_NULLPTR));
        label_goods_name->setText(QApplication::translate("Goods_Test", "\345\272\223\345\255\230", Q_NULLPTR));
        label_store->setText(QApplication::translate("Goods_Test", "\345\272\223\345\255\230", Q_NULLPTR));
        label_price->setText(QApplication::translate("Goods_Test", "\345\215\225\344\273\267", Q_NULLPTR));
        pushButton_add_remove->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Goods_Test: public Ui_Goods_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_TEST_H
