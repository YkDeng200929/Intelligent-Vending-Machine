#ifndef GOODS_TEST_HPP
#define GOODS_TEST_HPP

#include <QDialog>

#define DRINK    1111
#define FRUIT    2222

#define UI_ADMIN 3333
#define UI_CART  4444
#define UI_USER  5555

namespace Ui {
class Goods_Test;
}

class Goods_Test : public QDialog
{
    Q_OBJECT

signals:
    // 用户加入购物车的数量
    void sig_user_add_goods(QString goods_name, QString id, int num, double total_price);

public:
    explicit Goods_Test(QWidget *parent = 0);
    ~Goods_Test();

    Goods_Test(QString func_name, QString func_pic_path, int func_price,
               int func_store){
        goods_name = func_name;
        goods_pic_path = func_pic_path;
        good_price = func_price;
        good_store = func_store;
    }

    // 设置商品id
    void Set_Goods_Id(QString id);
    // 获取商品id
    QString Get_Goods_Id();
    // 创建商品信息框架
    void Create_Good_Widget();
    // 设置商品名称
    void Set_Good_Name(QString name);
    // 获取商品名称
    QString Get_Good_Name(void);
    // 设置商品价格
    void Set_Good_Price(double price);
    // 获取商品价格
    int Get_Good_Price(void);
    // 设置商品库存
    void Set_Good_Store(int store);
    // 获取商品库存
    int Get_Good_Store(void);
    // 设置商品图片路径
    void Set_Good_Pic(QString path);
    // 获取控件图片路径
    QString Get_Good_Pic(void);
    // 支付成功, 清除总金额并修改库存
    void Pay_Success(void);
    // 切换按钮文字为添加到购物车
    void Change_Label_Add_Cart(void);
    // 切换按钮文字为移除购物车
    void Change_Label_Remove_Cart(void);
    // 初始化界面
    void Init_UI(void);
    // 添加到购物车数量, 并修改总金额
    void Add_Cart_Num(int num);
    // 移出购物车数量, 并减少总金额
    void Remove_Cart_Num(int num);
    // 刷新总金额
    double Refresh_Total_Price(void);
    // 刷新UI界面
    void Refresh_User_UI(void);
    // 获取添加到购物车的总金额数
    double Get_Total_Price();
    // 用户支付成功后重置信息
    void Clear_Pay_Ok();
    // 获取添加到购物车的数目
    int Get_Buy_Num();
    // 清空购买数目
    void Clear_Buy_Num();


private slots:

    void on_pushButton_add_remove_clicked();

private:
    Ui::Goods_Test *ui;

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
    // 商品库存
    int good_store = 0;
    // 添加到购物车的数量
    int added_num = 0;
    // 总金额
    double total_price = 0;
};

#endif // GOODS_TEST_HPP
