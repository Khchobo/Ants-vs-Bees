//
// Created by Kyle Brown on 11/1/2020.
//

#include "ants.h"
#include <iostream>

ants::ants() {
    foodCost = 0;
    isVacant = false;
    symbol = "";
    armor = 0;
}

ants::ants(bool isQueen) {
    if(isQueen) {
        symbol = "Q";
    }

    foodCost = 0;
    armor = 1;
    isVacant = false;
}

ants::ants(ants &orig) {
    this->armor = orig.armor;
    this->foodCost = orig.foodCost;
    this->symbol = orig.symbol;
}

ants & ants::operator=(const ants &right) {
    this->armor = right.armor;
    this->foodCost = right.foodCost;
    this->symbol = right.symbol;
}

ants::~ants() {

}

void ants::antsAttack() {
}