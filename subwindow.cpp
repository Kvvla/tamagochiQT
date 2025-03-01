#include "subwindow.h"

SubWindow::SubWindow(int number)
{
    n = number;
    this->setLayout(&layout);
    labels.resize(number);
    buttons.resize(number);
    tamatamas.resize(number);
    for (int i=0; i<number; i++){
        buttons[i]=new QPushButton();
        labels[i]=new QLabel();
        tamatamas[i]=new Tamagochi();
        QString meme=QString::number(rand()%7+1);
        labels[i]->setPixmap(QPixmap(":///imgs/"+meme+".png").scaled(100, 100));
        tamatamas[i]->set_pic(":///imgs/"+meme+".png");
        //buttons[i]->setText(tamatamas[i]->get_name());
        buttons[i]->setText(QString::number(i));
        layout.addWidget(labels[i], i/4+i/4+1, i%4);
        layout.addWidget(buttons[i], i/4+i/4+2, i%4);
        connect(buttons[i], SIGNAL(clicked()), this, SLOT(window()));

    }
    connect(&timer, SIGNAL(timeout()), this, SLOT(update()));
    timer.start(1000);
}

void SubWindow::window(){
    QPushButton *obj = (QPushButton *)this->sender();
    this->tw=new TamagachiWindow(tamatamas[obj->text().toInt()]);
    this->tw->show();
}

void SubWindow::update(){
    for (int i = 0; i < n; i++) {
        tamatamas[i]->update();
        if (!(tamatamas[i]->IsAlive())) {
            this->close();
        }
    }
}
