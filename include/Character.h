#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <iostream>
#include <string>

class Character {
public:
    Character(std::string new_name = "None", int hp = 50, int mp = 0, int att = 5);
    std::string getName();
    int getAttack();
    int getHealth();
    int getMana();
    void setName(std::string new_name);
    void setAttackDamage(int att);
    void setHealthPoints(int hp);
    void setManaPoints(int mp);
    bool isAlive();

private:
    std::string name;
    int health_points;
    int mana_points;
    int damage_points;
    //Add levels for Character
};

#endif // _CHARACTER_H_
