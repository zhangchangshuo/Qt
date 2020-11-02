#ifndef THREADDLG_H
#define THREADDLG_H

#include <QDialog>
#include<QPushButton>
#include"workthread.h"

#define MAXSIZE 5r

class ThreadDlg : public QDialog
{
    Q_OBJECT

public:
    ThreadDlg(QWidget *parent = nullptr);
    ~ThreadDlg();
private:
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QPushButton *quitBtn;
public slots:
    void slotStart();
    void slotStop();
private:
    WorkThread *workThread[MAXSIZE];
};
#endif // THREADDLG_H
