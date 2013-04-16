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

    ui->lineEditClass1->setText("");
    ui->spinBoxClassSkills1->setValue(0);
    ui->spinBoxClassBAB1->setValue(0);
    ui->spinBoxClassFortSave1->setValue(0);
    ui->spinBoxClassRefSave1->setValue(0);
    ui->spinBoxClassWillSave1->setValue(0);
    ui->spinBoxClassLevels1->setValue(0);
    ui->lineEditHitDie1->setText("");
    ui->spinBoxHPGained1->setValue(0);
    ui->lineEditClass2->setText("");
    ui->spinBoxClassSkills2->setValue(0);
    ui->spinBoxClassBAB2->setValue(0);
    ui->spinBoxClassFortSave2->setValue(0);
    ui->spinBoxClassRefSave2->setValue(0);
    ui->spinBoxClassWillSave2->setValue(0);
    ui->spinBoxClassLevels2->setValue(0);
    ui->lineEditHitDie2->setText("");
    ui->spinBoxHPGained2->setValue(0);
    ui->lineEditClass3->setText("");
    ui->spinBoxClassSkills3->setValue(0);
    ui->spinBoxClassBAB3->setValue(0);
    ui->spinBoxClassFortSave3->setValue(0);
    ui->spinBoxClassRefSave3->setValue(0);
    ui->spinBoxClassWillSave3->setValue(0);
    ui->spinBoxClassLevels3->setValue(0);
    ui->lineEditHitDie3->setText("");
    ui->spinBoxHPGained3->setValue(0);
    ui->lineEditClass4->setText("");
    ui->spinBoxClassSkills4->setValue(0);
    ui->spinBoxClassBAB4->setValue(0);
    ui->spinBoxClassFortSave4->setValue(0);
    ui->spinBoxClassRefSave4->setValue(0);
    ui->spinBoxClassWillSave4->setValue(0);
    ui->spinBoxClassLevels4->setValue(0);
    ui->lineEditHitDie4->setText("");
    ui->spinBoxHPGained4->setValue(0);
    ui->lineEditClass5->setText("");
    ui->spinBoxClassSkills5->setValue(0);
    ui->spinBoxClassBAB5->setValue(0);
    ui->spinBoxClassFortSave5->setValue(0);
    ui->spinBoxClassRefSave5->setValue(0);
    ui->spinBoxClassWillSave5->setValue(0);
    ui->spinBoxClassLevels5->setValue(0);
    ui->lineEditHitDie5->setText("");
    ui->spinBoxHPGained5->setValue(0);
    ui->checkBoxFavoured1->setChecked(true);


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

            in.readLine();

            ui->lineEditClass1->setText(in.readLine());
            ui->spinBoxClassSkills1->setValue(in.readLine().toInt());
            ui->spinBoxClassBAB1->setValue(in.readLine().toInt());
            ui->spinBoxClassFortSave1->setValue(in.readLine().toInt());
            ui->spinBoxClassRefSave1->setValue(in.readLine().toInt());
            ui->spinBoxClassWillSave1->setValue(in.readLine().toInt());
            ui->spinBoxClassLevels1->setValue(in.readLine().toInt());
            ui->lineEditHitDie1->setText(in.readLine());
            ui->spinBoxHPGained1->setValue(in.readLine().toInt());
            ui->lineEditClass2->setText(in.readLine());
            ui->spinBoxClassSkills2->setValue(in.readLine().toInt());
            ui->spinBoxClassBAB2->setValue(in.readLine().toInt());
            ui->spinBoxClassFortSave2->setValue(in.readLine().toInt());
            ui->spinBoxClassRefSave2->setValue(in.readLine().toInt());
            ui->spinBoxClassWillSave2->setValue(in.readLine().toInt());
            ui->spinBoxClassLevels2->setValue(in.readLine().toInt());
            ui->lineEditHitDie2->setText(in.readLine());
            ui->spinBoxHPGained2->setValue(in.readLine().toInt());
            ui->lineEditClass3->setText(in.readLine());
            ui->spinBoxClassSkills3->setValue(in.readLine().toInt());
            ui->spinBoxClassBAB3->setValue(in.readLine().toInt());
            ui->spinBoxClassFortSave3->setValue(in.readLine().toInt());
            ui->spinBoxClassRefSave3->setValue(in.readLine().toInt());
            ui->spinBoxClassWillSave3->setValue(in.readLine().toInt());
            ui->spinBoxClassLevels3->setValue(in.readLine().toInt());
            ui->lineEditHitDie3->setText(in.readLine());
            ui->spinBoxHPGained3->setValue(in.readLine().toInt());
            ui->lineEditClass4->setText(in.readLine());
            ui->spinBoxClassSkills4->setValue(in.readLine().toInt());
            ui->spinBoxClassBAB4->setValue(in.readLine().toInt());
            ui->spinBoxClassFortSave4->setValue(in.readLine().toInt());
            ui->spinBoxClassRefSave4->setValue(in.readLine().toInt());
            ui->spinBoxClassWillSave4->setValue(in.readLine().toInt());
            ui->spinBoxClassLevels4->setValue(in.readLine().toInt());
            ui->lineEditHitDie4->setText(in.readLine());
            ui->spinBoxHPGained4->setValue(in.readLine().toInt());
            ui->lineEditClass5->setText(in.readLine());
            ui->spinBoxClassSkills5->setValue(in.readLine().toInt());
            ui->spinBoxClassBAB5->setValue(in.readLine().toInt());
            ui->spinBoxClassFortSave5->setValue(in.readLine().toInt());
            ui->spinBoxClassRefSave5->setValue(in.readLine().toInt());
            ui->spinBoxClassWillSave5->setValue(in.readLine().toInt());
            ui->spinBoxClassLevels5->setValue(in.readLine().toInt());
            ui->lineEditHitDie5->setText(in.readLine());
            ui->spinBoxHPGained5->setValue(in.readLine().toInt());

            switch(in.readLine().toInt())
            {
                case 1 : ui->checkBoxFavoured1->setChecked(true); break;
                case 2 : ui->checkBoxFavoured2->setChecked(true); break;
                case 3 : ui->checkBoxFavoured3->setChecked(true); break;
                case 4 : ui->checkBoxFavoured4->setChecked(true); break;
                case 5 : ui->checkBoxFavoured5->setChecked(true); break;
                //default :
            }

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
            << ui->spinBoxChaMisc->value() <<'\n'
            << '\n'
            << ui->lineEditClass1->text() << '\n'
            << ui->spinBoxClassSkills1->value() << '\n'
            << ui->spinBoxClassBAB1->value() << '\n'
            << ui->spinBoxClassFortSave1->value() << '\n'
            << ui->spinBoxClassRefSave1->value() << '\n'
            << ui->spinBoxClassWillSave1->value() << '\n'
            << ui->spinBoxClassLevels1->value() << '\n'
            << ui->lineEditHitDie1->text() << '\n'
            << ui->spinBoxHPGained1->value() << '\n'
            << ui->lineEditClass2->text() << '\n'
            << ui->spinBoxClassSkills2->value() << '\n'
            << ui->spinBoxClassBAB2->value() << '\n'
            << ui->spinBoxClassFortSave2->value() << '\n'
            << ui->spinBoxClassRefSave2->value() << '\n'
            << ui->spinBoxClassWillSave2->value() << '\n'
            << ui->spinBoxClassLevels2->value() << '\n'
            << ui->lineEditHitDie2->text() << '\n'
            << ui->spinBoxHPGained2->value() << '\n'
            << ui->lineEditClass3->text() << '\n'
            << ui->spinBoxClassSkills3->value() << '\n'
            << ui->spinBoxClassBAB3->value() << '\n'
            << ui->spinBoxClassFortSave3->value() << '\n'
            << ui->spinBoxClassRefSave3->value() << '\n'
            << ui->spinBoxClassWillSave3->value() << '\n'
            << ui->spinBoxClassLevels3->value() << '\n'
            << ui->lineEditHitDie3->text() << '\n'
            << ui->spinBoxHPGained3->value() << '\n'
            << ui->lineEditClass4->text() << '\n'
            << ui->spinBoxClassSkills4->value() << '\n'
            << ui->spinBoxClassBAB4->value() << '\n'
            << ui->spinBoxClassFortSave4->value() << '\n'
            << ui->spinBoxClassRefSave4->value() << '\n'
            << ui->spinBoxClassWillSave4->value() << '\n'
            << ui->spinBoxClassLevels4->value() << '\n'
            << ui->lineEditHitDie4->text() << '\n'
            << ui->spinBoxHPGained4->value() << '\n'
            << ui->lineEditClass5->text() << '\n'
            << ui->spinBoxClassSkills5->value() << '\n'
            << ui->spinBoxClassBAB5->value() << '\n'
            << ui->spinBoxClassFortSave5->value() << '\n'
            << ui->spinBoxClassRefSave5->value() << '\n'
            << ui->spinBoxClassWillSave5->value() << '\n'
            << ui->spinBoxClassLevels5->value() << '\n'
            << ui->lineEditHitDie5->text() << '\n'
            << ui->spinBoxHPGained5->value() << '\n';

            if (ui->checkBoxFavoured1->isChecked())
            {
                out << 1 << '\n';
            }
            else if (ui->checkBoxFavoured2->isChecked())
            {
                out << 2 << '\n';
            }
            else if (ui->checkBoxFavoured3->isChecked())
            {
                out << 3 << '\n';
            }
            else if (ui->checkBoxFavoured4->isChecked())
            {
                out << 4 << '\n';
            }
            else
            {
                out << 5 << '\n';
            }


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

