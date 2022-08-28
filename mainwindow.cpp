#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), compteur1(0), timer (new QTimer), compteur2(0), i(0)
{
    ui->setupUi(this);
    ui->lcdNumber->display(0);
    ui->lcdNumber_2->display(0);
    ui->lcdNumber_3->display(0);
    ui->lcdNumber_4->display(0);

    connect(ui->pushButton,&QPushButton::clicked,this, &MainWindow::mon_action);

    timer->start(1000);
    connect(timer, &QTimer::timeout, this, &MainWindow::action_timer);

    connect(ui->pushButton_3, &QPushButton::clicked,this, &MainWindow::random);

    connect(ui->pushButton_4, &QPushButton::clicked,this, &MainWindow::tabl);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mon_action()
{
    //incrémenter le compteur a chaque clic du bouton
    compteur1++;
    ui->lcdNumber->display(compteur1);
}


void MainWindow::action_timer()
{
    //A chaque tick, incrémenter le compteur et afficher sur lcd2
    static int compteur=0;
    compteur++;
    ui->lcdNumber_2->display(compteur);
}

void MainWindow::random()
{
    compteur2 = (rand() % 100 +1);
            ui->lcdNumber_3->display(compteur2);
}

void MainWindow::tabl()
{
    i=0;
    int tab[] = {5, 14, 17 ,65, 2};
    tab[i++];
    ui->lcdNumber_4->display(tab[i]);
}
