#include "Character.h"

Character::Character() {
    healthPoints = 100;
    manaPoints = 100;
    damagePoints = 0;
}

void Character::setAttackDmg(int att) {
    damagePoints = att;
}

void Character::setHealthPoints(int hp) {
    healthPoints = hp;
}

void Character::setManaPoints(int mp) {
    manaPoints = mp;
}

int Character::getAttack() {
    return damagePoints;
}

int Character::getHealth() {
    return healthPoints;
}

int Character::getMana() {
    return manaPoints;
}

bool Character::isAlive() {
    if(healthPoints > 0)
        return true;
    else
        return false;
}