void MainWindow::updateClassSkills()
{
    int newValue = ui->spinBoxClassSkills1->text().toInt() + ui->spinBoxClassSkills2->text().toInt()
            + ui->spinBoxClassSkills3->text().toInt() + ui->spinBoxClassSkills4->text().toInt()
            + ui->spinBoxClassSkills5->text().toInt();

    ui->lineEditClassSkillsTotal->setText(QString::number(newValue));
}

void MainWindow::updateClassBAB()
{
    int newValue = ui->spinBoxClassBAB1->text().toInt() + ui->spinBoxClassBAB2->text().toInt()
            + ui->spinBoxClassBAB3->text().toInt() + ui->spinBoxClassBAB4->text().toInt()
            + ui->spinBoxClassBAB5->text().toInt();

    ui->lineEditClassBABTotal->setText(QString::number(newValue));
}

void MainWindow::updateClassFortSave()
{
    int newValue = ui->spinBoxClassFortSave1->text().toInt() + ui->spinBoxClassFortSave2->text().toInt()
            + ui->spinBoxClassFortSave3->text().toInt() + ui->spinBoxClassFortSave4->text().toInt()
            + ui->spinBoxClassFortSave5->text().toInt();

    ui->lineEditClassFortSaveTotal->setText(QString::number(newValue));
}

