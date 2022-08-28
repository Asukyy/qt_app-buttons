#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void mon_action();
    void action_timer();
    void random();
    void tabl();

private:
    Ui::MainWindow *ui;
    int compteur1;
    int compteur2;
    int i;

    QTimer *timer;
};
#endif // MAINWINDOW_H
