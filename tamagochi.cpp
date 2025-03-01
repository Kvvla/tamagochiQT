#include "tamagochi.h"

Tamagochi::Tamagochi() {
    health=rand()%50+20;
    happiness=rand()%50+20;
    food=rand()%50+20;
    name=names[rand()%29];

}
QString Tamagochi::get_name() {
    return name;
}
int Tamagochi::get_health() {
    return health;
}

int Tamagochi::get_happiness() {
    return happiness;
}

int Tamagochi::get_food() {
    return food;
}
void Tamagochi::feed() {
    food+=10;
    if (food>100){food=100;}
}

void Tamagochi::play() {
    happiness+=10;
    if (happiness>100){happiness=100;}
}

void Tamagochi::heal() {
    health+=10;
    if (health>100){health=100;}
}

void Tamagochi::update(){
    health--;
    food--;
    happiness--;
}

bool Tamagochi::IsAlive(){
    return (food>0&&health>0&&happiness>0);
}

void Tamagochi::set_pic(QString PavelST){
    pic=PavelST;
}
QString Tamagochi::get_pic(){
    return pic;
}





