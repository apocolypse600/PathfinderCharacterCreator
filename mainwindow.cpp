#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setStyleSheet("QTabWidget::tab-bar{alignment:center;}");

    setWindowTitle("Pathfinder Character Creator " + VERSION + " - Unnamed Character");

    ui->actionSave->setShortcuts(QKeySequence::Save);
    ui->actionSave_As->setShortcuts(QKeySequence::SaveAs);
    ui->actionOpen->setShortcuts(QKeySequence::Open);
    ui->actionNew->setShortcuts(QKeySequence::New);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEditName_textChanged(const QString &charname)
{
    setWindowTitle("Pathfinder Character Creator " + VERSION + " - " + charname);
}

void MainWindow::resetValues()
{
    filename = "";

    ui->lineEditName->setText("Unnamed Character");
    ui->lineEditRace->setText("");
    ui->lineEditSize->setText("");
    ui->lineEditGender->setText("");
    ui->lineEditHeight->setText("");
    ui->lineEditWeight->setText("");
    ui->lineEditAge->setText("");
    ui->lineEditAlignment->setText("");
    ui->lineEditDeity->setText("");
    ui->lineEditBackgroundOccupation->setText("");
    ui->lineEditLanguages->setText("");

    ui->spinBoxStrBase->setValue(10);
    ui->spinBoxStrInh->setValue(0);
    ui->spinBoxStrEnh->setValue(0);
    ui->spinBoxStrMisc->setValue(0);
    ui->spinBoxDexBase->setValue(10);
    ui->spinBoxDexInh->setValue(0);
    ui->spinBoxDexEnh->setValue(0);
    ui->spinBoxDexMisc->setValue(0);
    ui->spinBoxConBase->setValue(10);
    ui->spinBoxConInh->setValue(0);
    ui->spinBoxConEnh->setValue(0);
    ui->spinBoxConMisc->setValue(0);
    ui->spinBoxIntBase->setValue(10);
    ui->spinBoxIntInh->setValue(0);
    ui->spinBoxIntEnh->setValue(0);
    ui->spinBoxIntMisc->setValue(0);
    ui->spinBoxWisBase->setValue(10);
    ui->spinBoxWisInh->setValue(0);
    ui->spinBoxWisEnh->setValue(0);
    ui->spinBoxWisMisc->setValue(0);
    ui->spinBoxChaBase->setValue(10);
    ui->spinBoxChaInh->setValue(0);
    ui->spinBoxChaEnh->setValue(0);
    ui->spinBoxChaMisc->setValue(0);

    ui->lineEditPointsSpent->setText("0");

}

void MainWindow::on_actionNew_triggered()
{
    resetValues();
}

void MainWindow::on_actionExit_triggered()
{

}

//Functions that handle the updating of the boxes on the Stats tab

void MainWindow::updateStr()
{
    int newStrTotal = ui->spinBoxStrBase->value() + ui->spinBoxStrInh->value()
            + ui->spinBoxStrEnh->value() + ui->spinBoxStrMisc->value();

    ui->lineEditStrTotal->setText(QString::number(newStrTotal));
    ui->lineEditStrMod->setText(QString::number(newStrTotal/2 -5));
}

void MainWindow::updateDex()
{
    int newDexTotal = ui->spinBoxDexBase->value() + ui->spinBoxDexInh->value()
            + ui->spinBoxDexEnh->value() + ui->spinBoxDexMisc->value();

    ui->lineEditDexTotal->setText(QString::number(newDexTotal));
    ui->lineEditDexMod->setText(QString::number(newDexTotal/2 -5));
}

void MainWindow::updateCon()
{
    int newConTotal = ui->spinBoxConBase->value() + ui->spinBoxConInh->value()
            + ui->spinBoxConEnh->value() + ui->spinBoxConMisc->value();

    ui->lineEditConTotal->setText(QString::number(newConTotal));
    ui->lineEditConMod->setText(QString::number(newConTotal/2 -5));
}

void MainWindow::updateInt()
{
    int newIntTotal = ui->spinBoxIntBase->value() + ui->spinBoxIntInh->value()
            + ui->spinBoxIntEnh->value() + ui->spinBoxIntMisc->value();

    ui->lineEditIntTotal->setText(QString::number(newIntTotal));
    ui->lineEditIntMod->setText(QString::number(newIntTotal/2 -5));
}

void MainWindow::updateWis()
{
    int newWisTotal = ui->spinBoxWisBase->value() + ui->spinBoxWisInh->value()
            + ui->spinBoxWisEnh->value() + ui->spinBoxWisMisc->value();

    ui->lineEditWisTotal->setText(QString::number(newWisTotal));
    ui->lineEditWisMod->setText(QString::number(newWisTotal/2 -5));
}

