#ifndef SUBWINDOW_H
#define SUBWINDOW_H
#include <QTimer>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QVector>
#include <QPushButton>
#include <QGridLayout>
#include "tamagochi.h"

#include "tamagachiwindow.h"
class SubWindow : public QWidget
{
    Q_OBJECT
public:
    explicit SubWindow(int number);
private:
    int n;

    QGridLayout layout;
    //QVector<QVBoxLayout*> lts;
    QVector<QLabel*> labels;
    QVector<QPushButton*> buttons;
    QVector<Tamagochi*> tamatamas;
    TamagachiWindow* tw;
    QTimer timer;
protected slots:
    void window();
    void update();

signals:
};

#endif // SUBWINDOW_H
