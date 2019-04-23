#include "Character.h"
#include <iostream>

Character::Character() {
    name = "No name";
    healthPoints = 100;
    manaPoints = 100;
    damagePoints = 0;
}

Character::Character(std::string new_name) {
    name = new_name;
}

Character::Character(std::string new_name, int hp, int mp, int att) {
    name = new_name;
    healthPoints = hp;
    manaPoints = mp;
    damagePoints = att;
}

Character::~Character() {

}

void Character::showName() {
    std::cout << name << std::endl;
}

void Character::setAttackDamage(int att) {
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
