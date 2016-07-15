#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

namespace Ui {
class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_mal_clicked();

    void on_pushButton_durch_clicked();

    void on_pushButton_hoch_clicked();

    void on_pushButton_modulo_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_gleich_clicked();

    void Rechenreihenfolge();


private:
    Ui::Calculator *ui;

    int resultValue;
    int currentValue;
    int operatorPressed;
    bool gleich_clicked;
    int eingabeValue;
};

#endif // CALCULATOR_H
