/********************************************************************************
** Form generated from reading UI file 'Goods_Frame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOODS_FRAME_H
#define UI_GOODS_FRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Goods_Frame
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_store;
    QLabel *label_price;

    void setupUi(QWidget *Goods_Frame)
    {
        if (Goods_Frame->objectName().isEmpty())
            Goods_Frame->setObjectName(QStringLiteral("Goods_Frame"));
        Goods_Frame->resize(391, 182);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Goods_Frame->sizePolicy().hasHeightForWidth());
        Goods_Frame->setSizePolicy(sizePolicy);
        Goods_Frame->setMaximumSize(QSize(391, 182));
        horizontalLayout = new QHBoxLayout(Goods_Frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Goods_Frame);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_store = new QLabel(Goods_Frame);
        label_store->setObjectName(QStringLiteral("label_store"));
        label_store->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_store);

        label_price = new QLabel(Goods_Frame);
        label_price->setObjectName(QStringLiteral("label_price"));
        label_price->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_price);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Goods_Frame);

        QMetaObject::connectSlotsByName(Goods_Frame);
    } // setupUi

    void retranslateUi(QWidget *Goods_Frame)
    {
        Goods_Frame->setWindowTitle(QApplication::translate("Goods_Frame", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Goods_Frame", "pic", Q_NULLPTR));
        label_store->setText(QApplication::translate("Goods_Frame", "\345\272\223\345\255\230", Q_NULLPTR));
        label_price->setText(QApplication::translate("Goods_Frame", "\345\215\225\344\273\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Goods_Frame: public Ui_Goods_Frame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOODS_FRAME_H
