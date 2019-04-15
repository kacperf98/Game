#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <string>

class Character {
    public:
        Character();
        Character(std::string name, int hp, int mp, int att);
        int getAttack();
        int getHealth();
        int getMana();
        void setAttackDmg(int att);
        void setHealthPoints(int hp);
        void setManaPoints(int mp);
        bool isAlive();

    private:
        int healthPoints;
        int manaPoints;
        int damagePoints;
        std::string name;
};

#endif // CHARACTER_H_
