#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QLabel>
#include<QPushButton>

class TimeServer;
class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
public slots:
    void slotShow();
private:
    TimeServer *timeServer;
    int count;
    QLabel *Label1;
    QLabel *Label2;
    QPushButton *quitBtn;
};
#endif // DIALOG_H
