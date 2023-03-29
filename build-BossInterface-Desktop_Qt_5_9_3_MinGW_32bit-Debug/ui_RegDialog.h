/********************************************************************************
** Form generated from reading UI file 'RegDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGDIALOG_H
#define UI_REGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_user_name;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_passwd;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEdit_ack_passwd;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_quit;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_ack;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *RegDialog)
    {
        if (RegDialog->objectName().isEmpty())
            RegDialog->setObjectName(QStringLiteral("RegDialog"));
        RegDialog->resize(450, 890);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegDialog->sizePolicy().hasHeightForWidth());
        RegDialog->setSizePolicy(sizePolicy);
        RegDialog->setMaximumSize(QSize(450, 890));
        RegDialog->setStyleSheet(QLatin1String("#RegDialog{		\n"
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
"}\n"
"\n"
"QLineEdit{\n"
"	background-color: rgb(242, 255, 174);\n"
"	border: 3px solid rgb(255, 125, 153);\n"
"    border-radius: 12px;\n"
"}"));
        verticalLayout = new QVBoxLayout(RegDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(RegDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(RegDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 12);

        verticalLayout->addLayout(horizontalLayout);

        lineEdit_user_name = new QLineEdit(RegDialog);
        lineEdit_user_name->setObjectName(QStringLiteral("lineEdit_user_name"));
        sizePolicy1.setHeightForWidth(lineEdit_user_name->sizePolicy().hasHeightForWidth());
        lineEdit_user_name->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(10);
        lineEdit_user_name->setFont(font2);

        verticalLayout->addWidget(lineEdit_user_name);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_3 = new QLabel(RegDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 12);

        verticalLayout->addLayout(horizontalLayout_2);

        lineEdit_passwd = new QLineEdit(RegDialog);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));
        sizePolicy1.setHeightForWidth(lineEdit_passwd->sizePolicy().hasHeightForWidth());
        lineEdit_passwd->setSizePolicy(sizePolicy1);
        lineEdit_passwd->setFont(font2);

        verticalLayout->addWidget(lineEdit_passwd);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label_4 = new QLabel(RegDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 12);

        verticalLayout->addLayout(horizontalLayout_4);

        lineEdit_ack_passwd = new QLineEdit(RegDialog);
        lineEdit_ack_passwd->setObjectName(QStringLiteral("lineEdit_ack_passwd"));
        sizePolicy1.setHeightForWidth(lineEdit_ack_passwd->sizePolicy().hasHeightForWidth());
        lineEdit_ack_passwd->setSizePolicy(sizePolicy1);
        lineEdit_ack_passwd->setFont(font2);

        verticalLayout->addWidget(lineEdit_ack_passwd);

        verticalSpacer_4 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_quit = new QPushButton(RegDialog);
        pushButton_quit->setObjectName(QStringLiteral("pushButton_quit"));
        sizePolicy1.setHeightForWidth(pushButton_quit->sizePolicy().hasHeightForWidth());
        pushButton_quit->setSizePolicy(sizePolicy1);
        pushButton_quit->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_quit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_ack = new QPushButton(RegDialog);
        pushButton_ack->setObjectName(QStringLiteral("pushButton_ack"));
        sizePolicy1.setHeightForWidth(pushButton_ack->sizePolicy().hasHeightForWidth());
        pushButton_ack->setSizePolicy(sizePolicy1);
        pushButton_ack->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_ack);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(3, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 3);
        verticalLayout->setStretch(5, 2);
        verticalLayout->setStretch(6, 3);
        verticalLayout->setStretch(7, 2);
        verticalLayout->setStretch(8, 3);
        verticalLayout->setStretch(9, 1);
        verticalLayout->setStretch(10, 3);
        verticalLayout->setStretch(11, 1);

        retranslateUi(RegDialog);

        QMetaObject::connectSlotsByName(RegDialog);
    } // setupUi

    void retranslateUi(QDialog *RegDialog)
    {
        RegDialog->setWindowTitle(QApplication::translate("RegDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RegDialog", "\347\224\250\346\210\267\346\263\250\345\206\214\345\271\263\345\217\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("RegDialog", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        lineEdit_user_name->setPlaceholderText(QApplication::translate("RegDialog", "  \350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegDialog", "\345\257\206 \347\240\201", Q_NULLPTR));
        lineEdit_passwd->setPlaceholderText(QApplication::translate("RegDialog", "  \350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegDialog", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        lineEdit_ack_passwd->setPlaceholderText(QApplication::translate("RegDialog", "  \350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_quit->setText(QApplication::translate("RegDialog", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_ack->setText(QApplication::translate("RegDialog", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegDialog: public Ui_RegDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGDIALOG_H
