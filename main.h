#ifndef MAIN_H
#define MAIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class main; }
QT_END_NAMESPACE

class main : public QMainWindow
{
    Q_OBJECT

public:
    main(QWidget *parent = nullptr);
    ~main();

    public slots:
    void afficherMasquer();


private:
    Ui::main *ui;
};
private:
    void LevelWrite();
#endif // MAIN_H
