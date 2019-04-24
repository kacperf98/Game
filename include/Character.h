#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>

class Character {
public:
    //Constructors and Destructor
    Character();
    Character(std::string new_name);
    Character(std::string new_name, int hp, int mp, int att);
    ~Character();

    //Getters
    std::string getName();
    int getAttack();
    int getHealth();
    int getMana();

    //Setters
    void setName(std::string new_name);
    void setAttackDamage(int att);
    void setHealthPoints(int hp);
    void setManaPoints(int mp);

    //Other
    bool isAlive();

private:
    int healthPoints;
    int manaPoints;
    int damagePoints;
    std::string name;
};

#endif // _CHARACTER_H_