void MainWindow::updateClassRefSave()
{
    int newValue = ui->spinBoxClassRefSave1->text().toInt() + ui->spinBoxClassRefSave2->text().toInt()
            + ui->spinBoxClassRefSave3->text().toInt() + ui->spinBoxClassRefSave4->text().toInt()
            + ui->spinBoxClassRefSave5->text().toInt();

    ui->lineEditClassRefSaveTotal->setText(QString::number(newValue));
}

void MainWindow::updateClassWillSave()
{
    int newValue = ui->spinBoxClassWillSave1->text().toInt() + ui->spinBoxClassWillSave2->text().toInt()
            + ui->spinBoxClassWillSave3->text().toInt() + ui->spinBoxClassWillSave4->text().toInt()
            + ui->spinBoxClassWillSave5->text().toInt();

    ui->lineEditClassWillSaveTotal->setText(QString::number(newValue));
}

void MainWindow::updateClassLevels()
{
    int newValue = ui->spinBoxClassLevels1->text().toInt() + ui->spinBoxClassLevels2->text().toInt()
            + ui->spinBoxClassLevels3->text().toInt() + ui->spinBoxClassLevels4->text().toInt()
            + ui->spinBoxClassLevels5->text().toInt();

    ui->lineEditClassLevelsTotal->setText(QString::number(newValue));
}

