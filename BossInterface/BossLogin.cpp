#include "BossLogin.hpp"
#include "ui_BossLogin.h"

#include <QMessageBox>
#include <QDebug>

BossLogin::BossLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BossLogin),
    netManager(new NetManager(this)),
    customPlot(new QCustomPlot)
{
    ui->setupUi(this);
    ui->lineEdit_login_passwd->setEchoMode(QLineEdit::Password);

    // 初始化表格样式
    Init_TableWidget();
    Start_Page();
    // 注册界面点击退出按钮返回登录界面
    connect(ui->pushButton_reg_quit, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_reg_quit_clicked()));
    // 点击生成授权码按钮时生成授权码
    connect(ui->pushButton_generate_code, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_generate_code_clicked()));
    // 查看柜机信息
    connect(ui->pushButton_check_machine, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_check_machine_clicked()));
    // 查看柜机界面返回到查看当前柜机界面
    connect(ui->pushButton_check_machine, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_back_clicked()));
    // 用户退出登录
    connect(ui->pushButton_logout, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_logout_clicked()));
    // 查看当前已注册柜机
    connect(ui->pushButton_check_machine, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_check_machine_clicked()));
    // 用户确认注册处理
    connect(ui->pushButton_reg_ack, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_reg_ack_clicked()));
    // 用户重置密码界面点击退出返回用户主界面
    connect(ui->pushButton_reset_back, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_reset_back_clicked()));
    // 修改用户密码
    connect(ui->pushButton_change_passwd, SIGNAL(clicked(bool)),
            this, SLOT(on_pushButton_change_passwd_clicked()));
    // 点击查看销售额
    connect(ui->pushButton_check_sale, SIGNAL(clicked()),
            this, SLOT(slot_check_sale_info));
    // 点击注册柜机
    connect(ui->pushButton_reg_machine, &QPushButton::click,
            this, &BossLogin::on_pushButton_reg_machine_clicked);
    // 用户登录成功
    connect(netManager, &NetManager::sig_login_success,
            this, &BossLogin::slot_login_success);
    // 用户登录失败
    connect(netManager, &NetManager::sig_login_fail,
            this, &BossLogin::slot_login_fail);
    // 用户注册成功
    connect(netManager, &NetManager::sig_reg_success,
            this, &BossLogin::slot_reg_success);
    // 用户注册失败
    connect(netManager, &NetManager::sig_reg_fail,
            this, &BossLogin::slot_reg_fail);
    // 点击确认注册柜机按钮
    connect(ui->pushButton_reg_machine_ack, &QPushButton::click,
            this, &BossLogin::on_pushButton_reg_machine_ack_clicked);
    // 注册柜机成功
    connect(netManager, &NetManager::sig_reg_machine_success,
            this, &BossLogin::slot_reg_machine_success);
    // 注册柜机失败
    connect(netManager, &NetManager::sig_reg_machine_fail,
            this, &BossLogin::slot_reg_machine_fail);
    // 成功获取到销售额信息
    connect(netManager, &NetManager::sig_get_sale_info_success,
            this, &BossLogin::slot_get_sale_success);
    // 获取销售额信息失败
    connect(netManager, &NetManager::sig_get_sale_info_fail,
            this, &BossLogin::slot_get_sale_fail);
    // 获取柜机id成功
    connect(netManager, &NetManager::sig_get_machine_info_success,
            this, &BossLogin::slot_get_machine_id_success);
    // 获取柜机id失败
    connect(netManager, &NetManager::sig_get_machine_info_fail,
            this, &BossLogin::slot_get_machine_id_fail);
    // 查看销售额界面返回主界面
    connect(ui->pushButton_chart_back, &QPushButton::click,
            this, &BossLogin::on_pushButton_chart_back_clicked);
    // 用户注销柜机成功
    connect(netManager, &NetManager::sig_remove_machine_ok,
            this, &BossLogin::slot_remove_machine_ok);
    // 用户注销柜机失败
    connect(netManager, &NetManager::sig_remove_machine_fail,
            this, &BossLogin::slot_remove_machine_fail);

}

BossLogin::~BossLogin()
{
    delete ui;
}

