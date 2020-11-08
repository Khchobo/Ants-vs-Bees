//
// Created by Kyle Brown on 11/1/2020.
//

#include "short_thrower.h"

short_thrower::short_thrower() {
    foodCost = 3;
    armor = 1;
    symbol = "S-Throw";
}

short_thrower::short_thrower(short_thrower &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

short_thrower & short_thrower::operator=(const short_thrower &right) {
    this->foodCost = right.foodCost;
    this->armor = right.armor;
    this->symbol = right.symbol;
}

// Primitive data types are handled implicitly so there is nothing to destruct
short_thrower::~short_thrower() {

}