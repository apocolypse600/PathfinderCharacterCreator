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

    // Stats tab
    connect(ui->spinBoxStrBase, SIGNAL(valueChanged(int)),this,SLOT(updateStr()));
    connect(ui->spinBoxStrEnh, SIGNAL(valueChanged(int)),this,SLOT(updateStr()));
    connect(ui->spinBoxStrInh, SIGNAL(valueChanged(int)),this,SLOT(updateStr()));
    connect(ui->spinBoxStrMisc, SIGNAL(valueChanged(int)),this,SLOT(updateStr()));

    connect(ui->spinBoxDexBase, SIGNAL(valueChanged(int)),this,SLOT(updateDex()));
    connect(ui->spinBoxDexEnh, SIGNAL(valueChanged(int)),this,SLOT(updateDex()));
    connect(ui->spinBoxDexInh, SIGNAL(valueChanged(int)),this,SLOT(updateDex()));
    connect(ui->spinBoxDexMisc, SIGNAL(valueChanged(int)),this,SLOT(updateDex()));

    connect(ui->spinBoxConBase, SIGNAL(valueChanged(int)),this,SLOT(updateCon()));
    connect(ui->spinBoxConEnh, SIGNAL(valueChanged(int)),this,SLOT(updateCon()));
    connect(ui->spinBoxConInh, SIGNAL(valueChanged(int)),this,SLOT(updateCon()));
    connect(ui->spinBoxConMisc, SIGNAL(valueChanged(int)),this,SLOT(updateCon()));

    connect(ui->spinBoxIntBase, SIGNAL(valueChanged(int)),this,SLOT(updateInt()));
    connect(ui->spinBoxIntEnh, SIGNAL(valueChanged(int)),this,SLOT(updateInt()));
    connect(ui->spinBoxIntInh, SIGNAL(valueChanged(int)),this,SLOT(updateInt()));
    connect(ui->spinBoxIntMisc, SIGNAL(valueChanged(int)),this,SLOT(updateInt()));

    connect(ui->spinBoxWisBase, SIGNAL(valueChanged(int)),this,SLOT(updateWis()));
    connect(ui->spinBoxWisEnh, SIGNAL(valueChanged(int)),this,SLOT(updateWis()));
    connect(ui->spinBoxWisInh, SIGNAL(valueChanged(int)),this,SLOT(updateWis()));
    connect(ui->spinBoxWisMisc, SIGNAL(valueChanged(int)),this,SLOT(updateWis()));

    connect(ui->spinBoxChaBase, SIGNAL(valueChanged(int)),this,SLOT(updateCha()));
    connect(ui->spinBoxChaEnh, SIGNAL(valueChanged(int)),this,SLOT(updateCha()));
    connect(ui->spinBoxChaInh, SIGNAL(valueChanged(int)),this,SLOT(updateCha()));
    connect(ui->spinBoxChaMisc, SIGNAL(valueChanged(int)),this,SLOT(updateCha()));

    //Classes Tab
    connect(ui->spinBoxClassSkills1, SIGNAL(valueChanged(int)),this,SLOT(updateClassSkills()));
    connect(ui->spinBoxClassSkills2, SIGNAL(valueChanged(int)),this,SLOT(updateClassSkills()));
    connect(ui->spinBoxClassSkills3, SIGNAL(valueChanged(int)),this,SLOT(updateClassSkills()));
    connect(ui->spinBoxClassSkills4, SIGNAL(valueChanged(int)),this,SLOT(updateClassSkills()));
    connect(ui->spinBoxClassSkills5, SIGNAL(valueChanged(int)),this,SLOT(updateClassSkills()));

    connect(ui->spinBoxClassBAB1, SIGNAL(valueChanged(int)),this,SLOT(updateClassBAB()));
    connect(ui->spinBoxClassBAB2, SIGNAL(valueChanged(int)),this,SLOT(updateClassBAB()));
    connect(ui->spinBoxClassBAB3, SIGNAL(valueChanged(int)),this,SLOT(updateClassBAB()));
    connect(ui->spinBoxClassBAB4, SIGNAL(valueChanged(int)),this,SLOT(updateClassBAB()));
    connect(ui->spinBoxClassBAB5, SIGNAL(valueChanged(int)),this,SLOT(updateClassBAB()));

    connect(ui->spinBoxClassFortSave1, SIGNAL(valueChanged(int)),this,SLOT(updateClassFortSave()));
    connect(ui->spinBoxClassFortSave2, SIGNAL(valueChanged(int)),this,SLOT(updateClassFortSave()));
    connect(ui->spinBoxClassFortSave3, SIGNAL(valueChanged(int)),this,SLOT(updateClassFortSave()));
    connect(ui->spinBoxClassFortSave4, SIGNAL(valueChanged(int)),this,SLOT(updateClassFortSave()));
    connect(ui->spinBoxClassFortSave5, SIGNAL(valueChanged(int)),this,SLOT(updateClassFortSave()));

    connect(ui->spinBoxClassRefSave1, SIGNAL(valueChanged(int)),this,SLOT(updateClassRefSave()));
    connect(ui->spinBoxClassRefSave2, SIGNAL(valueChanged(int)),this,SLOT(updateClassRefSave()));
    connect(ui->spinBoxClassRefSave3, SIGNAL(valueChanged(int)),this,SLOT(updateClassRefSave()));
    connect(ui->spinBoxClassRefSave4, SIGNAL(valueChanged(int)),this,SLOT(updateClassRefSave()));
    connect(ui->spinBoxClassRefSave5, SIGNAL(valueChanged(int)),this,SLOT(updateClassRefSave()));

    connect(ui->spinBoxClassWillSave1, SIGNAL(valueChanged(int)),this,SLOT(updateClassWillSave()));
    connect(ui->spinBoxClassWillSave2, SIGNAL(valueChanged(int)),this,SLOT(updateClassWillSave()));
    connect(ui->spinBoxClassWillSave3, SIGNAL(valueChanged(int)),this,SLOT(updateClassWillSave()));
    connect(ui->spinBoxClassWillSave4, SIGNAL(valueChanged(int)),this,SLOT(updateClassWillSave()));
    connect(ui->spinBoxClassWillSave5, SIGNAL(valueChanged(int)),this,SLOT(updateClassWillSave()));

    connect(ui->spinBoxClassLevels1, SIGNAL(valueChanged(int)),this,SLOT(updateClassLevels()));
    connect(ui->spinBoxClassLevels2, SIGNAL(valueChanged(int)),this,SLOT(updateClassLevels()));
    connect(ui->spinBoxClassLevels3, SIGNAL(valueChanged(int)),this,SLOT(updateClassLevels()));
    connect(ui->spinBoxClassLevels4, SIGNAL(valueChanged(int)),this,SLOT(updateClassLevels()));
    connect(ui->spinBoxClassLevels5, SIGNAL(valueChanged(int)),this,SLOT(updateClassLevels()));

    connect(ui->spinBoxHPGained1, SIGNAL(valueChanged(int)),this,SLOT(updateHPGained()));
    connect(ui->spinBoxHPGained2, SIGNAL(valueChanged(int)),this,SLOT(updateHPGained()));
    connect(ui->spinBoxHPGained3, SIGNAL(valueChanged(int)),this,SLOT(updateHPGained()));
    connect(ui->spinBoxHPGained4, SIGNAL(valueChanged(int)),this,SLOT(updateHPGained()));
    connect(ui->spinBoxHPGained5, SIGNAL(valueChanged(int)),this,SLOT(updateHPGained()));

    //Skills tab
    ui->tableSkills->horizontalHeader()->setResizeMode(QHeaderView::Stretch);

    for(int i = 0; i < NUMBEROFSKILLS; i++)
    {
        QSpinBox *spinBoxClassRanks = new QSpinBox;
        QSpinBox *spinBoxClassMisc = new QSpinBox;
        QCheckBox *checkBoxClassSkill = new QCheckBox;

        /*QWidget* wdg = new QWidget;
        QHBoxLayout* layout = new QHBoxLayout(wdg);
        layout->addWidget(checkBoxClassSkill);
        layout->setAlignment( Qt::AlignCenter );
        layout->setSpacing( 0 );
        wdg->setLayout(layout);*/

        ui->tableSkills->setCellWidget(i,0,checkBoxClassSkill);
        ui->tableSkills->setCellWidget(i,3,spinBoxClassRanks);
        ui->tableSkills->setCellWidget(i,5,spinBoxClassMisc);

        connect( spinBoxClassRanks, SIGNAL(valueChanged(int)),this,SLOT(updateClassTable()) );
        connect( spinBoxClassMisc, SIGNAL(valueChanged(int)),this,SLOT(updateClassTable()) );
        connect( checkBoxClassSkill, SIGNAL(clicked()),this,SLOT(updateClassTable()) );
    }

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

    for(int row = 0; row < NUMBEROFSKILLS; row++)
    {
        static_cast<QCheckBox *>(ui->tableSkills->cellWidget(row,0))->setChecked(false);
        //column 1 is the name of the class skill
        ui->tableSkills->item(row,2)->setText("0");
        static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,3))->setValue(0);
        ui->tableSkills->item(row,4)->setText("0");
        static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,5))->setValue(0);
    }

    updateClassTable();

}

