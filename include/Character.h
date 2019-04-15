#ifndef CHARACTER_H_
#define CHARACTER_H_


class Character {
    public:
        Character();
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
};

#endif // CHARACTER_H_
