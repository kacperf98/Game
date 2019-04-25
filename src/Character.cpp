#include "Character.h"
#include <iostream>

// Use this constructor after creating DB to set all parameters if account doesn't exist
Character::Character() {
    name = "No name";
    healthPoints = 0;
    manaPoints = 0;
    damagePoints = 0;
}

// After creating DB delete this constructor
Character::Character(std::string new_name) {
    name = new_name;
    healthPoints = 100;
    manaPoints = 100;
    damagePoints = 10;
}

// Use this constructor after creating DB to set all parameters if account exists
Character::Character(std::string new_name, int hp, int mp, int att) {
    name = new_name;
    healthPoints = hp;
    manaPoints = mp;
    damagePoints = att;
}

void Character::setName(std::string new_name) {
    name = new_name;
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

std::string Character::getName() {
    return name;
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
