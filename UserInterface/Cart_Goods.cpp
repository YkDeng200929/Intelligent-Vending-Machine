#include "Cart_Goods.hpp"
#include "ui_Cart_Goods.h"

Cart_Goods::Cart_Goods(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cart_Goods)
{
    ui->setupUi(this);
}

Cart_Goods::~Cart_Goods()
{
    delete ui;
}

void Cart_Goods::Creat_goods_Widget()
{
    ui->label_pic->setPixmap(QPixmap(goods_pic_path));
    ui->label_add_num->setText(QString::number(added_num));
    ui->label_total_price->setText(QString::number(total_price));
}

void Cart_Goods::Set_Goods_Id(QString id)
{
    goods_id = id;
}

QString Cart_Goods::Get_Goods_Id()
{
    return goods_id;
}

void Cart_Goods::Create_Good_Widget()
{
}

void Cart_Goods::Set_Good_Name(QString name)
{
    goods_name = name;
}

QString Cart_Goods::Get_Good_Name()
{
    return goods_name;
}

void Cart_Goods::Set_Good_Price(double price)
{
    good_price = price;
}

int Cart_Goods::Get_Good_Price()
{
    return good_price;
}

void Cart_Goods::Set_Good_Store(int store)
{
    good_store += store;
}

void Cart_Goods::Set_Good_Pic(QString path)
{
    goods_pic_path = path;
}

QString Cart_Goods::Get_Good_Pic()
{
    return goods_pic_path;
}

void Cart_Goods::Add_Cart_Num(int num)
{
    Q_UNUSED(num)
}

void Cart_Goods::Remove_Cart_Num(int num)
{
    Q_UNUSED(num)
}

void Cart_Goods::Refresh_User_UI()
{
}

double Cart_Goods::Get_Total_Price()
{
    return total_price;
}

void Cart_Goods::Refresh_Total_Price(double total_price, int num)
{
    this->total_price = total_price;
    added_num = num;
}

int Cart_Goods::Get_Added_Num()
{
    return added_num;
}

void Cart_Goods::on_pushButton_clear_clicked()
{
    this->total_price = 0;
}
