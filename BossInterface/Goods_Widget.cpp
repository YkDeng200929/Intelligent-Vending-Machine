#include "Goods_Widget.hpp"
#include "ui_Goods_Widget.h"

Goods_Widget::Goods_Widget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Goods_Widget)
{
    ui->setupUi(this);
}

Goods_Widget::~Goods_Widget()
{
    delete ui;
}

// 初始化商品控件
void Goods_Widget::Init_Widget()
{
    if (!base_info){
        ui->label_pic->setPixmap(QPixmap(pic_path));
        ui->label_price->setText("单价: " + QString::number(price) + " 元");
        base_info = true;
    }
    ui->label_store->setText("库存: " + QString::number(store));
}

void Goods_Widget::Set_Goods_Name(QString name)
{
    this->name = name;
}

QString Goods_Widget::Get_Goods_Name()
{
    return this->name;
}

void Goods_Widget::Set_Goods_Type(QString type)
{
    this->type = type;
}

QString Goods_Widget::Get_Goods_Type()
{
    return this->type;
}

void Goods_Widget::Set_Goods_Price(double price)
{
    this->price = price;
}

double Goods_Widget::Get_Goods_Price()
{
    return this->price;
}

void Goods_Widget::Set_Goods_Store(int store)
{
    this->store = store;
}

int Goods_Widget::Get_Goods_Store()
{
    return this->store;
}

void Goods_Widget::Set_Goods_Pic(QString path)
{
    this->pic_path = path;
}

QString Goods_Widget::Get_Goods_Pic()
{
    return this->pic_path;
}

void Goods_Widget::Refresh_Goods_Info()
{
    ui->label_price->setText("单价: " + QString::number(price) + " 元");
    ui->label_store->setText("库存: " + QString::number(store));
}
