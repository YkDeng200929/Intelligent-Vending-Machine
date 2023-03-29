#include "Goods_Test.hpp"
#include "ui_Goods_Test.h"
#include <QDebug>

Goods_Test::Goods_Test(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Goods_Test)
{
    ui->setupUi(this);

    connect(ui->pushButton_add_remove, SIGNAL(pressed),
            this, SLOT(on_pushButton_add_remove_clicked()));
    // 初始化商品UI
    Init_UI();
}

Goods_Test::~Goods_Test()
{
    delete ui;
}

void Goods_Test::Set_Goods_Id(QString id)
{
    goods_id = id;
}

QString Goods_Test::Get_Goods_Id()
{
    return goods_id;
}

void Goods_Test::Create_Good_Widget()
{
    if (!base_info){
        // 设置商品图片
        ui->label_goods_pic->setPixmap(QPixmap(goods_pic_path));
        QString price = "单价: ";
        ui->label_price->setText(price.append(QString::number(good_price)));
        ui->label_goods_name->setText(goods_name);
    }
}

void Goods_Test::Set_Good_Name(QString name)
{
    goods_name = name;
}

QString Goods_Test::Get_Good_Name()
{
    return goods_name;
}

void Goods_Test::Set_Good_Price(double price)
{
    good_price = price;
}

int Goods_Test::Get_Good_Price()
{
    return good_price;
}

void Goods_Test::Set_Good_Store(int store)
{
    good_store = store;
}

int Goods_Test::Get_Good_Store()
{
    return good_store;
}

void Goods_Test::Set_Good_Pic(QString path)
{
    goods_pic_path = path;
}

QString Goods_Test::Get_Good_Pic()
{
    return goods_pic_path;
}

void Goods_Test::Pay_Success()
{
    total_price = 0;
}

void Goods_Test::Change_Label_Add_Cart()
{
    ui->pushButton_add_remove->setText("+");
}

void Goods_Test::Change_Label_Remove_Cart()
{
    ui->pushButton_add_remove->setText("从购物车中移除");
}

void Goods_Test::Init_UI()
{
    if (good_store <= 0){
        ui->label_store->setText("无货");
    }else{
        //ui->label_store->setText("库存:" + QString::number(good_store) + "件");
        ui->label_store->setText("有货");
    }
    ui->label_goods_name->setText(goods_name);
    ui->label_price->setPixmap(QPixmap(goods_pic_path));
}

void Goods_Test::Add_Cart_Num(int num)
{
    if (good_store > 0 && (added_num + num) <= good_store){
        total_price += num * good_price;
        added_num += num;
        ui->label_dynamic_nums->setText(QString::number(added_num));
        qDebug() << "Now Total Price: " << total_price;
    }else{
        return ;
    }
}

void Goods_Test::Remove_Cart_Num(int num)
{
    if ((added_num == 0) || (added_num - num) > 0){
        total_price -= num * good_price;
    }
}

double Goods_Test::Refresh_Total_Price()
{
    return total_price;
}

void Goods_Test::Refresh_User_UI()
{
    Change_Label_Add_Cart();
    if (good_store <= 0){
        ui->label_store->setText("无货");
        //ui->pushButton_add_remove->setDisabled(true);
    }else{
        ui->label_store->setText("有货");
        //ui->pushButton_add_remove->setEnabled(true);
    }
    QString price = "单价: ";
    ui->label_price->setText(price.append(QString::number(good_price)));
    ui->label_dynamic_nums->setText(QString::number(added_num));
}

double Goods_Test::Get_Total_Price()
{
    return total_price;
}

void Goods_Test::Clear_Pay_Ok()
{
    total_price = 0;
    added_num = 0;
}

int Goods_Test::Get_Buy_Num()
{
    return added_num;
}

void Goods_Test::Clear_Buy_Num()
{
    added_num = 0;
}

void Goods_Test::on_pushButton_add_remove_clicked()
{
    if (!good_store){
        return ;
    }
    Add_Cart_Num(1);
    Refresh_User_UI();
    emit sig_user_add_goods(goods_name, goods_id, added_num,
                            total_price);
}
