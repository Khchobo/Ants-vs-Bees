//
// Created by Kyle Brown on 11/1/2020.
//

#include "bees.h"

bees::bees() {
    armor = 3;
    damage = 1;
    isVacant = false;
    symbol = "Bee";
}

bees::bees(const bees &orig) {
    this->armor = orig.armor;
    this->damage = orig.damage;
    this->symbol = orig.symbol;
    this->isVacant = orig.isVacant;
}

// Primitive data types are handled implicitly so there is nothing to destruct
bees::~bees() {

}