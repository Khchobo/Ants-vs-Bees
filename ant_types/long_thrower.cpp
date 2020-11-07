//
// Created by Kyle Brown on 11/1/2020.
//

#include "long_thrower.h"

long_thrower::long_thrower() {
    foodCost = 3;
    armor = 1;
    symbol = "L-Throw";
}

long_thrower::long_thrower(long_thrower &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

long_thrower::~long_thrower() {

}

void long_thrower::antsAttack() {

}