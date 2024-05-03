#include "character.h"

Character::Character(std::string name, int hp, int strength):_name(name), _hp(hp), _strength(strength) {}

std::string Character::getName(){
    return _name;
}

void Character::setName(std::string name){
    _name = name;
}

int Character::getHp(){
    return _hp;
}

void Character::setHp(int hp){
    _hp = hp;
}

int Character::getStrength(){
    return _strength;
}

void Character::setStrength(int strength){
    _strength = strength;
}
