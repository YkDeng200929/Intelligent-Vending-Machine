#include "UserInterface.hpp"
#include "ui_UserInterface.h"

#include <QDebug>
#include <QSizePolicy>

enum{
    ADS1 = 1,
    ADS2,
    ADS3,
};

UserInterface::UserInterface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserInterface),
      adminCode(new AdminCode),
      adminInterface(new AdminInterface),
      netManager(new NetManager(this)),
      timer(new QTimer(this)),
      timer_ads(new QTimer(this)),
      fresh_cart(new QTimer(this)),
      serial_assist(new Serial_Assist(this)),
      thread(new My_Thread(this))
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/shop2.png"));
    setWindowTitle("UserInterface");

    /**初始化******************************************/
    timer->start(1000);
    timer_ads->start(3000);
    fresh_cart->start(800);
    Start_Page();
    Init_Tabwidget();
    Init_Ads();                 // 初始化广告
    Init_Real_Time_Temp();      // 初始化实时时间
    New_Goods_Frame();          // 初始化商品控件
    Init_Drink();               // 初始化饮品与购物车的连接
    Init_Fruit();               // 初始化水果与购物车的连接
    Init_Change_Page();         // 初始化界面跳转
    Init_Other();               // 其他初始化
    Get_All_Goods_Info();       // 获取所有商品信息
    Build_Connection_32();      // 与32串口通信
    Refresh_UI();
    /*************************************************/
}

UserInterface::~UserInterface()
{
    netManager->disconnect();
    delete adminInterface;
    delete adminCode;
    delete ui;
}

void UserInterface::Build_Connection_32()
{
    serial_assist->Build_Connection();
}

// 刷新购物车总金额标签
void UserInterface::Refresh_Label_Total_Price()
{
    if (ui->stackedWidget_userList->currentIndex() == PAGE_CART){
        total_price = 0;
        if (list_cart.isEmpty()){
            ui->label_total_price->setText(QString::number(total_price));
            return ;
        }
        for (auto price : list_cart){
            total_price += price->Get_Total_Price();
        }
        ui->label_total_price->setText(QString::number(total_price));
    }else{
        return ;
    }
}

// 刷新UI界面
void UserInterface::Refresh_UI()
{
    if (ui->stackedWidget_userList->currentIndex() == PAGE_CART){
        Refresh_Label_Total_Price();
        ui->label_head_total_price->setText("总金额");
        ui->pushButton_checkChart->setText("返回");
    }else{
        total_price = 0;
        ui->label_total_price->setText("");
        ui->label_head_total_price->setText("");
        ui->pushButton_checkChart->setText("查看购物车");
    }
    for (auto drink : list_drink){
        drink->Refresh_User_UI();
    }
    for (auto fruit : list_fruit){
        fruit->Refresh_User_UI();
    }
    Get_All_Goods_Info();
}

// 初始化开机界面
void UserInterface::Start_Page()
{
    netManager->Build_Connection();
    ui->stackedWidget_userList->setCurrentIndex(PAGE_DRINK);
}

// 初始化表格样式
void UserInterface::Init_Tabwidget()
{
    ui->tableWidget_fruit->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_fruit->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_fruit->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->tableWidget_drink->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_drink->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_drink->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
    ui->tableWidget_cart->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_cart->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_cart->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
}

// 槽: 获取实时时间
void UserInterface::slot_Get_Time()
{
    static int sig = 0;
    QTime real_time = QTime::currentTime();
    QString str_time_min  = real_time.toString("mm");
    QString str_time_hour = real_time.toString("hh");

    ui->label_time_hour->setText(str_time_hour);
    ui->label_time_min->setText(str_time_min);
    if (sig){
        ui->label_time_dot->setText(" ");
        sig = 0;
    }else{
        ui->label_time_dot->setText(":");
        sig = 1;
    }
}

// 槽: 返回用户主界面
void UserInterface::slot_Back_User_Interface()
{
    adminInterface->close();
    Get_All_Goods_Info();
}

// 管理员授权码输入正确
void UserInterface::slot_Admin_Code_Correct()
{
    adminCode->close();
    adminInterface->show();
}

