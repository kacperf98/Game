#include "Character.h"
#include <iostream>

// Use this constructor after creating DB to set all parameters if account doesn't exist
Character::Character() {
    name = "Test";
    health_points = 200;
    mana_points = 100;
    damage_points = 30;
}

//Parameters for first level Character
Character::Character(std::string new_name) {
    name = new_name;
    health_points = 200;
    mana_points = 100;
    damage_points = 20;
}

// Use this constructor after creating DB to set all parameters if account exists
Character::Character(std::string new_name, int hp, int mp, int att) {
    name = new_name;
    health_points = hp;
    mana_points = mp;
    damage_points = att;
}

void Character::setName(std::string new_name) {
    name = new_name;
}

void Character::setAttackDamage(int att) {
    damage_points = att;
}

void Character::setHealthPoints(int hp) {
    health_points = hp;
}

void Character::setManaPoints(int mp) {
    mana_points = mp;
}

std::string Character::getName() {
    return name;
}

int Character::getAttack() {
    return damage_points;
}

int Character::getHealth() {
    return health_points;
}

int Character::getMana() {
    return mana_points;
}

bool Character::isAlive() {
    if(health_points > 0)
        return true;
    else
        return false;
}
