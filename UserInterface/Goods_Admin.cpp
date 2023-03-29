#include "Goods_Admin.hpp"
#include "ui_Goods_Admin.h"

#include <QDebug>

Goods_Admin::Goods_Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Goods_Admin)
{
    ui->setupUi(this);

    // 补货按钮点击
    connect(ui->pushButton_add, &QPushButton::click,
            this, &Goods_Admin::on_pushButton_add_clicked);
    // 清货按钮点击
    connect(ui->pushButton_reduce, &QPushButton::click,
            this, &Goods_Admin::on_pushButton_reduce_clicked);
}

Goods_Admin::~Goods_Admin()
{
    delete ui;
}

// 设置商品id
void Goods_Admin::Set_Goods_Id(QString id)
{
    goods_id = id;
}

// 获取商品id
QString Goods_Admin::Get_Goods_Id()
{
    return goods_id;
}

// 创建商品控件
void Goods_Admin::Create_Good_Widget()
{
    if (!base_info){
        // 设置商品图片
        ui->label_goods_pic->setPixmap(QPixmap(goods_pic_path));
        QString price = "单价: ";
        ui->label_price->setText(price.append(QString::number(good_price)));
        ui->label_goods_name->setText(goods_name);
        if (good_store <= 0){
            ui->label_store->setText("无货");
        }else{
            ui->label_store->setText("库存: " + QString::number(good_store));
        }
    }
}

// 设置商品名称
void Goods_Admin::Set_Good_Name(QString name)
{
    goods_name = name;
}

// 获取商品名称
QString Goods_Admin::Get_Good_Name()
{
    return goods_name;
}

// 设置商品价格
void Goods_Admin::Set_Good_Price(int price)
{
    good_price = price;
}

// 获取商品价格
int Goods_Admin::Get_Good_Price()
{
    return good_price;
}

// 设置商品
void Goods_Admin::Set_Good_Store(int store)
{
    good_store += store;
}

// 设置商品图片
void Goods_Admin::Set_Good_Pic(QString path)
{
    goods_pic_path = path;
}

// 获取商品图片路径
QString Goods_Admin::Get_Good_Pic()
{
    return goods_pic_path;
}

// 刷新库存标签
void Goods_Admin::Refresh_Store_Label()
{
    if (good_store <= 0){
        ui->label_store->setText("无货");
    }else{
        ui->label_store->setText("库存:" + QString::number(good_store) + "件");
    }
}

// 补货
void Goods_Admin::Add_Goods(int num)
{
    add_num += num;
}

// 清货
void Goods_Admin::Remove_Goods(int num)
{
    reduce_num -= num;
    if (!good_store || !(good_store - num)){
        return ;
    }
}

// 设置商品类型
void Goods_Admin::Set_Goods_Type(QString type)
{
    goods_type = type;
}

// 获取商品类型
QString Goods_Admin::Get_Goods_Type()
{
    return goods_type;
}

// 刷新控件界面
void Goods_Admin::Refresh_UI()
{
    Refresh_Store_Label();
    int current_num = add_num + reduce_num;
    //ui->label_dynamic_nums->setText(QString::number(current_num));
    ui->label->setText(QString::number(current_num));
    //ui->label_price->setText("ok");
}

// 确认管理成功后刷新界面
void Goods_Admin::Manage_Ok()
{
    good_store += add_num + reduce_num;
    add_num = 0, reduce_num = 0;
    Refresh_Store_Label();
    ui->label->setText("0");
}

// 补货
void Goods_Admin::on_pushButton_add_clicked()
{
    Add_Goods(1);
    Refresh_UI();
    int current_store = good_store + add_num + reduce_num;
    if (current_store <= 0){
        current_store = 0;
    }
    emit sig_manage_goods(goods_type, goods_id,
                          goods_name, current_store);
}

// 清货
void Goods_Admin::on_pushButton_reduce_clicked()
{
    Remove_Goods(1);
    Refresh_UI();
    int current_store = good_store + add_num + reduce_num;
    if (current_store <= 0){
        current_store = 0;
    }
    emit sig_manage_goods(goods_type, goods_id,
                          goods_name, current_store);
}
