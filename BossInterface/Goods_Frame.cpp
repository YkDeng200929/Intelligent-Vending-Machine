#include "Goods_Frame.hpp"
#include "ui_Goods_Frame.h"

Goods_Frame::Goods_Frame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Goods_Frame)
{
    ui->setupUi(this);
}

Goods_Frame::~Goods_Frame()
{
    delete ui;
}
