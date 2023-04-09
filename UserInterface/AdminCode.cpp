#include "AdminCode.hpp"
#include "ui_AdminCode.h"
#include <QDebug>
#include <QMessageBox>

AdminCode::AdminCode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminCode),
    tcp_manager(new NetManager(this))
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/BOSS.png"));
    setWindowTitle("Admin Code");
    tcp_manager->Build_Connection();
    connect(ui->pushButton_quit, SIGNAL(clicked), this, SLOT(on_pushButton_quit_clicked()));
    connect(ui->pushButton_ack, SIGNAL(clicked), this, SLOT(on_pushButton_ack_clicked()));
    connect(tcp_manager, &NetManager::sig_admin_code_ok, this, &AdminCode::slot_get_admin_code_ok);
    connect(tcp_manager, &NetManager::sig_admin_code_fail, this, &AdminCode::slot_get_admin_code_fail);
    tcp_manager->Get_Admin_Code();
}

AdminCode::~AdminCode()
{
    tcp_manager->disconnect();
    delete ui;
}

void AdminCode::on_pushButton_quit_clicked()
{
    emit sig_admin_code_interface_close();
    input_code.clear();
    ui->plainTextEdit_code->clear();
    this->close();
}

void AdminCode::on_pushButton_1_clicked()
{
    input_code.append('1');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_2_clicked()
{
    input_code.append('2');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_3_clicked()
{
    input_code.append('3');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_5_clicked()
{
    input_code.append('5');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_6_clicked()
{
    input_code.append('6');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_4_clicked()
{
    input_code.append('4');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_7_clicked()
{
    input_code.append('7');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_9_clicked()
{
    input_code.append('9');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_8_clicked()
{
    input_code.append('8');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_0_clicked()
{
    input_code.append('0');
    ui->plainTextEdit_code->setPlainText(input_code);
}

void AdminCode::on_pushButton_ack_clicked()
{
    tcp_manager->Get_Admin_Code();
    if (input_code == correct_code && !input_code.isEmpty()){
        input_code.clear();
        ui->plainTextEdit_code->clear();
        emit sig_admin_code_correct();
        this->close();
    }
    else{
        input_code.clear();
        ui->plainTextEdit_code->setPlainText(input_code);
        ui->plainTextEdit_code->setPlaceholderText("  授权码输入错误, 请重新输入");
    }
}

void AdminCode::slot_get_admin_code_ok(QJsonValue code)
{
    correct_code = code.toString();
    qDebug() << "slot" << correct_code;
    ui->plainTextEdit_code->setPlaceholderText(" 获取授权码成功, 请输入授权码!");
}

void AdminCode::slot_get_admin_code_fail()
{
    ui->plainTextEdit_code->setPlaceholderText(" 获取授权码失败, 请联系老板!");
}
