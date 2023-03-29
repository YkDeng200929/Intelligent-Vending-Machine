/********************************************************************************
** Form generated from reading UI file 'AdminCode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCODE_H
#define UI_ADMINCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminCode
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QPlainTextEdit *plainTextEdit_code;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_quit;
    QPushButton *pushButton_0;
    QPushButton *pushButton_ack;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *AdminCode)
    {
        if (AdminCode->objectName().isEmpty())
            AdminCode->setObjectName(QStringLiteral("AdminCode"));
        AdminCode->resize(1080, 720);
        AdminCode->setStyleSheet(QLatin1String("#AdminCode{	\n"
"	background-color: rgb(198, 245, 255);\n"
"}\n"
"\n"
"#plainTextEdit{	\n"
"	background-color: rgb(242, 255, 174);\n"
"	border: 3px solid rgb(255, 125, 153);\n"
"    border-radius: 12px;\n"
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
""));
        gridLayout = new QGridLayout(AdminCode);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(AdminCode);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        plainTextEdit_code = new QPlainTextEdit(AdminCode);
        plainTextEdit_code->setObjectName(QStringLiteral("plainTextEdit_code"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit_code->sizePolicy().hasHeightForWidth());
        plainTextEdit_code->setSizePolicy(sizePolicy);
        plainTextEdit_code->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        plainTextEdit_code->setFont(font1);
        plainTextEdit_code->setStyleSheet(QLatin1String("background-color: rgb(242, 255, 174);\n"
"	border: 3px solid rgb(255, 125, 153);\n"
"    border-radius: 12px;"));
        plainTextEdit_code->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_code->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit_code->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(plainTextEdit_code);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_1 = new QPushButton(AdminCode);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Cascadia Mono"));
        font2.setPointSize(12);
        pushButton_1->setFont(font2);

        horizontalLayout->addWidget(pushButton_1);

        pushButton_2 = new QPushButton(AdminCode);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font2);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(AdminCode);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font2);

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_4 = new QPushButton(AdminCode);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(AdminCode);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(AdminCode);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font2);

        horizontalLayout_2->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_7 = new QPushButton(AdminCode);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(AdminCode);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(AdminCode);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setFont(font2);

        horizontalLayout_3->addWidget(pushButton_9);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_quit = new QPushButton(AdminCode);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        sizePolicy.setHeightForWidth(pushButton_quit->sizePolicy().hasHeightForWidth());
        pushButton_quit->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(12);
        pushButton_quit->setFont(font3);

        horizontalLayout_4->addWidget(pushButton_quit);

        pushButton_0 = new QPushButton(AdminCode);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setFont(font2);

        horizontalLayout_4->addWidget(pushButton_0);

        pushButton_ack = new QPushButton(AdminCode);
        pushButton_ack->setObjectName(QStringLiteral("pushButton_ack"));
        sizePolicy.setHeightForWidth(pushButton_ack->sizePolicy().hasHeightForWidth());
        pushButton_ack->setSizePolicy(sizePolicy);
        pushButton_ack->setFont(font3);

        horizontalLayout_4->addWidget(pushButton_ack);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 1);

        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);
        horizontalLayout_5->setStretch(2, 1);

        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        retranslateUi(AdminCode);

        QMetaObject::connectSlotsByName(AdminCode);
    } // setupUi

    void retranslateUi(QWidget *AdminCode)
    {
        AdminCode->setWindowTitle(QApplication::translate("AdminCode", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AdminCode", "\350\257\267\350\276\223\345\205\245\346\216\210\346\235\203\347\240\201", Q_NULLPTR));
        plainTextEdit_code->setPlaceholderText(QApplication::translate("AdminCode", "  \350\257\267\350\276\223\345\205\245\346\216\210\346\235\203\347\240\201", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("AdminCode", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("AdminCode", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("AdminCode", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("AdminCode", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("AdminCode", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("AdminCode", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("AdminCode", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("AdminCode", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("AdminCode", "9", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("AdminCode", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("AdminCode", "0", Q_NULLPTR));
        pushButton_ack->setText(QApplication::translate("AdminCode", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminCode: public Ui_AdminCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCODE_H
