//
// Created by Kyle Brown on 11/1/2020.
//

#include "bodyguard.h"

bodyguard::bodyguard() {
    foodCost = 4;
    armor = 2;
    symbol = "BG";
}

bodyguard::bodyguard(bodyguard &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

bodyguard & bodyguard::operator=(const bodyguard &right) {
    this->foodCost = right.foodCost;
    this->armor = right.armor;
    this->symbol = right.symbol;
}

// Primitive data types are handled implicitly so there is nothing to destruct
bodyguard::~bodyguard() {

}