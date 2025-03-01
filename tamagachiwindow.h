#ifndef TAMAGACHIWINDOW_H
#define TAMAGACHIWINDOW_H
#include "tamagochi.h"
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QTimer>
class TamagachiWindow : public QWidget
{
    Q_OBJECT
public:
    explicit TamagachiWindow(Tamagochi* l);
private:
    QTimer timer;
    Tamagochi* cheburek;
    QLabel* Picture;
    QLabel* Name;
    QLabel* Food;
    QLabel* Health;
    QLabel* Happiness;
    QGridLayout* lt;
    QVBoxLayout* vbxlt;
    QPushButton* fd;
    QPushButton* hl;
    QPushButton* pl;
protected slots:
    void feed();
    void play();
    void heal();
    void update();
signals:
};

#endif // TAMAGACHIWINDOW_H
