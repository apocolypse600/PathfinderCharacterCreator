#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>

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

    void on_spinBoxChaBase_valueChanged();

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

    void on_spinBoxWisBase_valueChanged();

    void on_spinBoxWisInh_valueChanged();

    void on_spinBoxWisEnh_valueChanged();

    void on_spinBoxWisMisc_valueChanged();

    void on_spinBoxIntBase_valueChanged();

    void on_spinBoxIntInh_valueChanged();

    void on_spinBoxIntEnh_valueChanged();

    void on_spinBoxIntMisc_valueChanged();

    void on_spinBoxChaInh_valueChanged();

    void on_spinBoxChaEnh_valueChanged();

    void on_spinBoxChaMisc_valueChanged();

    void on_lineEditName_textChanged(const QString &charname);

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionAbout_triggered();

    void on_lineEditClassSkills1_textChanged();

    void on_lineEditClassSkills2_textChanged();

    void on_lineEditClassSkills3_textChanged();

    void on_lineEditClassSkills4_textChanged();

    void on_lineEditClassSkills5_textChanged();

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
    int calculateAttributeCost(int abilityScore) const;
    void updatePointsSpent();

    QString filename = "";
    const QString VERSION = "0.0.2";

};

#endif // MAINWINDOW_H
