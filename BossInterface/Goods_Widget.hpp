#ifndef GOODS_WIDGET_HPP
#define GOODS_WIDGET_HPP

#include <QDialog>

namespace Ui {
class Goods_Widget;
}

class Goods_Widget : public QDialog
{
    Q_OBJECT

public:
    explicit Goods_Widget(QWidget *parent = nullptr);
    ~Goods_Widget();

    Goods_Widget(QString pic_path, QString name, QString type,
                 QString id, int store, double price){
        this->pic_path = pic_path;
        this->name = name;
        this->type = type;
        this->id = id;
        this->store = store;
        this->price = price;
    }

    // 初始化商品控件
    void Init_Widget(void);
    // 设置商品名称
    void Set_Goods_Name(QString name);
    // 获取商品名称
    QString Get_Goods_Name();
    // 设置商品类型
    void Set_Goods_Type(QString type);
    // 获取商品类型
    QString Get_Goods_Type(void);
    // 设置商品价格
    void Set_Goods_Price(double price);
    // 获取商品价格
    double Get_Goods_Price(void);
    // 设置商品库存
    void Set_Goods_Store(int store);
    // 获取商品库存
    int Get_Goods_Store(void);
    // 设置商品图片
    void Set_Goods_Pic(QString path);
    // 获取商品图片路径
    QString Get_Goods_Pic(void);
    // 刷新商品信息
    void Refresh_Goods_Info(void);

private:
    Ui::Goods_Widget *ui;

    // 商品基础信息
    bool base_info = false;
    // 商品名称
    QString name;
    // 商品类型
    QString type;
    // 商品id
    QString id;
    // 商品图片路径
    QString pic_path;
    // 商品库存
    int store = 0;
    // 商品单价
    double price;
};

#endif // GOODS_WIDGET_HPP
