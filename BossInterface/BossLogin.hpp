#ifndef BOSSLOGIN_HPP
#define BOSSLOGIN_HPP

#include "qcustomplot.h"
#include <QMainWindow>
#include <QVector>
#include <QTime>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include "NetManager.hpp"
#include "Goods_Widget.hpp"

enum {
    PAGE_LOGIN = 0,
    PAGE_REG,
    PAGE_RESET_PASSWD,
    PAGE_MAIN_INTERFACE,
    PAGE_SALE_INFO,
    PAGE_REG_MACHINE,
    PAGE_LOGOUT_MACHINE,
    PAGE_CHECK_MACHINE,
};

namespace Ui {
class BossLogin;
}

class BossLogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit BossLogin(QWidget *parent = 0);
    ~BossLogin();

    // 初始化表格样式
    void Init_TableWidget(void);
    // 初始化商品控件
    void Init_Goods_Widget(void);
    // 刷新商品控件
    void Refresh_Goods_Widget(void);
    // 开机初始化
    void Start_Page(void);
    // 初始化连接
    void Init_Connect(void);
    // 初始化折线图
    void Init_Chart(void);
    // 其他初始化
    void Init_Other(void);

private slots:
    // 登录按钮点击槽
    void on_pushButton_login_clicked();
    // 注册按钮点击槽
    void on_pushButton_reg_clicked();
    // 退出注册界面返回登录界面
    void on_pushButton_reg_quit_clicked();
    // 点击生成授权码
    void on_pushButton_generate_code_clicked();
    // 点击查看柜机
    void on_pushButton_check_machine_clicked();
    // 管理柜机界面返回用户主界面
    void on_pushButton_manage_back_clicked();
    // 查看柜机界面返回到查看当前柜机界面
    void on_pushButton_back_clicked();
    // 退出登录点击
    void on_pushButton_logout_clicked();
    // 确认注册点击
    void on_pushButton_reg_ack_clicked();
    // 重置密码界面返回主界面
    void on_pushButton_reset_back_clicked();
    // 点击进入修改密码界面
    void on_pushButton_change_passwd_clicked();
    // 用户点击注册柜机按钮
    void on_pushButton_reg_machine_clicked();
    // 自定义槽: 用户成功登录
    void slot_login_success();
    // 自定义槽: 用户登录失败
    void slot_login_fail();
    // 自定义槽: 用户注册成功
    void slot_reg_success();
    // 自定义槽: 用户注册失败
    void slot_reg_fail();
    // 确认注册柜机
    void on_pushButton_reg_machine_ack_clicked();
    // 自定义槽: 柜机注册成功
    void slot_reg_machine_success();
    // 自定义槽: 柜机注册失败
    void slot_reg_machine_fail();
    // 自定义槽: 查看柜机信息
    void slot_check_machine_info();
    // 自定义槽: 成功获取到销售额数据
    void slot_get_sale_success(QJsonValue sale_info);
    // 自定义槽: 获取销售额数据失败
    void slot_get_sale_fail();
    // 点击查看销售额
    void on_pushButton_check_sale_clicked();
    // 自定义槽: 成功获取到当前用户的柜机信息
    void slot_get_machine_id_success(QJsonValue machine_id);
    // 自定义槽: 获取柜机信息失败
    void slot_get_machine_id_fail();
    // 注册柜机界面返回主界面
    void on_pushButton_reg_machine_back_clicked();
    // 查看销售额界面返回主界面
    void on_pushButton_chart_back_clicked();
    // 跳转到删除柜机界面
    void on_pushButton_delete_machine_clicked();
    // 注销柜机界面跳转回主界面
    void on_pushButton_logout_machine_back_clicked();
    // 点击确认注销柜机按钮
    void on_pushButton_logout_machine_ack_clicked();
    // 自定义槽: 注销柜机成功
    void slot_remove_machine_ok();
    // 自定义槽: 注销柜机失败
    void slot_remove_machine_fail();
    // 自定义槽: 成功获取到所有商品信息
    void slot_get_goods_info_ok(QJsonValue goods_info);
    // 自定义槽: 获取所有商品信息失败
    void slot_get_goods_info_fail();

private:
    Ui::BossLogin *ui;
    // tcp助手
    NetManager *netManager;
    // 用户名
    QString user_name;
    // 折线图轴数据存储
    QVector<double> xData, yData;
    // 折线图
    QCustomPlot *customPlot;
    // 饮品容器
    QList<Goods_Widget *>list_drink;
    // 水果容器
    QList<Goods_Widget *>list_fruit;

    // 水果
    Goods_Widget *fruit_apple;
    Goods_Widget *fruit_banana;
    Goods_Widget *fruit_blueberry;
    Goods_Widget *fruit_grape;
    Goods_Widget *fruit_greengrape;
    Goods_Widget *fruit_lemon;
    Goods_Widget *fruit_mango;
    Goods_Widget *fruit_orange;
    Goods_Widget *fruit_peach;
    Goods_Widget *fruit_strawberry;

    // 饮品
    Goods_Widget *drink_baisuishan;
    Goods_Widget *drink_beinasong;
    Goods_Widget *drink_bingtangxueli;
    Goods_Widget *drink_jiaduobao;
    Goods_Widget *drink_lankele;
    Goods_Widget *drink_lvcha;
    Goods_Widget *drink_meinianda;
    Goods_Widget *drink_nongfushanquan;
    Goods_Widget *drink_quechaokafei;
    Goods_Widget *drink_wangzai;
    Goods_Widget *drink_xiaomingtongxue;
    Goods_Widget *drink_yanmai;
    Goods_Widget *drink_yibao;
};

#endif // BOSSLOGIN_HPP
