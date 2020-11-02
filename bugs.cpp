//
// Created by Kyle Brown on 11/1/2020.
//

#include "bugs.h"

bugs::bugs() {
    armor = 0;
    damage = 0;
    std::string symbol;
}

bugs::bugs(bugs &orig) {
    this->armor = orig.armor;
    this->symbol = orig.symbol;
    this->damage = orig.damage;
}

bugs::~bugs() {

}

// this one might be tricky
bool bugs::move(int xCoord) {

}

int bugs::getArmor() {
    return this->armor;
}

void bugs::setArmor(int currArmor) {
    this->armor = currArmor;
}