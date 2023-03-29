#ifndef GOODS_ADMIN_HPP
#define GOODS_ADMIN_HPP

#include <QDialog>
#include <QString>

namespace Ui {
class Goods_Admin;
}

enum{
    TYPE_DRINK = 0,
    TYPE_FRUIT,
};

class Goods_Admin : public QDialog
{
    Q_OBJECT

signals:
    // 用户补货
    void sig_manage_goods(QString goods_type, QString goods_id,
                           QString goods_name, int current_store);

public:
    explicit Goods_Admin(QWidget *parent = nullptr);
    ~Goods_Admin();

    Goods_Admin(QString func_name, QString func_pic_path, int func_price,
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
    void Set_Good_Price(int price);
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
    // 初始化库存界面
    void Refresh_Store_Label(void);
    // 添加商品数目
    void Add_Goods(int num);
    // 移除商品数目
    void Remove_Goods(int num);
    // 设置商品类别
    void Set_Goods_Type(QString type);
    // 获取商品类别
    QString Get_Goods_Type();
    // 刷新ui
    void Refresh_UI();
    // 管理成功后刷新信息
    void Manage_Ok();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_reduce_clicked();

private:
    Ui::Goods_Admin *ui;

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
    // 补货数量
    int add_num = 0;
    // 清货数量
    int reduce_num = 0;
    // 商品类别
    QString goods_type;
};

#endif // GOODS_ADMIN_HPP