// 轮播广告
void UserInterface::slot_Play_Ads()
{
    static int sig = ADS1;
    QSize picSize(315, 581);
    switch (sig) {
    case ADS1:{
        QPixmap ads1 = QPixmap(":/res/ads/ads1.png");
        ads1.scaled(picSize, Qt::KeepAspectRatio);
        ui->label_ads->setPixmap(QPixmap(ads1));
        ++sig;
        break;
    }
    case ADS2:{
        QPixmap ads2 = QPixmap(":/res/ads/ads2.png");
        ads2.scaled(picSize, Qt::KeepAspectRatio);
        ui->label_ads->setPixmap(QPixmap(ads2));
        ++sig;
        break;
    }
    case ADS3:{
        QPixmap ads3 = QPixmap(":/res/ads/ads3.png");
        ads3.scaled(picSize, Qt::KeepAspectRatio);
        ui->label_ads->setPixmap(QPixmap(ads3));
        sig = ADS1;
        break;
    }
    default: break;
    }
}

// 初始化商品控件对象
void UserInterface::New_Goods_Frame()
{
    // 水果
    fruit_apple = new Goods_Test(this);
    fruit_apple->Set_Good_Name("苹果");
    fruit_apple->Set_Good_Price(5.5);
    fruit_apple->Set_Good_Pic(":/res/fruit/apple.png");
    list_fruit.push_back(fruit_apple);

    fruit_banana = new Goods_Test(this);
    fruit_banana->Set_Good_Name("香蕉");
    fruit_banana->Set_Good_Price(6.7);
    fruit_banana->Set_Good_Pic(":/res/fruit/banana.png");
    list_fruit.push_back(fruit_banana);

    fruit_blueberry = new Goods_Test(this);
    fruit_blueberry->Set_Good_Name("蓝莓");
    fruit_blueberry->Set_Good_Price(9.9);
    fruit_blueberry->Set_Good_Pic(":/res/fruit/blueberry.png");
    list_fruit.push_back(fruit_blueberry);

    fruit_grape = new Goods_Test(this);
    fruit_grape->Set_Good_Name("葡萄");
    fruit_grape->Set_Good_Price(9.9);
    fruit_grape->Set_Good_Pic(":/res/fruit/grape.png");
    list_fruit.push_back(fruit_grape);

    fruit_greengrape = new Goods_Test(this);
    fruit_greengrape->Set_Good_Name("青提");
    fruit_greengrape->Set_Good_Price(9.9);
    fruit_greengrape->Set_Good_Pic(":/res/fruit/greengrape.png");
    list_fruit.push_back(fruit_greengrape);

    fruit_lemon = new Goods_Test(this);
    fruit_lemon->Set_Good_Name("柠檬");
    fruit_lemon->Set_Good_Price(9.9);
    fruit_lemon->Set_Good_Pic(":/res/fruit/lemon.png");
    list_fruit.push_back(fruit_lemon);

    fruit_mango = new Goods_Test(this);
    fruit_mango->Set_Good_Name("芒果");
    fruit_mango->Set_Good_Price(9.9);
    fruit_mango->Set_Good_Pic(":/res/fruit/mango.png");
    list_fruit.push_back(fruit_mango);

    fruit_orange = new Goods_Test(this);
    fruit_orange->Set_Good_Name("橘子");
    fruit_orange->Set_Good_Price(9.9);
    fruit_orange->Set_Good_Pic(":/res/fruit/orange.png");
    list_fruit.push_back(fruit_orange);

    fruit_peach = new Goods_Test(this);
    fruit_peach->Set_Good_Name("桃子");
    fruit_peach->Set_Good_Price(9.9);
    fruit_peach->Set_Good_Pic(":/res/fruit/peach.png");
    list_fruit.push_back(fruit_peach);

    /***********/

    // 饮品
    drink_baisuishan = new Goods_Test(this);
    drink_baisuishan->Set_Good_Name("百岁山");
    drink_baisuishan->Set_Good_Price(4);
    drink_baisuishan->Set_Good_Pic(":/res/drink/baisuishan.png");
    list_drink.push_back(drink_baisuishan);

    drink_beinasong = new Goods_Test(this);
    drink_beinasong->Set_Good_Name("贝纳颂");
    drink_beinasong->Set_Good_Price(5);
    drink_beinasong->Set_Good_Pic(":/res/drink/beinasong.png");
    list_drink.push_back(drink_beinasong);

    drink_bingtangxueli = new Goods_Test(this);
    drink_bingtangxueli->Set_Good_Name("冰糖雪梨");
    drink_bingtangxueli->Set_Good_Price(9.9);
    drink_bingtangxueli->Set_Good_Pic(":/res/drink/bingtangxueli.png");
    list_drink.push_back(drink_bingtangxueli);

    drink_jiaduobao = new Goods_Test(this);
    drink_jiaduobao->Set_Good_Name("加多宝");
    drink_jiaduobao->Set_Good_Price(5);
    drink_jiaduobao->Set_Good_Pic(":/res/drink/jiaduobao.png");
    list_drink.push_back(drink_jiaduobao);

    drink_lankele = new Goods_Test(this);
    drink_lankele->Set_Good_Name("蓝可乐");
    drink_lankele->Set_Good_Price(9);
    drink_lankele->Set_Good_Pic(":/res/drink/lankele.png");
    list_drink.push_back(drink_lankele);

    drink_lvcha = new Goods_Test(this);
    drink_lvcha->Set_Good_Name("绿茶");
    drink_lvcha->Set_Good_Price(3);
    drink_lvcha->Set_Good_Pic(":/res/drink/lvcha.png");
    list_drink.push_back(drink_lvcha);

    drink_meinianda = new Goods_Test(this);
    drink_meinianda->Set_Good_Name("美年达");
    drink_meinianda->Set_Good_Price(4);
    drink_meinianda->Set_Good_Pic(":/res/drink/meinianda.png");
    list_drink.push_back(drink_meinianda);

    drink_nongfushanquan = new Goods_Test(this);
    drink_nongfushanquan->Set_Good_Name("农夫山泉");
    drink_nongfushanquan->Set_Good_Price(2);
    drink_nongfushanquan->Set_Good_Pic(":/res/drink/nongfushanquan.png");
    list_drink.push_back(drink_nongfushanquan);

    drink_quechaokafei = new Goods_Test(this);
    drink_quechaokafei->Set_Good_Name("雀巢咖啡");
    drink_quechaokafei->Set_Good_Price(9);
    drink_quechaokafei->Set_Good_Pic(":/res/drink/quechaokafei.png");
    list_drink.push_back(drink_quechaokafei);

    drink_wangzai = new Goods_Test(this);
    drink_wangzai->Set_Good_Name("旺仔");
    drink_wangzai->Set_Good_Price(6);
    drink_wangzai->Set_Good_Pic(":/res/drink/wangzai.png");
    list_drink.push_back(drink_wangzai);

    drink_xiaomingtongxue = new Goods_Test(this);
    drink_xiaomingtongxue->Set_Good_Name("小茗同学");
    drink_xiaomingtongxue->Set_Good_Price(4);
    drink_xiaomingtongxue->Set_Good_Pic(":/res/drink/xiaomingtongxue.png");
    list_drink.push_back(drink_xiaomingtongxue);

    drink_yanmai = new Goods_Test(this);
    drink_yanmai->Set_Good_Name("燕麦");
    drink_yanmai->Set_Good_Price(3);
    drink_yanmai->Set_Good_Pic(":/res/drink/yanmai.png");
    list_drink.push_back(drink_yanmai);

    drink_yibao = new Goods_Test(this);
    drink_yibao->Set_Good_Name("怡宝");
    drink_yibao->Set_Good_Price(2);
    drink_yibao->Set_Good_Pic(":/res/drink/yibao.png");
    list_drink.push_back(drink_yibao);
}

