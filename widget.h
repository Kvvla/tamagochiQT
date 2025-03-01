#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QVector>
#include <QLabel>
#include "subwindow.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    int n=0;
    SubWindow *subwindow=nullptr;

public slots:
    void inc();
    void dec();
    void set();
};
#endif // WIDGET_H