void MainWindow::updateCha()
{
    int newChaTotal = ui->spinBoxChaBase->value() + ui->spinBoxChaInh->value()
            + ui->spinBoxChaEnh->value() + ui->spinBoxChaMisc->value();

    ui->lineEditChaTotal->setText(QString::number(newChaTotal));
    ui->lineEditChaMod->setText(QString::number(newChaTotal/2 -5));
}

//The slots that call the above functions

void MainWindow::on_spinBoxStrBase_valueChanged()
{
    updateStr();
    updatePointsSpent();
}

void MainWindow::on_spinBoxStrInh_valueChanged()
{
    updateStr();
}

void MainWindow::on_spinBoxStrEnh_valueChanged()
{
    updateStr();
}

void MainWindow::on_spinBoxStrMisc_valueChanged()
{
    updateStr();
}



void MainWindow::on_spinBoxDexBase_valueChanged()
{
    updateDex();
    updatePointsSpent();
}

void MainWindow::on_spinBoxDexInh_valueChanged()
{
    updateDex();
}

void MainWindow::on_spinBoxDexEnh_valueChanged()
{
    updateDex();
}

void MainWindow::on_spinBoxDexMisc_valueChanged()
{
    updateDex();
}



void MainWindow::on_spinBoxConBase_valueChanged()
{
    updateCon();
    updatePointsSpent();
}

void MainWindow::on_spinBoxConInh_valueChanged()
{
    updateCon();
}

void MainWindow::on_spinBoxConEnh_valueChanged()
{
    updateCon();
}

void MainWindow::on_spinBoxConMisc_valueChanged()
{
    updateCon();
}



void MainWindow::on_spinBoxIntBase_valueChanged()
{
    updateInt();
    updatePointsSpent();
}

void MainWindow::on_spinBoxIntInh_valueChanged()
{
    updateInt();
}

void MainWindow::on_spinBoxIntEnh_valueChanged()
{
    updateInt();
}

void MainWindow::on_spinBoxIntMisc_valueChanged()
{
    updateInt();
}



void MainWindow::on_spinBoxWisBase_valueChanged()
{
    updateWis();
    updatePointsSpent();
}

void MainWindow::on_spinBoxWisInh_valueChanged()
{
    updateWis();
}

void MainWindow::on_spinBoxWisEnh_valueChanged()
{
    updateWis();
}

void MainWindow::on_spinBoxWisMisc_valueChanged()
{
    updateWis();
}



void MainWindow::on_spinBoxChaBase_valueChanged()
{
    updateCha();
    updatePointsSpent();
}

void MainWindow::on_spinBoxChaInh_valueChanged()
{
    updateCha();
}

void MainWindow::on_spinBoxChaEnh_valueChanged()
{
    updateCha();
}

void MainWindow::on_spinBoxChaMisc_valueChanged()
{
    updateCha();
}

int MainWindow::calculateAttributeCost(int abilityScore) const
{
    switch(abilityScore)
    {
        case 7 : return -4;
        case 8 : return -2;
        case 9 : return -1;
        case 10 : return 0;
        case 11 : return 1;
        case 12 : return 2;
        case 13 : return 3;
        case 14 : return 5;
        case 15 : return 7;
        case 16 : return 10;
        case 17 : return 13;
        case 18 : return 17;
        default : return -1; //Not entirely sure how to handle errors here
    }
}

void MainWindow::updatePointsSpent()
{
    int newPointsSpent = calculateAttributeCost(ui->spinBoxStrBase->value()) + calculateAttributeCost(ui->spinBoxDexBase->value())
            + calculateAttributeCost(ui->spinBoxConBase->value()) + calculateAttributeCost(ui->spinBoxIntBase->value())
            + calculateAttributeCost(ui->spinBoxWisBase->value()) + calculateAttributeCost(ui->spinBoxChaBase->value());

    ui->lineEditPointsSpent->setText(QString::number(newPointsSpent));
}

