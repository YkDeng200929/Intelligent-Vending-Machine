/********************************************************************************
** Form generated from reading UI file 'ManageDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDIALOG_H
#define UI_MANAGEDIALOG_H

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

class Ui_ManageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_reg_machine;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_change_passwd;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_check_machine;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_destroy_machine;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_logout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ManageDialog)
    {
        if (ManageDialog->objectName().isEmpty())
            ManageDialog->setObjectName(QStringLiteral("ManageDialog"));
        ManageDialog->resize(450, 890);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ManageDialog->sizePolicy().hasHeightForWidth());
        ManageDialog->setSizePolicy(sizePolicy);
        ManageDialog->setMaximumSize(QSize(450, 890));
        ManageDialog->setStyleSheet(QLatin1String("#ManageDialog{		\n"
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
        verticalLayout = new QVBoxLayout(ManageDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(28, 65, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(ManageDialog);
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

        verticalSpacer_4 = new QSpacerItem(28, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_reg_machine = new QPushButton(ManageDialog);
        pushButton_reg_machine->setObjectName(QStringLiteral("pushButton_reg_machine"));
        sizePolicy1.setHeightForWidth(pushButton_reg_machine->sizePolicy().hasHeightForWidth());
        pushButton_reg_machine->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        pushButton_reg_machine->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_reg_machine);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_change_passwd = new QPushButton(ManageDialog);
        pushButton_change_passwd->setObjectName(QStringLiteral("pushButton_change_passwd"));
        sizePolicy1.setHeightForWidth(pushButton_change_passwd->sizePolicy().hasHeightForWidth());
        pushButton_change_passwd->setSizePolicy(sizePolicy1);
        pushButton_change_passwd->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_change_passwd);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 4);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_check_machine = new QPushButton(ManageDialog);
        pushButton_check_machine->setObjectName(QStringLiteral("pushButton_check_machine"));
        sizePolicy1.setHeightForWidth(pushButton_check_machine->sizePolicy().hasHeightForWidth());
        pushButton_check_machine->setSizePolicy(sizePolicy1);
        pushButton_check_machine->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_check_machine);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_destroy_machine = new QPushButton(ManageDialog);
        pushButton_destroy_machine->setObjectName(QStringLiteral("pushButton_destroy_machine"));
        sizePolicy1.setHeightForWidth(pushButton_destroy_machine->sizePolicy().hasHeightForWidth());
        pushButton_destroy_machine->setSizePolicy(sizePolicy1);
        pushButton_destroy_machine->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_destroy_machine);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 4);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 4);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_logout = new QPushButton(ManageDialog);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        sizePolicy1.setHeightForWidth(pushButton_logout->sizePolicy().hasHeightForWidth());
        pushButton_logout->setSizePolicy(sizePolicy1);
        pushButton_logout->setFont(font1);

        horizontalLayout->addWidget(pushButton_logout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 8);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 3);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 3);
        verticalLayout->setStretch(6, 1);
        verticalLayout->setStretch(7, 3);
        verticalLayout->setStretch(8, 4);

        retranslateUi(ManageDialog);

        QMetaObject::connectSlotsByName(ManageDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageDialog)
    {
        ManageDialog->setWindowTitle(QApplication::translate("ManageDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ManageDialog", "  \346\202\250 \345\245\275\357\274\201", Q_NULLPTR));
        pushButton_reg_machine->setText(QApplication::translate("ManageDialog", "\346\263\250\345\206\214\346\237\234\346\234\272", Q_NULLPTR));
        pushButton_change_passwd->setText(QApplication::translate("ManageDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        pushButton_check_machine->setText(QApplication::translate("ManageDialog", "\346\237\245\347\234\213\346\237\234\346\234\272", Q_NULLPTR));
        pushButton_destroy_machine->setText(QApplication::translate("ManageDialog", "\346\263\250\351\224\200\346\237\234\346\234\272", Q_NULLPTR));
        pushButton_logout->setText(QApplication::translate("ManageDialog", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ManageDialog: public Ui_ManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDIALOG_H
