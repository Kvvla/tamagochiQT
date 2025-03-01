#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->button_2, SIGNAL(clicked(bool)), this, SLOT(dec()));
    connect(ui->button, SIGNAL(clicked(bool)), this, SLOT(inc()));
    connect(ui->set, SIGNAL(clicked(bool)), this, SLOT(set()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::inc()
{
    if (n<16){
    n++;
    ui->lcdNumber->display(n);
    }
}

void Widget::dec()
{
    if (n>0) {
        n--;
        ui->lcdNumber->display(n);
    }
}

void Widget::set(){
    this->subwindow = new SubWindow(n);
    this->subwindow->show();
}