void MainWindow::on_actionNew_triggered()
{
    resetValues();
}

void MainWindow::updateStr()
{
    int newStrTotal = ui->spinBoxStrBase->value() + ui->spinBoxStrInh->value()
            + ui->spinBoxStrEnh->value() + ui->spinBoxStrMisc->value();

    QString newStrMod = QString::number(newStrTotal/2 -5);

    ui->lineEditStrTotal->setText(QString::number(newStrTotal));
    ui->lineEditStrMod->setText(newStrMod);

    ui->tableSkills->item(3,4)->setText(newStrMod);
    ui->tableSkills->item(33,4)->setText(newStrMod);

    updatePointsSpent();
}

void MainWindow::updateDex()
{
    int newDexTotal = ui->spinBoxDexBase->value() + ui->spinBoxDexInh->value()
            + ui->spinBoxDexEnh->value() + ui->spinBoxDexMisc->value();

    QString newDexMod = QString::number(newDexTotal/2 -5);

    ui->lineEditDexTotal->setText(QString::number(newDexTotal));
    ui->lineEditDexMod->setText(newDexMod);

    ui->tableSkills->item(0,4)->setText(newDexMod);
    ui->tableSkills->item(6,4)->setText(newDexMod);
    ui->tableSkills->item(8,4)->setText(newDexMod);
    ui->tableSkills->item(9,4)->setText(newDexMod);
    ui->tableSkills->item(27,4)->setText(newDexMod);
    ui->tableSkills->item(29,4)->setText(newDexMod);
    ui->tableSkills->item(31,4)->setText(newDexMod);

    updatePointsSpent();
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

    QString newIntMod = QString::number(newIntTotal/2 -5);

    ui->lineEditIntTotal->setText(QString::number(newIntTotal));
    ui->lineEditIntMod->setText(newIntMod);

    ui->tableSkills->item(1,4)->setText(newIntMod);
    ui->tableSkills->item(4,4)->setText(newIntMod);
    ui->tableSkills->item(30,4)->setText(newIntMod);

    //All the knowledge skills are based off int, + linguistics (23)
    for(int i = 13 ; i<=23 ; i++)
    {
        ui->tableSkills->item(i,4)->setText(newIntMod);
    }

    updatePointsSpent();
}

