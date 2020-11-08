//
// Created by Kyle Brown on 11/1/2020.
//

#include "ninja.h"

ninja::ninja() {
    foodCost = 6;
    armor = 1;
    symbol = "Ninja";
}

ninja::ninja(ninja &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

ninja & ninja::operator=(const ninja &right) {
    this->foodCost = right.foodCost;
    this->armor = right.armor;
    this->symbol = right.symbol;
}

// Primitive data types are handled implicitly so there is nothing to destruct
ninja::~ninja() {

}