// 获取所有商品信息
QByteArray UserInterface::Get_All_Goods_Info()
{
    int index = 0;
    for (auto goods_drink : list_drink){
        goods_drink->Change_Label_Add_Cart();
        goods_drink->Create_Good_Widget();
        ui->tableWidget_drink->setCellWidget(index/MAX_COL,
                                             index%MAX_COL, goods_drink);
        ++index;
    }
    index = 0;
    for (auto goods_fruit : list_fruit){
        goods_fruit->Change_Label_Add_Cart();
        goods_fruit->Create_Good_Widget();
        ui->tableWidget_fruit->setCellWidget(index/MAX_COL,
                                             index%MAX_COL, goods_fruit);
        ++index;
    }
    return 0;
}

// 用户支付二维码
void UserInterface::User_Pay()
{
    ui->stackedWidget_userList->setCurrentIndex(PAGE_PAY_CODE);
}

// 刷新购物车界面
void UserInterface::Refresh_Shop()
{
    int index = 0;
    if (list_cart.isEmpty()){
        ui->tableWidget_cart->clear();
        return ;
    }

    for (auto shop_info : list_cart){
        shop_info->Create_goods_Widget();
        ui->tableWidget_cart->insertRow(ui->tableWidget_cart->rowCount());
        ui->tableWidget_cart->setCellWidget(index++, 0, shop_info);
    }
    Refresh_Label_Total_Price();
}

