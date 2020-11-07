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

bodyguard::~bodyguard() {

}

void bodyguard::antsAttack() {

}