// 初始化表格样式
void BossLogin::Init_TableWidget()
{
    ui->tableWidget_drink_info->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_drink_info->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_drink_info->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->tableWidget_drink_info->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_drink_info->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_drink_info->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->tableWidget_drink_info->setColumnCount(1);

    ui->tableWidget_fruit_info->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_fruit_info->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_fruit_info->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->tableWidget_fruit_info->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_fruit_info->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_fruit_info->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->tableWidget_fruit_info->setColumnCount(1);
}

// 初始化开机界面
void BossLogin::Start_Page()
{
    ui->stackedWidget->setCurrentIndex(PAGE_LOGIN);
}

// 初始化折线图
void BossLogin::Init_Chart()
{
    QFont font, font_axis;
    font.setFamily("楷体");
    font.setPointSize(10);
    font_axis.setFamily("Cascadia Mono");
    font_axis.setPointSize(10);
    QPixmap bg_pix = QPixmap(":/res/default/bg.png");
    customPlot->setBackground(bg_pix);

    customPlot->addGraph();
    customPlot->graph(0)->setData(xData, yData);
    customPlot->graph(0)->setPen(QPen(QColor(123, 188, 164), 3)); // 折线颜色
    customPlot->graph(0)->setLineStyle(QCPGraph::lsLine); // 折线样式
    // 散点图样式
    customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 5));
    customPlot->xAxis->setLabel("日期(日)");
    customPlot->xAxis->setLabelFont(font);
    customPlot->xAxis->setTickLabelFont(font_axis);
    customPlot->xAxis->setTickLength(15);
    customPlot->yAxis->setLabel("销售额(元)");
    customPlot->yAxis->setLabelFont(font);
    customPlot->xAxis->setRange(1, 31);
    customPlot->yAxis->setRange(0, 1000);
    customPlot->yAxis->setTickLabelFont(font_axis);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(customPlot);
    ui->widget_chart->setLayout(layout);
    customPlot->replot();
}

// 用户点击登录
void BossLogin::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_login_useName->text();
    QString password = ui->lineEdit_login_passwd->text();

    if(username == "" ||password == ""){
        ui->lineEdit_login_useName->clear();
        ui->lineEdit_login_useName->setPlaceholderText("  用户名不能为空, 请重新输入");
        ui->lineEdit_login_passwd->clear();
        ui->lineEdit_login_passwd->setPlaceholderText("  密码不能为空, 请重新输入");
        return ;
    }

    netManager->Build_Connection("127.0.0.1", 8888);
    netManager->Log_In(username, password);
    netManager->Get_Message();
}

// 用户点击注册
void BossLogin::on_pushButton_reg_clicked()
{
    ui->lineEdit_reg_passwd->setPlaceholderText("  请输入密码");
    ui->lineEdit_reg_userName->setPlaceholderText("  请输入用户名");
    ui->lineEdit_reg_ackPasswd->setPlaceholderText("  请输入确认密码");
    ui->stackedWidget->setCurrentIndex(PAGE_REG);
}

// 用户从注册界面返回主界面
void BossLogin::on_pushButton_reg_quit_clicked()
{
    ui->lineEdit_reg_passwd->clear();
    ui->lineEdit_reg_userName->clear();
    ui->lineEdit_reg_ackPasswd->clear();
    ui->stackedWidget->setCurrentIndex(PAGE_LOGIN);
}

// 生成授权码
void BossLogin::on_pushButton_generate_code_clicked()
{
    QTime randtime;
    randtime = QTime::currentTime();
    qsrand(randtime.msec()+randtime.second()*1000); //以当前时间ms为随机种子
    int n = qrand() % 10000;    //产生10000以内的随机整数

    ui->label_admin_code->setText(QString::number(n));
    // 将授权码发送给服务器, 服务器再存储然后用于校验用户界面管理员
}

// 查看柜机信息
void BossLogin::on_pushButton_check_machine_clicked()
{
    netManager->Get_Message();
}

// 柜机查看界面返回转到查看当前柜机界面
void BossLogin::on_pushButton_manage_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_MAIN_INTERFACE);
}

