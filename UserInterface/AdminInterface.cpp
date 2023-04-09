#include "AdminInterface.hpp"
#include "ui_AdminInterface.h"
#include <QDebug>

AdminInterface::AdminInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdminInterface),
    tcp_messenger(new NetManager(this))
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/res/BOSS.png"));
    setWindowTitle("Admin Interface");

    Init_Tabwidget();       // 初始化表格样式
    Init_Goods_Frame();     // 初始化商品控件
    Init_Fruit();           // 初始化水果控件
    Init_Drink();           // 初始化饮品控件
    Init_Other();           // 其他初始化
    Refresh_UI();           // 刷新UI界面
    tcp_messenger->Build_Connection();
}

AdminInterface::~AdminInterface()
{
    tcp_messenger->disconnect();
    delete ui;
}

void AdminInterface::Init_Tabwidget()
{
    // 饮品tab
    ui->tableWidget_drink->verticalHeader()->hide();// 隐藏行头
    ui->tableWidget_drink->horizontalHeader()->hide();// 隐藏列标题
    ui->tableWidget_drink->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑
}

void AdminInterface::Init_Goods_Frame()
{
    // 水果
    fruit_apple = new Goods_Admin(this);
    fruit_apple->Set_Good_Name("苹果");
    fruit_apple->Set_Good_Pic(":/res/fruit/apple.png");
    fruit_apple->Set_Goods_Type("水果");
    list_fruit.push_back(fruit_apple);

    fruit_banana = new Goods_Admin(this);
    fruit_banana->Set_Good_Name("香蕉");
    fruit_banana->Set_Goods_Type("水果");
    fruit_banana->Set_Good_Pic(":/res/fruit/banana.png");
    list_fruit.push_back(fruit_banana);

    fruit_blueberry = new Goods_Admin(this);
    fruit_blueberry->Set_Good_Name("蓝莓");
    fruit_blueberry->Set_Goods_Type("水果");
    fruit_blueberry->Set_Good_Pic(":/res/fruit/blueberry.png");
    list_fruit.push_back(fruit_blueberry);

    fruit_grape = new Goods_Admin(this);
    fruit_grape->Set_Good_Name("葡萄");
    fruit_grape->Set_Goods_Type("水果");
    fruit_grape->Set_Good_Pic(":/res/fruit/grape.png");
    list_fruit.push_back(fruit_grape);

    fruit_greengrape = new Goods_Admin(this);
    fruit_greengrape->Set_Good_Name("青提");
    fruit_greengrape->Set_Goods_Type("水果");
    fruit_greengrape->Set_Good_Pic(":/res/fruit/greengrape.png");
    list_fruit.push_back(fruit_greengrape);

    fruit_lemon = new Goods_Admin(this);
    fruit_lemon->Set_Good_Name("柠檬");
    fruit_apple->Set_Goods_Type("水果");
    fruit_lemon->Set_Good_Pic(":/res/fruit/lemon.png");
    list_fruit.push_back(fruit_lemon);

    fruit_mango = new Goods_Admin(this);
    fruit_mango->Set_Good_Name("芒果");
    fruit_mango->Set_Goods_Type("水果");
    fruit_mango->Set_Good_Pic(":/res/fruit/mango.png");
    list_fruit.push_back(fruit_mango);

    fruit_orange = new Goods_Admin(this);
    fruit_orange->Set_Good_Name("橘子");
    fruit_orange->Set_Goods_Type("水果");
    fruit_orange->Set_Good_Pic(":/res/fruit/orange.png");
    list_fruit.push_back(fruit_orange);

    fruit_peach = new Goods_Admin(this);
    fruit_peach->Set_Good_Name("桃子");
    fruit_peach->Set_Goods_Type("水果");
    fruit_peach->Set_Good_Pic(":/res/fruit/peach.png");
    list_fruit.push_back(fruit_peach);

    /***********/

    // 饮品
    drink_baisuishan = new Goods_Admin(this);
    drink_baisuishan->Set_Good_Name("百岁山");
    drink_baisuishan->Set_Goods_Type("饮品");
    drink_baisuishan->Set_Good_Pic(":/res/drink/baisuishan.png");
    list_drink.push_back(drink_baisuishan);

    drink_beinasong = new Goods_Admin(this);
    drink_beinasong->Set_Good_Name("贝纳颂");
    drink_beinasong->Set_Goods_Type("饮品");
    drink_beinasong->Set_Good_Pic(":/res/drink/beinasong.png");
    list_drink.push_back(drink_beinasong);

    drink_bingtangxueli = new Goods_Admin(this);
    drink_bingtangxueli->Set_Good_Name("冰糖雪梨");
    drink_bingtangxueli->Set_Goods_Type("饮品");
    drink_bingtangxueli->Set_Good_Pic(":/res/drink/bingtangxueli.png");
    list_drink.push_back(drink_bingtangxueli);

    drink_jiaduobao = new Goods_Admin(this);
    drink_jiaduobao->Set_Good_Name("加多宝");
    drink_jiaduobao->Set_Goods_Type("饮品");
    drink_jiaduobao->Set_Good_Pic(":/res/drink/jiaduobao.png");
    list_drink.push_back(drink_jiaduobao);

    drink_lankele = new Goods_Admin(this);
    drink_lankele->Set_Good_Name("蓝可乐");
    drink_lankele->Set_Goods_Type("饮品");
    drink_lankele->Set_Good_Pic(":/res/drink/lankele.png");
    list_drink.push_back(drink_lankele);

    drink_lvcha = new Goods_Admin(this);
    drink_lvcha->Set_Good_Name("绿茶");
    drink_lvcha->Set_Goods_Type("饮品");
    drink_lvcha->Set_Good_Pic(":/res/drink/lvcha.png");
    list_drink.push_back(drink_lvcha);

    drink_meinianda = new Goods_Admin(this);
    drink_meinianda->Set_Good_Name("美年达");
    drink_meinianda->Set_Goods_Type("饮品");
    drink_meinianda->Set_Good_Pic(":/res/drink/meinianda.png");
    list_drink.push_back(drink_meinianda);

    drink_nongfushanquan = new Goods_Admin(this);
    drink_nongfushanquan->Set_Good_Name("农夫山泉");
    drink_nongfushanquan->Set_Goods_Type("饮品");
    drink_nongfushanquan->Set_Good_Pic(":/res/drink/nongfushanquan.png");
    list_drink.push_back(drink_nongfushanquan);

    drink_quechaokafei = new Goods_Admin(this);
    drink_quechaokafei->Set_Good_Name("雀巢咖啡");
    drink_quechaokafei->Set_Goods_Type("饮品");
    drink_quechaokafei->Set_Good_Pic(":/res/drink/quechaokafei.png");
    list_drink.push_back(drink_quechaokafei);

    drink_wangzai = new Goods_Admin(this);
    drink_wangzai->Set_Good_Name("旺仔");
    drink_wangzai->Set_Goods_Type("饮品");
    drink_wangzai->Set_Good_Pic(":/res/drink/wangzai.png");
    list_drink.push_back(drink_wangzai);

    drink_xiaomingtongxue = new Goods_Admin(this);
    drink_xiaomingtongxue->Set_Good_Name("小茗同学");
    drink_xiaomingtongxue->Set_Goods_Type("饮品");
    drink_xiaomingtongxue->Set_Good_Pic(":/res/drink/xiaomingtongxue.png");
    list_drink.push_back(drink_xiaomingtongxue);

    drink_yanmai = new Goods_Admin(this);
    drink_yanmai->Set_Good_Name("燕麦");
    drink_yanmai->Set_Goods_Type("饮品");
    drink_yanmai->Set_Good_Pic(":/res/drink/yanmai.png");
    list_drink.push_back(drink_yanmai);

    drink_yibao = new Goods_Admin(this);
    drink_yibao->Set_Good_Name("怡宝");
    drink_yibao->Set_Goods_Type("饮品");
    drink_yibao->Set_Good_Pic(":/res/drink/yibao.png");
    list_drink.push_back(drink_yibao);
}

