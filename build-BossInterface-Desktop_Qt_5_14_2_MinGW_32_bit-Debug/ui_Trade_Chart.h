/********************************************************************************
** Form generated from reading UI file 'Trade_Chart.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADE_CHART_H
#define UI_TRADE_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Trade_Chart
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QPushButton *pushButton;

    void setupUi(QWidget *Trade_Chart)
    {
        if (Trade_Chart->objectName().isEmpty())
            Trade_Chart->setObjectName(QString::fromUtf8("Trade_Chart"));
        Trade_Chart->resize(450, 890);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Trade_Chart->sizePolicy().hasHeightForWidth());
        Trade_Chart->setSizePolicy(sizePolicy);
        Trade_Chart->setMaximumSize(QSize(450, 890));
        Trade_Chart->setStyleSheet(QString::fromUtf8("QWidget{		\n"
"background-color: rgb(199, 236, 247);\n"
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
        verticalLayout = new QVBoxLayout(Trade_Chart);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Trade_Chart);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        widget = new QWidget(Trade_Chart);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(widget);

        pushButton = new QPushButton(Trade_Chart);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 1);

        retranslateUi(Trade_Chart);

        QMetaObject::connectSlotsByName(Trade_Chart);
    } // setupUi

    void retranslateUi(QWidget *Trade_Chart)
    {
        Trade_Chart->setWindowTitle(QCoreApplication::translate("Trade_Chart", "Form", nullptr));
        label->setText(QCoreApplication::translate("Trade_Chart", "\346\237\245\347\234\213\346\234\254\346\234\210\351\224\200\345\224\256\351\242\235", nullptr));
        pushButton->setText(QCoreApplication::translate("Trade_Chart", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Trade_Chart: public Ui_Trade_Chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADE_CHART_H
