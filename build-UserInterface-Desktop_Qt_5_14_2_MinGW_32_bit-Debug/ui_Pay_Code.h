/********************************************************************************
** Form generated from reading UI file 'Pay_Code.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAY_CODE_H
#define UI_PAY_CODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pay_Code
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_code;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Pay_Code)
    {
        if (Pay_Code->objectName().isEmpty())
            Pay_Code->setObjectName(QString::fromUtf8("Pay_Code"));
        Pay_Code->resize(521, 582);
        Pay_Code->setStyleSheet(QString::fromUtf8("#Pay_Code{\n"
"	background-color: rgb(174, 231, 255);\n"
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
        verticalLayout = new QVBoxLayout(Pay_Code);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_code = new QLabel(Pay_Code);
        label_code->setObjectName(QString::fromUtf8("label_code"));
        label_code->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_code);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_back = new QPushButton(Pay_Code);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Cascadia Mono"));
        font.setPointSize(12);
        pushButton_back->setFont(font);

        horizontalLayout->addWidget(pushButton_back);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 8);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        retranslateUi(Pay_Code);

        QMetaObject::connectSlotsByName(Pay_Code);
    } // setupUi

    void retranslateUi(QWidget *Pay_Code)
    {
        Pay_Code->setWindowTitle(QCoreApplication::translate("Pay_Code", "Form", nullptr));
        label_code->setText(QCoreApplication::translate("Pay_Code", "TextLabel", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Pay_Code", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pay_Code: public Ui_Pay_Code {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAY_CODE_H