void AdminInterface::Refresh_UI()
{
    int index = 0;
    for (auto goods_drink : list_drink){
        int row = index / MAX_COL_ADMIN;
        int col = index % MAX_COL_ADMIN;
        goods_drink->Create_Good_Widget();
        goods_drink->Refresh_Store_Label();
        ui->tableWidget_drink->setCellWidget(row, col, goods_drink);
        ++index;
    }
    index = 0;
    for (auto goods_fruit : list_fruit){
        int row = index / MAX_COL_ADMIN;
        int col = index % MAX_COL_ADMIN;
        goods_fruit->Create_Good_Widget();
        goods_fruit->Refresh_Store_Label();
        ui->tableWidget_fruit->setCellWidget(row,col, goods_fruit);
        ++index;
    }
}

void AdminInterface::Sleep(unsigned int msec)
{
    QTime reachTime = QTime::currentTime().addMSecs(msec);
    //用while循环不断比对当前时间与我们设定的时间
    while(QTime::currentTime()<reachTime){
        //如果当前的系统时间尚未达到我们设定的时刻，就让Qt的应用程序类执行默认的处理，
        //以使程序仍处于响应状态。一旦到达了我们设定的时刻，就跳出该循环，继续执行后面的语句。
        QApplication::processEvents(QEventLoop::AllEvents,100);
    }
}

