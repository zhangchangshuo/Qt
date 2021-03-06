#include "mainwindow.h"
#include<QtDebug>
#include<QFile>
#include<QDataStream>
#include<QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    fileFun();
}

MainWindow::~MainWindow()
{
}

void MainWindow::fileFun()
{
    QFile file("binary.dat");
    file.open(QIODevice::WriteOnly|QIODevice::Truncate);
    QDataStream out(&file);
    out<<QString("Peter Parker");
    out<<QDate::fromString("1996/09/25","yyyy/MM/dd");
    out<<(qint32)23;
    file.close();
    file.setFileName("binary.dat");
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"error!";
        return;
    }
    QDataStream in(&file);
    QString name;
    QDate birthday;
    qint32 age;
    in>>name>>birthday>>age;
    qDebug()<<name<<birthday<<age;
    file.close();
}