void MainWindow::updateHPGained()
{
    int newValue = ui->spinBoxHPGained1->text().toInt() + ui->spinBoxHPGained2->text().toInt()
            + ui->spinBoxHPGained3->text().toInt() + ui->spinBoxHPGained4->text().toInt()
            + ui->spinBoxHPGained5->text().toInt();

    ui->lineEditHPGainedTotal->setText(QString::number(newValue));
}

void MainWindow::on_spinBoxClassSkills1_valueChanged()
{
    updateClassSkills();
}

void MainWindow::on_spinBoxClassSkills2_valueChanged()
{
    updateClassSkills();
}

void MainWindow::on_spinBoxClassSkills3_valueChanged()
{
    updateClassSkills();
}

void MainWindow::on_spinBoxClassSkills4_valueChanged()
{
    updateClassSkills();
}

void MainWindow::on_spinBoxClassSkills5_valueChanged()
{
    updateClassSkills();
}

void MainWindow::on_spinBoxClassBAB1_valueChanged()
{
    updateClassBAB();
}

void MainWindow::on_spinBoxClassBAB2_valueChanged()
{
    updateClassBAB();
}

void MainWindow::on_spinBoxClassBAB3_valueChanged()
{
    updateClassBAB();
}

void MainWindow::on_spinBoxClassBAB4_valueChanged()
{
    updateClassBAB();
}

void MainWindow::on_spinBoxClassBAB5_valueChanged()
{
    updateClassBAB();
}

void MainWindow::on_spinBoxClassFortSave1_valueChanged()
{
    updateClassFortSave();
}

void MainWindow::on_spinBoxClassFortSave2_valueChanged()
{
    updateClassFortSave();
}

void MainWindow::on_spinBoxClassFortSave3_valueChanged()
{
    updateClassFortSave();
}

void MainWindow::on_spinBoxClassFortSave4_valueChanged()
{
    updateClassFortSave();
}

void MainWindow::on_spinBoxClassFortSave5_valueChanged()
{
    updateClassFortSave();
}

void MainWindow::on_spinBoxClassRefSave1_valueChanged()
{
    updateClassRefSave();
}

void MainWindow::on_spinBoxClassRefSave2_valueChanged()
{
    updateClassRefSave();
}
void MainWindow::on_spinBoxClassRefSave3_valueChanged()
{
    updateClassRefSave();
}

void MainWindow::on_spinBoxClassRefSave4_valueChanged()
{
    updateClassRefSave();
}

void MainWindow::on_spinBoxClassRefSave5_valueChanged()
{
    updateClassRefSave();
}

void MainWindow::on_spinBoxClassWillSave1_valueChanged()
{
    updateClassWillSave();
}

void MainWindow::on_spinBoxClassWillSave2_valueChanged()
{
    updateClassWillSave();
}

void MainWindow::on_spinBoxClassWillSave3_valueChanged()
{
    updateClassWillSave();
}

void MainWindow::on_spinBoxClassWillSave4_valueChanged()
{
    updateClassWillSave();
}

void MainWindow::on_spinBoxClassWillSave5_valueChanged()
{
    updateClassWillSave();
}

void MainWindow::on_spinBoxClassLevels1_valueChanged()
{
    updateClassLevels();
}

void MainWindow::on_spinBoxClassLevels2_valueChanged()
{
    updateClassLevels();
}

void MainWindow::on_spinBoxClassLevels3_valueChanged()
{
    updateClassLevels();
}

void MainWindow::on_spinBoxClassLevels4_valueChanged()
{
    updateClassLevels();
}

void MainWindow::on_spinBoxClassLevels5_valueChanged()
{
    updateClassLevels();
}

void MainWindow::on_spinBoxHPGained1_valueChanged()
{
    updateHPGained();
}

void MainWindow::on_spinBoxHPGained2_valueChanged()
{
    updateHPGained();
}

void MainWindow::on_spinBoxHPGained3_valueChanged()
{
    updateHPGained();
}

void MainWindow::on_spinBoxHPGained4_valueChanged()
{
    updateHPGained();
}

void MainWindow::on_spinBoxHPGained5_valueChanged()
{
    updateHPGained();
}
