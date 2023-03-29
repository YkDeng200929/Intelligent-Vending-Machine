#include "Trade_Charts.hpp"
#include "ui_Trade_Charts.h"

Trade_Charts::Trade_Charts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Trade_Charts)
{
    ui->setupUi(this);
}

Trade_Charts::~Trade_Charts()
{
    delete ui;
}