void MainWindow::updateWis()
{
    int newWisTotal = ui->spinBoxWisBase->value() + ui->spinBoxWisInh->value()
            + ui->spinBoxWisEnh->value() + ui->spinBoxWisMisc->value();

    QString newWisMod = QString::number(newWisTotal/2 -5);

    ui->lineEditWisTotal->setText(QString::number(newWisTotal));
    ui->lineEditWisMod->setText(newWisMod);

    ui->tableSkills->item(11,4)->setText(newWisMod);
    ui->tableSkills->item(24,4)->setText(newWisMod);
    ui->tableSkills->item(26,4)->setText(newWisMod);
    ui->tableSkills->item(28,4)->setText(newWisMod);
    ui->tableSkills->item(32,4)->setText(newWisMod);

    updatePointsSpent();
}

void MainWindow::updateCha()
{
    int newChaTotal = ui->spinBoxChaBase->value() + ui->spinBoxChaInh->value()
            + ui->spinBoxChaEnh->value() + ui->spinBoxChaMisc->value();

    QString newChaMod = QString::number(newChaTotal/2 -5);

    ui->lineEditChaTotal->setText(QString::number(newChaTotal));
    ui->lineEditChaMod->setText(newChaMod);

    ui->tableSkills->item(2,4)->setText(newChaMod);
    ui->tableSkills->item(5,4)->setText(newChaMod);
    ui->tableSkills->item(7,4)->setText(newChaMod);
    ui->tableSkills->item(10,4)->setText(newChaMod);
    ui->tableSkills->item(12,4)->setText(newChaMod);
    ui->tableSkills->item(25,4)->setText(newChaMod);
    ui->tableSkills->item(34,4)->setText(newChaMod);

    updatePointsSpent();
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

            in.readLine();

            for(int row = 0; row < NUMBEROFSKILLS; row++)
            {
                if ( in.readLine() == "true")
                {
                    static_cast<QCheckBox *>(ui->tableSkills->cellWidget(row,0))->setChecked(true);
                }
                else
                {
                    static_cast<QCheckBox *>(ui->tableSkills->cellWidget(row,0))->setChecked(false);
                }
                //column 1 is the name of the class skill
                ui->tableSkills->item(row,2)->setText(in.readLine());
                static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,3))->setValue(in.readLine().toInt());
                ui->tableSkills->item(row,4)->setText(in.readLine());
                static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,5))->setValue(in.readLine().toInt());
            }

            sFile.close();
        }

        ui->statusBar->showMessage(filename + " successfully opened",5000); //timeout in milisec

        updateClassTable();
        updatePointsSpent();
    }
}

