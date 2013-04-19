#include "manualdiceroller.h"
#include "ui_manualdiceroller.h"

ManualDiceRoller::ManualDiceRoller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManualDiceRoller)
{
    ui->setupUi(this);

    srand(time(0));
    clipboard = QApplication::clipboard();
}

ManualDiceRoller::~ManualDiceRoller()
{
    delete ui;
}

void ManualDiceRoller::on_pushButton_clicked()
{
   int diceNum = ui->spinBoxDiceNum->value();
   int diceFaces = ui->spinBoxDiceFaces->value();
   int diceInvMod = ui->spinBoxDiceInvMod->value();
   int diceTotalMod = ui->spinBoxDiceTotalMod->value();
   int diceTotal = 0;

   if(diceNum == 0 || diceFaces == 0)
   {
       return;
   }

   lastRoll = "( ";

   for(int i = 0; i < diceNum; i++)
   {
       int temp = (rand()%diceFaces + 1) + diceInvMod;
       diceTotal += temp;
       lastRoll.append(QString::number(temp) + " ");
   }

   lastRoll.append(")");

   lastRoll.append(" Total : " + QString::number(diceTotal + diceTotalMod));

   ui->plainTextEditDiceOutput->appendPlainText(lastRoll);
}

void ManualDiceRoller::on_pushButton_2_clicked()
{
    if (lastRoll!="")
    {
        clipboard->setText(lastRoll);
    }
}
