#ifndef TAMAGOCHI_H
#define TAMAGOCHI_H
#include <QString>


class Tamagochi
{
private:
    int food;
    int happiness;
    int health;
    QString name;
    QString pic;
    QString names[29] = {"Abby", "Angel", "Annie", "Baby", "Bailey", "Bandit", "Bear", "Bella", "Bob", "Boo",
                        "Boots", "Bubba", "Buddy", "Buster", "Cali", "Callie", "Casper", "Charlie",
                        "Chester", "Chloe", "Cleo", "Coco", "Cookie", "Cuddles", "Daisy", "Dusty", "Felix",
                        "Fluffy", "Garfield"};

public:
    Tamagochi();
    int get_food();
    int get_happiness();
    int get_health();
    QString get_pic();
    QString get_name();
    void set_pic(QString PavelST);
    void feed();
    void play();
    void heal();
    void update();
    bool IsAlive();
};

#endif // TAMAGOCHI_H
