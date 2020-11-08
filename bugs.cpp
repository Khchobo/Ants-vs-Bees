//
// Created by Kyle Brown on 11/1/2020.
//

#include "bugs.h"

bugs::bugs() {
    armor = 0;
    damage = 0;
    symbol = "";
    isVacant = true;
}

bugs::bugs(const bugs &orig) {
    this->armor = orig.armor;
    this->symbol = orig.symbol;
    this->damage = orig.damage;
    this->isVacant = orig.isVacant;
}

bugs & bugs::operator=(const bugs &right) {
    if (&right == this)
        return (*this);

    this->armor = right.armor;
    this->symbol = right.symbol;
    this->damage = right.damage;
    this->isVacant = right.isVacant;

    return (*this);
}

// Primitive data types are handled implicitly so there is nothing to destruct
bugs::~bugs() {

}