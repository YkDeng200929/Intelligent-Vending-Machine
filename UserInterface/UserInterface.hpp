#ifndef USERINTERFACE_HPP
#define USERINTERFACE_HPP

#include <QMainWindow>
#include <QPushButton>
#include <QList>
#include <QTime>
#include <QTimer>
#include <QSerialPort>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include "NetManager.hpp"
#include "AdminInterface.hpp"
#include "AdminCode.hpp"
#include "Goods_Test.hpp"
#include "Serial_Assist.hpp"
#include "Cart_Goods.hpp"
// test
//#include "My_Thread.hpp"
//#include "Task.hpp"

#define MAX_COL 3 // tabview最大列号

// 页面角标
enum {
    PAGE_DRINK = 0, // 饮品展示界面
    PAGE_FRUIT,     // 水果展示界面
    PAGE_PAY_CODE,  // 支付二维码
    PAGE_CART,      // 购物车界面
};

QT_BEGIN_NAMESPACE
namespace Ui { class UserInterface; }
QT_END_NAMESPACE

class UserInterface : public QMainWindow
{
    Q_OBJECT
signals:
    // test
    void signalA();
    void signalB();
    // end test

public:
    UserInterface(QWidget *parent = nullptr);
    ~UserInterface();

    // 初始化与32连接
    void Build_Connection_32();
    // 刷新总金额标签
    void Refresh_Label_Total_Price();
    // 刷新UI界面
    void Refresh_UI(void);
    // 开机界面
    void Start_Page();
    // 初始化表格
    void Init_Tabwidget(void);
    // 展示现存货物给用户(从管理员界面读取信息)
    void List_Goods();
    // 初始化商品控件界面
    void New_Goods_Frame();
    // 从服务器拉取当前柜机商品信息后展示到主界面
    QByteArray Get_All_Goods_Info();
    // 延时函数
    void Sleep(unsigned int msec);
    // 切换到用户支付二维码界面
    void User_Pay();
    // 刷新购物车界面
    void Refresh_Shop();
    // 支付成功, 刷新库存
    void Refresh_Store();
    // 用户支付成功后重置购物车以及添加商品信息
    void Pay_Success();

private slots:
    // 查看购物车
    void on_pushButton_checkChart_clicked();
    // 点击进入管理员模式
    void on_pushButton_admin_clicked();
    // 自定义槽: 获取实时时间
    void slot_Get_Time(void);
    // 回退到主界面时的处理, 管理员界面退出时传输QList容器给管理员界面, 切换容器中的界面状态并展示给主界面
    void slot_Back_User_Interface(void);
    // 授权码输入正确时的处理
    void slot_Admin_Code_Correct(void);
    // 初始化广告
    void slot_Play_Ads(void);
    // 饮品控件点击
    void on_pushButton_drink_clicked();
    // 水果控件点击
    void on_pushButton_fruit_clicked();
    // 自定义槽: 添加到购物车
    void slot_Add_To_Cart(QString goods_name, QString id,
                               int add_num, double total_price);
    // 自定义槽: 获取温度信息
    double slot_Get_Temperature();
    // 点击确认支付, 成功后点击转
    void on_pushButton_payment_clicked();
    // 用户取消支付时返回购物车界面
    void on_pushButton_code_back_clicked();

private:
    Ui::UserInterface *ui;

    // 授权码输入界面
    AdminCode *adminCode;
    // 管理员主界面
    AdminInterface *adminInterface;
    // 网络通信
    NetManager *netManager;
    // 计时器, 展示时间
    QTimer *timer;
    // 计时器, 轮播广告
    QTimer *timer_ads;
    // 饮品容器
    QList<Goods_Test *> list_drink;
    // 水果容器
    QList<Goods_Test *> list_fruit;
    // 购物车商品容器
    QList<Cart_Goods *> list_cart;

    // 水果
    Goods_Test *fruit_apple;
    Goods_Test *fruit_banana;
    Goods_Test *fruit_blueberry;
    Goods_Test *fruit_grape;
    Goods_Test *fruit_greengrape;
    Goods_Test *fruit_lemon;
    Goods_Test *fruit_mango;
    Goods_Test *fruit_orange;
    Goods_Test *fruit_peach;
    Goods_Test *fruit_strawberry;

    // 饮品
    Goods_Test *drink_baisuishan;
    Goods_Test *drink_beinasong;
    Goods_Test *drink_bingtangxueli;
    Goods_Test *drink_jiaduobao;
    Goods_Test *drink_lankele;
    Goods_Test *drink_lvcha;
    Goods_Test *drink_meinianda;
    Goods_Test *drink_nongfushanquan;
    Goods_Test *drink_quechaokafei;
    Goods_Test *drink_wangzai;
    Goods_Test *drink_xiaomingtongxue;
    Goods_Test *drink_yanmai;
    Goods_Test *drink_yibao;

    // 商品总金额
    double total_price = 0;
    // 判断是否在购物车界面
    bool in_cart = false;
    // 串口助手
    Serial_Assist *serial_assist;

    // test
//    My_Thread *thread;
//    Task *task;
    // end test
};
#endif // USERINTERFACE_HPP
