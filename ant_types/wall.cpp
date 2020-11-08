//
// Created by Kyle Brown on 11/1/2020.
//

#include "wall.h"

wall::wall() {
    foodCost = 4;
    armor = 4;
    symbol = "Wall";
}

wall::wall(wall &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

wall & wall::operator=(const wall &right) {
    this->foodCost = right.foodCost;
    this->armor = right.armor;
    this->symbol = right.symbol;
}

// Primitive data types are handled implicitly so there is nothing to destruct
wall::~wall() {

}