void AdminInterface::Init_Fruit()
{
    // 连接槽函数
    connect(fruit_apple, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods,
            Qt::QueuedConnection);
    connect(fruit_banana, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(fruit_blueberry, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(fruit_grape, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(fruit_greengrape, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(fruit_lemon, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(fruit_mango, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(fruit_orange, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(fruit_peach, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    //    connect(fruit_strawberry, &Goods_Admin::sig_manage_goods,
    //            this, &AdminInterface::slot_admin_manage_goods);
}

void AdminInterface::Init_Drink()
{
    connect(drink_baisuishan, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_beinasong, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_bingtangxueli, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_jiaduobao, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_lankele, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_lvcha, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_meinianda, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_nongfushanquan, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_quechaokafei, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_wangzai, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_xiaomingtongxue, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_yanmai, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
    connect(drink_yibao, &Goods_Admin::sig_manage_goods,
            this, &AdminInterface::slot_admin_manage_goods);
}

void AdminInterface::Init_Other()
{
    // 管理员界面成功获取所有商品信息
    connect(tcp_messenger, &NetManager::sig_get_all_goods_info_success,
            this, &AdminInterface::slot_get_all_goods_info_success);
    // 获取所有商品信息失败
    connect(tcp_messenger, &NetManager::sig_get_all_goods_info_fail,
            this, &AdminInterface::slot_get_all_goods_info_fail);
}


void AdminInterface::on_pushButton_quit_clicked()
{
    tcp_messenger->disconnect();
    emit sig_admin_interface_close();
}

void AdminInterface::slot_admin_manage_goods(QString goods_type, QString goods_id, QString goods_name, int current_store)
{
    Q_UNUSED(goods_type)
    Q_UNUSED(goods_id)

    if (map_manage_info.contains(goods_name)){
        map_manage_info[goods_name] = current_store;
    }else{
        map_manage_info.insert(goods_name, current_store);
    }
}

void AdminInterface::on_pushButton_ack_clicked()
{
    for(QMap<QString, int>::iterator it = map_manage_info.begin();\
        it != map_manage_info.end(); it++){
    }
    // 将补货信息发送给服务器
    tcp_messenger->Build_Connection();
    tcp_messenger->Send_Manage_Goods_Info(map_manage_info);
    for (auto drink : list_drink){
        drink->Manage_Ok();
    }
    for (auto fruit : list_fruit){
        fruit->Manage_Ok();
    }
    map_manage_info.clear();
    ui->label_warning->setText("管理商品成功!");
    Sleep(3000);
    ui->label_warning->setText("");
}

void AdminInterface::slot_get_all_goods_info_success(QJsonArray all_goods_info)
{
    // 获取成功
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
            }
        }
    }
    Refresh_UI();
}

void AdminInterface::slot_get_all_goods_info_fail()
{
    qDebug() << "管理员界面获取商品信息失败";
}