// 查看柜机界面返回到查看当前柜机界面
void BossLogin::on_pushButton_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_MAIN_INTERFACE);
}

// 用户退出登录
void BossLogin::on_pushButton_logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_LOGIN);
    netManager->Disconnect();
}

// 用户确认注册处理
void BossLogin::on_pushButton_reg_ack_clicked()
{
    QString passwd = ui->lineEdit_reg_passwd->text();
    QString ack_passwd = ui->lineEdit_reg_ackPasswd->text();
    QString user_name = ui->lineEdit_reg_userName->text();

    if (passwd != ack_passwd){
        ui->lineEdit_reg_passwd->clear();
        ui->lineEdit_reg_ackPasswd->clear();
        ui->lineEdit_reg_passwd->setPlaceholderText("密码不一致, 请重新输入");
        ui->lineEdit_reg_ackPasswd->setPlaceholderText("密码不一致, 请重新输入");
    }else if (passwd.isEmpty() || ack_passwd.isEmpty() || user_name.isEmpty()){
        ui->lineEdit_reg_passwd->setPlaceholderText("请不要输入空内容");
        ui->lineEdit_reg_ackPasswd->setPlaceholderText("请不要输入空内容");
        ui->lineEdit_reg_userName->setPlaceholderText("请不要输入空内容");
    }else{
        netManager->Build_Connection("127.0.0.1", 8888);
        netManager->Reg_Account(user_name, passwd);
        netManager->Get_Message();
    }
}

// 重置密码界面返回管理主界面
void BossLogin::on_pushButton_reset_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_MAIN_INTERFACE);
}

// 修改用户账户密码
void BossLogin::on_pushButton_change_passwd_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_RESET_PASSWD);
}

// 注册柜机
void BossLogin::on_pushButton_reg_machine_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_REG_MACHINE);
}

// 用户登录成功
void BossLogin::slot_login_success()
{
    user_name = ui->lineEdit_login_useName->text();
    ui->lineEdit_login_passwd->clear();
    ui->lineEdit_login_useName->clear();
    ui->stackedWidget->setCurrentIndex(PAGE_MAIN_INTERFACE);
}

// 用户登录失败
void BossLogin::slot_login_fail()
{
    ui->lineEdit_login_passwd->clear();
    ui->lineEdit_login_useName->clear();
    ui->lineEdit_login_passwd->setPlaceholderText("  密码输入错误, 请重新输入");
    //netManager->Disconnect();
}

// 用户注册账户成功
void BossLogin::slot_reg_success()
{
    ui->lineEdit_reg_passwd->clear();
    ui->lineEdit_reg_userName->clear();
    ui->lineEdit_reg_ackPasswd->clear();
    ui->lineEdit_reg_passwd->setPlaceholderText("  注册成功");
    ui->lineEdit_reg_userName->setPlaceholderText("  注册成功");
    ui->lineEdit_reg_ackPasswd->setPlaceholderText("  注册成功");
    netManager->Disconnect();
}

// 用户注册账户失败
void BossLogin::slot_reg_fail()
{
    ui->lineEdit_reg_passwd->clear();
    ui->lineEdit_reg_userName->clear();
    ui->lineEdit_reg_ackPasswd->clear();
    ui->lineEdit_reg_passwd->setPlaceholderText("  注册失败, 该用户已存在");
    ui->lineEdit_reg_userName->setPlaceholderText("  注册失败, 该用户已存在");
    ui->lineEdit_reg_ackPasswd->setPlaceholderText("  注册失败, 该用户已存在");
    netManager->Disconnect();
}

void BossLogin::on_pushButton_reg_machine_ack_clicked()
{
    QString machine_id = ui->lineEdit_reg_machine_id->text();
    QString machine_address = ui->lineEdit_reg_machine_address->text();
    netManager->Reg_Machaine(user_name, machine_id, machine_address);
}

void BossLogin::slot_reg_machine_success()
{
    QString machine_id = ui->lineEdit_reg_machine_id->text();
    ui->lineEdit_reg_machine_id->setPlaceholderText("注册柜机成功");
    ui->lineEdit_reg_machine_address->setPlaceholderText("注册柜机成功");
    ui->lineEdit_reg_machine_id->clear();
    ui->lineEdit_reg_machine_address->clear();
}