void MainWindow::on_actionOpen_triggered()
{
    QString readFilename = QFileDialog::getOpenFileName(this,"Open a file");

    if(!readFilename.isEmpty())
    {
        QFile sFile(readFilename);
        if(sFile.open(QFile::ReadOnly | QFile::Text))
        {
            filename = readFilename;

            QTextStream in(&sFile);

            ui->lineEditName->setText(in.readLine());
            ui->lineEditRace->setText(in.readLine());
            ui->lineEditSize->setText(in.readLine());
            ui->lineEditGender->setText(in.readLine());
            ui->lineEditHeight->setText(in.readLine());
            ui->lineEditWeight->setText(in.readLine());
            ui->lineEditAge->setText(in.readLine());
            ui->lineEditAlignment->setText(in.readLine());
            ui->lineEditDeity->setText(in.readLine());
            ui->lineEditBackgroundOccupation->setText(in.readLine());
            ui->lineEditLanguages->setText(in.readLine());

            in.readLine();

            ui->spinBoxStrBase->setValue(in.readLine().toInt());
            ui->spinBoxStrInh->setValue(in.readLine().toInt());
            ui->spinBoxStrEnh->setValue(in.readLine().toInt());
            ui->spinBoxStrMisc->setValue(in.readLine().toInt());
            ui->spinBoxDexBase->setValue(in.readLine().toInt());
            ui->spinBoxDexInh->setValue(in.readLine().toInt());
            ui->spinBoxDexEnh->setValue(in.readLine().toInt());
            ui->spinBoxDexMisc->setValue(in.readLine().toInt());
            ui->spinBoxConBase->setValue(in.readLine().toInt());
            ui->spinBoxConInh->setValue(in.readLine().toInt());
            ui->spinBoxConEnh->setValue(in.readLine().toInt());
            ui->spinBoxConMisc->setValue(in.readLine().toInt());
            ui->spinBoxIntBase->setValue(in.readLine().toInt());
            ui->spinBoxIntInh->setValue(in.readLine().toInt());
            ui->spinBoxIntEnh->setValue(in.readLine().toInt());
            ui->spinBoxIntMisc->setValue(in.readLine().toInt());
            ui->spinBoxWisBase->setValue(in.readLine().toInt());
            ui->spinBoxWisInh->setValue(in.readLine().toInt());
            ui->spinBoxWisEnh->setValue(in.readLine().toInt());
            ui->spinBoxWisMisc->setValue(in.readLine().toInt());
            ui->spinBoxChaBase->setValue(in.readLine().toInt());
            ui->spinBoxChaInh->setValue(in.readLine().toInt());
            ui->spinBoxChaEnh->setValue(in.readLine().toInt());
            ui->spinBoxChaMisc->setValue(in.readLine().toInt());

            sFile.close();
        }

        ui->statusBar->showMessage(filename + " successfully opened",5000); //timeout in milisec

        updatePointsSpent();
    }
}

void MainWindow::on_actionSave_triggered()
{
    QFile sFile(filename);
    if(sFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out(&sFile);

        out <<  ui->lineEditName->text() << '\n'
            <<  ui->lineEditRace->text() << '\n'
            <<  ui->lineEditSize->text() << '\n'
            <<  ui->lineEditGender->text() << '\n'
            <<  ui->lineEditHeight->text() << '\n'
            <<  ui->lineEditWeight->text() << '\n'
            <<  ui->lineEditAge->text() << '\n'
            <<  ui->lineEditAlignment->text() << '\n'
            <<  ui->lineEditDeity->text() << '\n'
            <<  ui->lineEditBackgroundOccupation->text() << '\n'
            <<  ui->lineEditLanguages->text() << '\n'
            << '\n'
            << ui->spinBoxStrBase->value() << '\n'
            << ui->spinBoxStrInh->value() << '\n'
            << ui->spinBoxStrEnh->value() << '\n'
            << ui->spinBoxStrMisc->value() << '\n'
            << ui->spinBoxDexBase->value() << '\n'
            << ui->spinBoxDexInh->value() << '\n'
            << ui->spinBoxDexEnh->value() << '\n'
            << ui->spinBoxDexMisc->value() << '\n'
            << ui->spinBoxConBase->value() << '\n'
            << ui->spinBoxConInh->value() << '\n'
            << ui->spinBoxConEnh->value() << '\n'
            << ui->spinBoxConMisc->value() << '\n'
            << ui->spinBoxIntBase->value() << '\n'
            << ui->spinBoxIntInh->value() << '\n'
            << ui->spinBoxIntEnh->value() << '\n'
            << ui->spinBoxIntMisc->value() << '\n'
            << ui->spinBoxWisBase->value() << '\n'
            << ui->spinBoxWisInh->value() << '\n'
            << ui->spinBoxWisEnh->value() << '\n'
            << ui->spinBoxWisMisc->value() << '\n'
            << ui->spinBoxChaBase->value() << '\n'
            << ui->spinBoxChaInh->value() << '\n'
            << ui->spinBoxChaEnh->value() << '\n'
            << ui->spinBoxChaMisc->value();

        sFile.flush();
        sFile.close();

        ui->statusBar->showMessage(filename + " successfully saved",5000); //timeout in milisec
    }
}

void MainWindow::on_actionSave_As_triggered()
{
    QString readFilename = QFileDialog::getSaveFileName(this,"Save as");

    if(!readFilename.isEmpty())
    {
        filename = readFilename;
        on_actionSave_triggered();

    }
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this,"About","Pathfinder Character Creator " + VERSION); // TODO should probably replace with a QMessageBox::about at some point
}

/*void MainWindow::updateClassSkills()
{
    int newValue = ui->lineEditClassSkills1->text().toInt() + ui->lineEditClassSkills2->text().toInt()
            + ui->lineEditClassSkills3->text().toInt() + ui->lineEditClassSkills4->text().toInt()
            + ui->lineEditClassSkills5->text().toInt();

    ui->lineEditClassSkillsTotal->setText(QString::number(newValue));
}*/
