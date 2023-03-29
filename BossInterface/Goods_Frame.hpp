#ifndef GOODS_FRAME_HPP
#define GOODS_FRAME_HPP

#include <QWidget>

namespace Ui {
class Goods_Frame;
}

class Goods_Frame : public QWidget
{
    Q_OBJECT

public:
    explicit Goods_Frame(QWidget *parent = 0);
    ~Goods_Frame();

private:
    Ui::Goods_Frame *ui;
};

#endif // GOODS_FRAME_HPP