// 刷新库存
void UserInterface::Refresh_Store()
{
    for (auto drink : list_drink){
        int org_store = drink->Get_Good_Store();
        int buy_num   = drink->Get_Buy_Num();
        drink->Set_Good_Store(org_store - buy_num);
        drink->Refresh_User_UI();
    }
    for (auto fruit : list_fruit){
        int org_store = fruit->Get_Good_Store();
        int buy_num   = fruit->Get_Buy_Num();
        fruit->Set_Good_Store(org_store - buy_num);
        fruit->Refresh_User_UI();
    }
}

// 支付成功
void UserInterface::Pay_Success()
{
    Refresh_Store();
    list_cart.clear();
    for (auto clear : list_drink){
        clear->Clear_Pay_Ok();
    }
    for (auto clear : list_fruit){
        clear->Clear_Pay_Ok();
    }
    ui->tableWidget_cart->clear();
    Refresh_Label_Total_Price();
    Refresh_Shop();
    ui->pushButton_clear->hide();
    ui->stackedWidget_userList->setCurrentIndex(PAGE_DRINK);
    Refresh_UI();
}

// 初始化广告
void UserInterface::Init_Ads()
{
    QSize picSize(315, 581);
    ui->label_ads->setScaledContents(true);
    QPixmap ads3 = QPixmap(":/res/ads/ads3.png");
    ads3.scaled(picSize, Qt::KeepAspectRatio);
    ui->label_ads->setPixmap(QPixmap(ads3));
    // 轮播广告
    connect(timer_ads, SIGNAL(timeout()), this, SLOT(slot_Play_Ads()));
}

