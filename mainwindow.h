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

    void updateStr();
    void updateDex();
    void updateCon();
    void updateInt();
    void updateWis();
    void updateCha();

    void on_lineEditName_textChanged(const QString &charname);

    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_As_triggered();
    void on_actionAbout_triggered();

    void updateClassSkills();
    void updateClassBAB();
    void updateClassFortSave();
    void updateClassRefSave();
    void updateClassWillSave();
    void updateClassLevels();
    void updateHPGained();

    void on_actionDice_Roller_triggered();

    void updateClassTable();

private:
    Ui::MainWindow *ui;


    void resetValues();

    int calculateAttributeCost(int abilityScore) const;
    void updatePointsSpent();

    ManualDiceRoller *manualDiceRollerDialog;

    const int NUMBEROFSKILLS = 35;

    QString filename = "";
    const QString VERSION = "0.0.2";
};

#endif // MAINWINDOW_H
