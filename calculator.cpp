#include "calculator.h"
#include "ui_calculator.h"
#include<math.h>

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    resultValue = 0;
    currentValue = 0;
    eingabeValue = 0;
    operatorPressed = 0;
    gleich_clicked = false;
    ui->lcdNumber->setDigitCount(10);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_0_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 0;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_1_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 1;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_2_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 2;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_3_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 3;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_4_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 4;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_5_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 5;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_6_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 6;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_7_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 7;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_8_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 8;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_9_clicked()
{
    if(gleich_clicked){
       on_pushButton_clear_clicked();
    }
    currentValue = (currentValue * 10) + 9;
    ui->lcdNumber->display(currentValue);
}

void Calculator::on_pushButton_plus_clicked()    //plus
{
    Rechenreihenfolge();
    operatorPressed = 1;

}

void Calculator::on_pushButton_minus_clicked()    //minus
{
    Rechenreihenfolge();
    operatorPressed = 2;
}

void Calculator::on_pushButton_mal_clicked()    //multiplikation
{
    Rechenreihenfolge();
    operatorPressed = 3;

}

void Calculator::on_pushButton_durch_clicked()    //division
{
    Rechenreihenfolge();
    operatorPressed = 4;

}

void Calculator::on_pushButton_modulo_clicked()    //modulo
{
    Rechenreihenfolge();
    operatorPressed = 5;

}

void Calculator::on_pushButton_hoch_clicked()    //potenz
{
    Rechenreihenfolge();
    operatorPressed = 6;
}

void Calculator::Rechenreihenfolge(){                   //Rechenreihenfolge
    if (!gleich_clicked && operatorPressed == 0){
        resultValue = currentValue;

    }
    else if (!gleich_clicked && (operatorPressed > 0)){
        Calculator::on_pushButton_gleich_clicked();
        gleich_clicked = false;
    }
    else if (gleich_clicked && (operatorPressed > 0)){
        eingabeValue = currentValue;
    }
    else if (gleich_clicked &&(operatorPressed == 0)){
        gleich_clicked = false;
    }
    currentValue = 0;
}

void Calculator::on_pushButton_gleich_clicked()        //gleich
{
        eingabeValue = currentValue;
        if (operatorPressed == 1){
            resultValue = resultValue + eingabeValue;
        }
        else if (operatorPressed == 2){
            resultValue = resultValue - eingabeValue;
        }
        else if (operatorPressed == 3){
            resultValue = resultValue * eingabeValue;
        }
        else if (operatorPressed == 4){
            resultValue = resultValue / eingabeValue;
       }
        else if (operatorPressed == 5){
           resultValue = resultValue % eingabeValue;
        }
        else if (operatorPressed == 6){
            resultValue = pow(resultValue,eingabeValue);
        }
        ui->lcdNumber->display(resultValue);
        eingabeValue = 0;
        currentValue = 0;
        operatorPressed = 0;
        gleich_clicked = true;
}

void Calculator::on_pushButton_clear_clicked()        //reset
{
    currentValue = 0;
    resultValue = 0;
    eingabeValue = 0;
    operatorPressed = 0;
    gleich_clicked = false;
    ui->lcdNumber->display(currentValue);

}
