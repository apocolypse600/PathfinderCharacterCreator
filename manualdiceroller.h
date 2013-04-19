#ifndef MANUALDICEROLLER_H
#define MANUALDICEROLLER_H

#include <QDialog>
#include <cstdlib>
#include <QString>
#include <QClipboard>

namespace Ui {
class ManualDiceRoller;
}

class ManualDiceRoller : public QDialog
{
    Q_OBJECT
    
public:
    explicit ManualDiceRoller(QWidget *parent = 0);
    ~ManualDiceRoller();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ManualDiceRoller *ui;
    QString lastRoll = "";
    QClipboard *clipboard;
};

#endif // MANUALDICEROLLER_H