void BossLogin::slot_reg_machine_fail()
{
    ui->lineEdit_reg_machine_id->setPlaceholderText("注册柜机成功");
    ui->lineEdit_reg_machine_address->setPlaceholderText("注册柜机成功");
    ui->lineEdit_reg_machine_id->clear();
    ui->lineEdit_reg_machine_address->clear();
}

void BossLogin::slot_check_machine_info()
{
}

// 成功获取到当月销售信息
void BossLogin::slot_get_sale_success(QJsonValue sale_info)
{
    xData.clear(), yData.clear();
    QJsonArray data_array = sale_info.toArray();
    for (int i = 0; i < data_array.size(); i++){
        QJsonObject id_obj = data_array[i].toObject();
        double id = id_obj[QString::number(i+1)].toDouble();
        xData << i+1; yData << id;
    }
    qDebug() << "获取销售额信息成功";
    Init_Chart();
    ui->stackedWidget->setCurrentIndex(PAGE_SALE_INFO);
}

// 获取销售额数据失败
void BossLogin::slot_get_sale_fail()
{
    qDebug() << "获取销售额信息失败";
}

// 点击查看销售额
void BossLogin::on_pushButton_check_sale_clicked()
{
    netManager->Get_Message();
}

// 成功获取到当前用户所有柜机id
void BossLogin::slot_get_machine_id_success(QJsonValue machine_id)
{
    QJsonArray data_array = machine_id.toArray();
    for (int i = 0; i < data_array.size(); i++){
        QJsonObject id_obj = data_array[i].toObject();
        QString id = id_obj["id"].toString();
        ui->comboBox->addItem(id);
    }
    qDebug() << "成功获取到柜机id" << machine_id;
    ui->stackedWidget->setCurrentIndex(PAGE_CHECK_MACHINE);
}

void BossLogin::slot_get_machine_id_fail()
{
    qDebug() << "获取柜机id失败";
    return ;
}

// 注册柜机界面返回主界面
void BossLogin::on_pushButton_reg_machine_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_MAIN_INTERFACE);
}

// 查看销售额界面返回主界面
void BossLogin::on_pushButton_chart_back_clicked()
{
    xData.clear(), yData.clear();
    ui->stackedWidget->setCurrentIndex(PAGE_MAIN_INTERFACE);
}

// 点击进入注销柜机界面
void BossLogin::on_pushButton_delete_machine_clicked()
{
    ui->lineEdit_logout_machine_id->clear();
    ui->lineEdit_logout_machine_address->clear();
    ui->lineEdit_logout_machine_id->setPlaceholderText("  请输入柜机编号");
    ui->lineEdit_logout_machine_address->setPlaceholderText("  请输入柜机所在地区");
    ui->stackedWidget->setCurrentIndex(PAGE_LOGOUT_MACHINE);
}

// 点击退出注销柜机界面
void BossLogin::on_pushButton_logout_machine_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(PAGE_MAIN_INTERFACE);
}

// 用户确认注销柜机
void BossLogin::on_pushButton_logout_machine_ack_clicked()
{
    QString machine_id   = ui->lineEdit_logout_machine_id->text();
    QString machine_addr = ui->lineEdit_logout_machine_address->text();
    netManager->Reg_Machaine(user_name, machine_id, machine_addr);
}

// 成功注销柜机处理
void BossLogin::slot_remove_machine_ok()
{
    ui->lineEdit_logout_machine_id->setPlaceholderText("  注销成功");
    ui->lineEdit_logout_machine_address->setPlaceholderText("  注销成功");
    ui->lineEdit_logout_machine_id->clear();
    ui->lineEdit_logout_machine_address->clear();
}

// 注销柜机失败处理
void BossLogin::slot_remove_machine_fail()
{
    ui->lineEdit_logout_machine_id->setPlaceholderText("  注销失败, 请重试!");
    ui->lineEdit_logout_machine_address->setPlaceholderText("  注销失败, 请重试!");
    ui->lineEdit_logout_machine_id->clear();
    ui->lineEdit_logout_machine_address->clear();
}