// 初始化饮品控件
void UserInterface::Init_Drink()
{
    connect(drink_lvcha, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_yibao, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_yanmai, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_lankele, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_wangzai, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_beinasong, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_jiaduobao, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_meinianda, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_baisuishan, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_quechaokafei, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_bingtangxueli, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_nongfushanquan, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(drink_xiaomingtongxue, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
}

// 初始化水果与购物车的连接
void UserInterface::Init_Fruit()
{
    // 连接商品控件添加购物车按钮
    connect(fruit_apple, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_grape, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_greengrape, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_lemon, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_mango, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_peach, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_orange, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_blueberry, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
    connect(fruit_banana, &Goods_Test::sig_user_add_goods,
            this, &UserInterface::slot_Add_To_Cart);
}

// 获取实时时间与温度
void UserInterface::Init_Real_Time_Temp()
{
    // 获取实时时间
    connect(timer,SIGNAL(timeout()), this, SLOT(slot_Get_Time()));
    // 获取实时温度
    connect(timer, SIGNAL(timeout()), this, SLOT(slot_Get_Temperature()));
}

// 初始化界面跳转
void UserInterface::Init_Change_Page()
{
    // 点击查看购物车按钮, 弹出购物车界面
    connect(ui->pushButton_checkChart, SIGNAL(click),
            this, SLOT(on_pushButton_checkChart_clicked()));
    // 点击管理员界面菜单, 弹出输入授权码界面
    connect(ui->pushButton_admin, SIGNAL(click),
            this, SLOT(on_pushButton_admin_clicked));
    // 授权码输入正确时的处理
    connect(adminCode, SIGNAL(sig_admin_code_correct()),
            this, SLOT(slot_Admin_Code_Correct()));
    // 管理员授权码输入界面退出时的处理
    connect(adminCode, SIGNAL(sig_admin_code_interface_close()),
            this, SLOT(slot_Back_User_Interface()));
    // 点击饮品切换到饮品界面
    connect(ui->pushButton_drink, SIGNAL(click),
            this, SLOT(on_pushButton_drink_clicked()));
    // 点击水果按钮切换到水果界面
    connect(ui->pushButton_fruit, SIGNAL(click),
            this, SLOT(on_pushButton_fruit_clicked()));
    // 管理员界面退出
    connect(adminInterface, &AdminInterface::sig_admin_interface_close,
            this, &UserInterface::slot_Back_User_Interface);
    // 用户取消支付时返回购物车界面
    connect(ui->pushButton_code_back, &QPushButton::click,
            this, &UserInterface::on_pushButton_code_back_clicked);
}

// 其他初始化
void UserInterface::Init_Other()
{
    // 用户支付成功, 弹出商品
    connect(ui->pushButton_payment, SIGNAL(click), this,
            SLOT(on_pushButton_payment_clicked));
    // 成功获取所有商品信息
    connect(netManager, &NetManager::sig_get_all_goods_info_success,
            this, &UserInterface::slot_get_all_goods_info_success);
    // 获取所有商品信息失败
    connect(netManager, &NetManager::sig_get_all_goods_info_fail,
            this, &UserInterface::slot_get_all_goods_info_fail);
    // 用户支付成功
    connect(netManager, &NetManager::sig_user_pay_success,
            this, &UserInterface::slot_user_pay_success);
    // 用户支付失败
    connect(netManager, &NetManager::sig_user_pay_fail,
            this, &UserInterface::slot_user_pay_fail);
    // 获取支付二维码成功
    connect(netManager, &NetManager::sig_get_pay_code_ok,
            this, &UserInterface::slot_get_pay_code_ok);
    // 获取支付二维码失败
    connect(netManager, &NetManager::sig_get_pay_code_fail,
            this, &UserInterface::slot_get_pay_code_fail);
    ui->pushButton_clear->hide();
}

void UserInterface::Generate_Pay_Code(QString uri)
{
    QRcode *code = QRcode_encodeString(uri.toUtf8().constData(), 0, QR_ECLEVEL_L, QR_MODE_8, 1);
    QImage qrImage = QImage(code->width + 8, code->width + 8, QImage::Format_RGB32);

    qrImage.fill(0xffffff);
    unsigned char *p = code->data;

    for (int y = 0; y < code->width; y++){
        for (int x = 0; x < code->width; x++){
            qrImage.setPixel(x + 4, y + 4, ((*p & 1) ? 0x0 : 0xffffff));
            p++;
        }
    }

    QRcode_free(code);
    QImage qrAddrImage = QImage(300, 300 + 10, QImage::Format_RGB32);
    qrAddrImage.fill(0xffffff);
    QPainter painter(&qrAddrImage);
    painter.drawImage(0, 0, qrImage.scaled(300, 300));
    QFont font("宋体", 10, QFont::Bold, true);
    font.setPixelSize(12);
    painter.setFont(font);
    QRect paddedRect = qrAddrImage.rect();
    paddedRect.setHeight(300);
//    painter.drawText(paddedRect, Qt::AlignBottom | Qt::AlignCenter,uri);
    painter.end();
    ui->label_code_pic->setPixmap(QPixmap::fromImage(qrAddrImage));
}

// 槽:点击查看购物车按钮跳转到购物车界面
void UserInterface::on_pushButton_checkChart_clicked()
{
    if (ui->stackedWidget_userList->currentIndex() != PAGE_CART){
        Refresh_Shop();
        ui->stackedWidget_userList->setCurrentIndex(PAGE_CART);
        Refresh_UI();
        ui->pushButton_clear->show();
        Refresh_Label_Total_Price();
    }else{
        ui->stackedWidget_userList->setCurrentIndex(PAGE_DRINK);
        Refresh_UI();
        ui->pushButton_clear->hide();
    }
}

// 点击进入管理员按钮时弹出授权码输入键盘
void UserInterface::on_pushButton_admin_clicked()
{
    adminCode->show();
}

// 槽: 点击饮品按钮时跳转到饮品界面
void UserInterface::on_pushButton_drink_clicked()
{
    ui->stackedWidget_userList->setCurrentIndex(PAGE_DRINK);
    Refresh_UI();
    ui->pushButton_clear->hide();
}

// 槽: 点击水果按钮时跳转到水果界面
void UserInterface::on_pushButton_fruit_clicked()
{
    ui->stackedWidget_userList->setCurrentIndex(PAGE_FRUIT);
    Refresh_UI();
    ui->pushButton_clear->hide();
}

// 槽: 测试点击添加到购物车按钮时的效果
void UserInterface::slot_Add_To_Cart(QString goods_name, QString id,
                                     int add_num, double total_price)
{
    Q_UNUSED(id)
    //    Q_UNUSED(add_num)

    for (auto cart_info : list_cart){
        if (cart_info->Get_Good_Name() == goods_name){
            cart_info->Refresh_Total_Price(total_price, add_num);
            return ;
        }
    }
    for (auto drink_info : list_drink){
        if (drink_info->Get_Good_Name() == goods_name){
            QString name = drink_info->Get_Good_Name();
            QString pic_path = drink_info->Get_Good_Pic();
            double total_price = drink_info->Get_Total_Price();
            QString goods_id = drink_info->Get_Goods_Id();
            Cart_Goods *new_goods = new Cart_Goods;
            new_goods->Set_Good_Name(name);
            new_goods->Set_Good_Pic(pic_path);
            new_goods->Set_Good_Price(total_price);
            list_cart << new_goods;
        }
    }
    for (auto fruit_info : list_fruit){
        if (fruit_info->Get_Good_Name() == goods_name){
            QString name = fruit_info->Get_Good_Name();
            QString pic_path = fruit_info->Get_Good_Pic();
            double total_price = fruit_info->Get_Total_Price();
            QString goods_id = fruit_info->Get_Goods_Id();
            Cart_Goods *new_goods = new Cart_Goods;
            new_goods->Set_Good_Name(name);
            new_goods->Set_Good_Pic(pic_path);
            new_goods->Set_Good_Price(total_price);
            list_cart << new_goods;
        }
    }
    Refresh_UI();
    if (ui->stackedWidget_userList->currentIndex() == PAGE_CART){
        Refresh_Label_Total_Price();
    }
}

// 槽: 获取实时温度信息
double UserInterface::slot_Get_Temperature()
{
    // 定时器
    // 通过串口读取32温度信息
//    QString temp_data = "ff 03 05 01 00 00 aa bb";
//    QByteArray get_temp = serial_assist->QString2Hex(temp_data);
//    serial_assist->Send_Data(get_temp);
//    QByteArray temp = serial_assist->Recv_Data();
    //    ui->label_temp->setText(QString::number(temp.toInt()));
    ui->label_temp->setText("24℃");
    return 0;
}

// 用户支付成功, 弹出商品
void UserInterface::on_pushButton_payment_clicked()
{
    User_Pay();
    ui->label_pay_text->setText("请确认支付");
    ui->label_count_down->setText("");

    /**将购物车的购买信息发送给服务器****************************/
    QJsonDocument pay_info;
    QJsonObject pay_obj;
    QJsonArray pay_goods_info;

    for (auto cart_info : list_cart){
        QJsonArray obj_array;
        QJsonObject obj_name;
        obj_name.insert("key_goods_name", cart_info->Get_Good_Name());
        QJsonObject obj_added_num;
        obj_added_num.insert("key_added_num", cart_info->Get_Added_Num());
        QJsonObject obj_total_price;
        obj_total_price.insert("key_total_price", cart_info->Get_Total_Price());
        obj_array << obj_name << obj_added_num << obj_total_price;
        pay_goods_info << obj_array;
    }
    pay_obj.insert("key_data", pay_goods_info);
    pay_obj.insert("key_func", MACRO_USER_PAY);
    pay_obj.insert("key_sig", MACRO_CHAT_SERVER);
    pay_obj.insert("key_head", MACRO_REQ_PACK);
    pay_info.setObject(pay_obj);
    netManager->Send_Pay_Message(pay_info);
    netManager->Get_Message();
    /***********************************************************/
}

// 支付界面返回
void UserInterface::on_pushButton_code_back_clicked()
{
    Refresh_Label_Total_Price();
    ui->stackedWidget_userList->setCurrentIndex(PAGE_CART);
    Refresh_UI();
}

// 用户清空购物车
void UserInterface::on_pushButton_clear_clicked()
{
    if (ui->stackedWidget_userList->currentIndex() == PAGE_CART){
        for (auto find : list_cart){
            total_price -= find->Get_Good_Price();
            for (auto drink : list_drink){
                if (drink->Get_Good_Name() == find->Get_Good_Name()){
                    drink->Clear_Buy_Num();
                }
            }
            for (auto fruit : list_fruit){
                if (fruit->Get_Good_Name() == find->Get_Good_Name()){
                    fruit->Clear_Buy_Num();
                }
            }
            list_cart.removeOne(find);
            list_cart.clear();
            Refresh_Shop();
            Refresh_Label_Total_Price();
        }
    }else{
        return ;
    }
}

// 成功获取所有商品信息
void UserInterface::slot_get_all_goods_info_success(QJsonArray all_goods_info)
{
    for (auto drink : list_drink){
        for (int i = 0; i < all_goods_info.size(); i++){
            QJsonObject data_info = all_goods_info[i].toObject();
            QString name = drink->Get_Good_Name();
            int ret = data_info[name].toInt();
            if (!ret){
                continue;
            }else{
                int store = ret;
                drink->Set_Good_Store(store);
                drink->Refresh_User_UI();
            }
        }
    }
    for (auto fruit : list_fruit){
        for (int i = 0; i < all_goods_info.size(); i++){
            QJsonObject data_info = all_goods_info[i].toObject();
            QString name = fruit->Get_Good_Name();
            int ret = data_info[name].toInt();
            if (!ret){
                continue;
            }else{
                int store = ret;
                fruit->Set_Good_Store(store);
                fruit->Refresh_User_UI();
            }
        }
    }
    Get_All_Goods_Info();
}

// 获取所有商品信息失败
void UserInterface::slot_get_all_goods_info_fail()
{
    qDebug() << "获取所有商品信息失败";
}

// 支付成功
void UserInterface::slot_user_pay_success()
{
    qDebug() << "用户支付成功";
    // 如果成功, 控制出货
    serial_assist->Build_Connection();
    ui->label_pay_text->setText("支付成功, 正在出货");
    serial_assist->Pay_Success();
    ui->label_count_down->setText("还有3秒返回主界面");
    serial_assist->Sleep(1500);
    ui->label_count_down->setText("还有2秒返回主界面");
    serial_assist->Sleep(1500);
    ui->label_count_down->setText("还有1秒返回主界面");
    serial_assist->Sleep(1500);
    Pay_Success();
}

// 支付失败
void UserInterface::slot_user_pay_fail()
{
    qDebug() << "用户支付失败";
    ui->label_pay_text->setText("支付失败, 请重试");
    ui->label_count_down->setText("");
    Refresh_Store();
}

// 成功获取到支付二维码
void UserInterface::slot_get_pay_code_ok(QJsonValue pay_code)
{
    qDebug() << "成功获取到支付二维码";
    Generate_Pay_Code(pay_code.toString());
}

void UserInterface::slot_get_pay_code_fail(QJsonValue pay_code)
{
    qDebug() << "获取支付二维码失败";
    Generate_Pay_Code(pay_code.toString());
}
