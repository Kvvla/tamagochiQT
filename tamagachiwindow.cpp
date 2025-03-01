#include "tamagachiwindow.h"

TamagachiWindow::TamagachiWindow(Tamagochi* l)
{
    lt = new QGridLayout();
    this->setLayout(lt);
    Picture=new QLabel();
    Picture->setPixmap(QPixmap(l->get_pic()).scaled(300,300));
    lt->addWidget(Picture, 1, 1);
    vbxlt=new QVBoxLayout();
    Name = new QLabel(l->get_name());
    Food = new QLabel("Food level: "+QString::number(l->get_food()));
    Health = new QLabel("Health level: "+QString::number(l->get_health()));
    Happiness = new QLabel("Happiness level: "+QString::number(l->get_happiness()));
    fd = new QPushButton("Feed");
    hl = new QPushButton("Heal");
    pl = new QPushButton("Play");
    vbxlt->addWidget(Name);
    vbxlt->addWidget(Food);
    vbxlt->addWidget(fd);
    vbxlt->addWidget(Health);
    vbxlt->addWidget(hl);
    vbxlt->addWidget(Happiness);
    vbxlt->addWidget(pl);
    lt->addLayout(vbxlt, 1, 2);
    cheburek=l;
    connect(fd, SIGNAL(clicked(bool)), this, SLOT(feed()));
    connect(hl, SIGNAL(clicked(bool)), this, SLOT(heal()));
    connect(pl, SIGNAL(clicked(bool)), this, SLOT(play()));
    connect(&timer, SIGNAL(timeout()), this, SLOT(update()));
    timer.start(1000);
}
void TamagachiWindow::feed(){
    cheburek->feed();
    Food->setText("Food level: "+QString::number(cheburek->get_food()));
}
void TamagachiWindow::heal(){

    cheburek->heal();
    Health->setText("Health level: "+QString::number(cheburek->get_health()));
}
void TamagachiWindow::play(){
    cheburek->play();
    Happiness->setText("Happiness level: "+QString::number(cheburek->get_happiness()));
}
void TamagachiWindow::update(){
    Food->setText("Food level: "+QString::number(cheburek->get_food()));
    Health->setText("Health level: "+QString::number(cheburek->get_health()));
    Happiness->setText("Happiness level: "+QString::number(cheburek->get_happiness()));

}
