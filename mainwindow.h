#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include "manualdiceroller.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionExit_triggered();

    void on_spinBoxStrBase_valueChanged();
    void on_spinBoxStrInh_valueChanged();
    void on_spinBoxStrEnh_valueChanged();
    void on_spinBoxStrMisc_valueChanged();

    void on_spinBoxDexBase_valueChanged();
    void on_spinBoxDexInh_valueChanged();
    void on_spinBoxDexEnh_valueChanged();
    void on_spinBoxDexMisc_valueChanged();

    void on_spinBoxConBase_valueChanged();
    void on_spinBoxConInh_valueChanged();
    void on_spinBoxConEnh_valueChanged();
    void on_spinBoxConMisc_valueChanged();

    void on_spinBoxIntBase_valueChanged();
    void on_spinBoxIntInh_valueChanged();
    void on_spinBoxIntEnh_valueChanged();
    void on_spinBoxIntMisc_valueChanged();

    void on_spinBoxWisBase_valueChanged();
    void on_spinBoxWisInh_valueChanged();
    void on_spinBoxWisEnh_valueChanged();
    void on_spinBoxWisMisc_valueChanged();

    void on_spinBoxChaBase_valueChanged();
    void on_spinBoxChaInh_valueChanged();
    void on_spinBoxChaEnh_valueChanged();
    void on_spinBoxChaMisc_valueChanged();

    void on_lineEditName_textChanged(const QString &charname);

    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_As_triggered();
    void on_actionAbout_triggered();

    void on_spinBoxClassSkills1_valueChanged();
    void on_spinBoxClassSkills2_valueChanged();
    void on_spinBoxClassSkills3_valueChanged();
    void on_spinBoxClassSkills4_valueChanged();
    void on_spinBoxClassSkills5_valueChanged();

    void on_spinBoxClassBAB1_valueChanged();
    void on_spinBoxClassBAB2_valueChanged();
    void on_spinBoxClassBAB3_valueChanged();
    void on_spinBoxClassBAB4_valueChanged();
    void on_spinBoxClassBAB5_valueChanged();

    void on_spinBoxClassFortSave1_valueChanged();
    void on_spinBoxClassFortSave2_valueChanged();
    void on_spinBoxClassFortSave3_valueChanged();
    void on_spinBoxClassFortSave4_valueChanged();
    void on_spinBoxClassFortSave5_valueChanged();

    void on_spinBoxClassRefSave1_valueChanged();
    void on_spinBoxClassRefSave2_valueChanged();
    void on_spinBoxClassRefSave3_valueChanged();
    void on_spinBoxClassRefSave4_valueChanged();
    void on_spinBoxClassRefSave5_valueChanged();

    void on_spinBoxClassWillSave1_valueChanged();
    void on_spinBoxClassWillSave2_valueChanged();
    void on_spinBoxClassWillSave3_valueChanged();
    void on_spinBoxClassWillSave4_valueChanged();
    void on_spinBoxClassWillSave5_valueChanged();

    void on_spinBoxClassLevels1_valueChanged();
    void on_spinBoxClassLevels2_valueChanged();
    void on_spinBoxClassLevels3_valueChanged();
    void on_spinBoxClassLevels4_valueChanged();
    void on_spinBoxClassLevels5_valueChanged();

    void on_spinBoxHPGained1_valueChanged();
    void on_spinBoxHPGained2_valueChanged();
    void on_spinBoxHPGained3_valueChanged();
    void on_spinBoxHPGained4_valueChanged();
    void on_spinBoxHPGained5_valueChanged();

    void on_actionDice_Roller_triggered();

private:
    Ui::MainWindow *ui;
    void updateStr();
    void updateDex();
    void updateCon();
    void updateInt();
    void updateWis();
    void updateCha();
    void resetValues();
    void updateClassSkills();
    void updateClassBAB();
    void updateClassFortSave();
    void updateClassRefSave();
    void updateClassWillSave();
    void updateClassLevels();
    void updateHPGained();
    int calculateAttributeCost(int abilityScore) const;
    void updatePointsSpent();

    ManualDiceRoller *manualDiceRollerDialog;

    QString filename = "";
    const QString VERSION = "0.0.2";
};

#endif // MAINWINDOW_H
