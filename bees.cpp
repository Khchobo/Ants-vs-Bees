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

bees::bees(bees &orig) {
    this->armor = orig.armor;
    this->damage = orig.damage;
}

bees::~bees() {

}