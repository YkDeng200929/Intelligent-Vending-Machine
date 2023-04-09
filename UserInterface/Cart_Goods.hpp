#ifndef CART_GOODS_HPP
#define CART_GOODS_HPP

#include <QDialog>

namespace Ui {
class Cart_Goods;
}

class Cart_Goods : public QDialog
{
    Q_OBJECT

signals:
    void sig_remove_goods(QString name, int change_num);

public:
    explicit Cart_Goods(QWidget *parent = nullptr);
    ~Cart_Goods();

    Cart_Goods(QString pic_path, QString goods_id, QString name,
               double total_price){
        goods_pic_path   = pic_path;
        this->goods_id   = goods_id;
        this->goods_name = name;
        this->total_price= total_price;
    }

    // 初始化购物车商品框架
    void Create_goods_Widget();
    // 设置商品id
    void Set_Goods_Id(QString id);
    // 获取商品id
    QString Get_Goods_Id();
    // 设置商品名称
    void Set_Good_Name(QString name);
    // 获取商品名称
    QString Get_Good_Name(void);
    // 设置商品价格
    void Set_Good_Price(double price);
    // 获取商品价格
    int Get_Good_Price(void);
    // 设置商品图片路径
    void Set_Good_Pic(QString path);
    // 获取控件图片路径
    QString Get_Good_Pic(void);
    // 添加到购物车数量, 并修改总金额
    void Add_Cart_Num(int num);
    // 移出购物车数量, 并减少总金额
    void Remove_Cart_Num(int num);
    // 刷新UI界面
    void Refresh_User_UI(void);
    // 获取添加到购物车的总金额数
    double Get_Total_Price();
    // 刷新该商品总金额与添加到购物车数量
    void Refresh_Total_Price(double total_price, int num);
    // 获取添加到购物车的数量
    int Get_Added_Num();

private slots:

private:
    Ui::Cart_Goods *ui;

    // 商品id
    QString goods_id;
    // 商品基础信息是否设置
    bool base_info = false;
    // 商品名称
    QString goods_name;
    // 商品图片路径
    QString goods_pic_path;
    // 商品价格
    double good_price = 0;
    // 添加到购物车的数量
    int added_num = 0;
    // 总金额
    double total_price = 0;
};

#endif // CART_GOODS_HPP
