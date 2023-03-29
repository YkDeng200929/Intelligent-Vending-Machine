#ifndef ADMINCODE_HPP
#define ADMINCODE_HPP

#include <QWidget>
#include <QString>

namespace Ui {
class AdminCode;
}

class AdminCode : public QWidget
{
    Q_OBJECT

public:
    explicit AdminCode(QWidget *parent = nullptr);
    ~AdminCode();
signals:
    void sig_admin_code_correct();
    void sig_admin_code_interface_close();

private slots:
    void on_pushButton_quit_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_ack_clicked();

private:
    Ui::AdminCode *ui;
    // 输入的授权码
    QString input_code;
};

#endif // ADMINCODE_HPP
