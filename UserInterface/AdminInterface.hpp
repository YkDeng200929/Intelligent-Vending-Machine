#ifndef ADMININTERFACE_HPP
#define ADMININTERFACE_HPP

#include <QWidget>
#include <QString>
#include <QMap>
#include <QList>
#include <QTime>
#include <QTimer>
#include "Goods_Admin.hpp"
#include "Goods_Test.hpp"
#include "NetManager.hpp"

#define MAX_COL_ADMIN 5

namespace Ui {
class AdminInterface;
}

class AdminInterface : public QWidget
{
    Q_OBJECT


signals:
    // 管理员界面退出
    void sig_admin_interface_close(void);


public:
    explicit AdminInterface(QWidget *parent = nullptr);
    ~AdminInterface();

    // 初始化表格样式
    void Init_Tabwidget(void);
    // 初始化商品控件
    void Init_Goods_Frame(void);
    // 刷新主界面UI
    void Refresh_UI(void);
    // 延时函数
    void Sleep(unsigned int msec);

private slots:
    // 管理员界面退出
    void on_pushButton_quit_clicked();
    // 自定义槽: 管理员管理商品处理
    void slot_admin_manage_goods(QString goods_type, QString goods_id,
                                 QString goods_name, int current_store);


    void on_pushButton_ack_clicked();

private:
    Ui::AdminInterface *ui;

    // 网络通信助手
    NetManager *tcp_messenger;
    // 饮品容器
    QList<Goods_Admin *> list_drink;
    // 水果容器
    QList<Goods_Admin *> list_fruit;
    // 存放管理货物信息
    QMap<QString, int> map_manage_info;

    // 水果
    Goods_Admin *fruit_apple;
    Goods_Admin *fruit_banana;
    Goods_Admin *fruit_blueberry;
    Goods_Admin *fruit_grape;
    Goods_Admin *fruit_greengrape;
    Goods_Admin *fruit_lemon;
    Goods_Admin *fruit_mango;
    Goods_Admin *fruit_orange;
    Goods_Admin *fruit_peach;
    Goods_Admin *fruit_strawberry;

    // 饮品
    Goods_Admin *drink_baisuishan;
    Goods_Admin *drink_beinasong;
    Goods_Admin *drink_bingtangxueli;
    Goods_Admin *drink_jiaduobao;
    Goods_Admin *drink_lankele;
    Goods_Admin *drink_lvcha;
    Goods_Admin *drink_meinianda;
    Goods_Admin *drink_nongfushanquan;
    Goods_Admin *drink_quechaokafei;
    Goods_Admin *drink_wangzai;
    Goods_Admin *drink_xiaomingtongxue;
    Goods_Admin *drink_yanmai;
    Goods_Admin *drink_yibao;
};

#endif // ADMININTERFACE_HPP