void MainWindow::on_actionSave_triggered()
{
    if(filename != "")
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

                out << '\n';

                for(int row = 0; row < NUMBEROFSKILLS; row++)
                {
                    if ( static_cast<QCheckBox *>(ui->tableSkills->cellWidget(row,0))->isChecked())
                    {
                        out << "true\n";
                    }
                    else
                    {
                        out << "false\n";
                    }
                    //column 1 is the name of the class skill
                    out << ui->tableSkills->item(row,2)->text() << '\n'
                        << static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,3))->value() << '\n'
                        << ui->tableSkills->item(row,4)->text() << '\n'
                        << static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,5))->value() << '\n';
                }


            sFile.flush();
            sFile.close();

            ui->statusBar->showMessage(filename + " successfully saved",5000); //timeout in milisec
        }
    }
    else
    {
        on_actionSave_As_triggered();
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
    ui->lineEditSkillPointsAvailable->setText(QString::number(newValue));
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

void MainWindow::on_actionDice_Roller_triggered()
{
    ManualDiceRoller *manualDiceRollerDialog = new ManualDiceRoller(this);
    manualDiceRollerDialog->show();
}

void MainWindow::updateClassTable()
{
    int totalPoints = 0;
    for(int row = 0; row < NUMBEROFSKILLS; row++)
    {
        int bonus = 0;// bonus is the trained skill bonus (for class skills). It only counts if atleast one skill point is invested
        if (static_cast<QCheckBox *>(ui->tableSkills->cellWidget(row,0))->isChecked() && static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,3))->value() >= 1)
        {
            bonus = 3;
        }

        int ranks = static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,3))->value();
        totalPoints += ranks;

        ui->tableSkills->item(row,2)->setText(QString::number(ranks + static_cast<QSpinBox *>(ui->tableSkills->cellWidget(row,5))->value() + ui->tableSkills->item(row,4)->text().toInt() + bonus));
    }

    ui->lineEditSkillPointsSpent->setText(QString::number(totalPoints));
}
