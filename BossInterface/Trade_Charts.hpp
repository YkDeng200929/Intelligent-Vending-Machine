#ifndef TRADE_CHARTS_HPP
#define TRADE_CHARTS_HPP

#include <QWidget>

namespace Ui {
class Trade_Charts;
}

class Trade_Charts : public QWidget
{
    Q_OBJECT

public:
    explicit Trade_Charts(QWidget *parent = nullptr);
    ~Trade_Charts();

private:
    Ui::Trade_Charts *ui;
};

#endif // TRADE_CHARTS_HPP
