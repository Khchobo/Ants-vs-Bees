//
// Created by Kyle Brown on 11/1/2020.
//

#include "thrower.h"

thrower::thrower() {
    foodCost = 4;
    armor = 1;
    symbol = "Throw";
}

thrower::thrower(thrower &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

thrower::~thrower() {

}

void thrower::antsAttack() {

}