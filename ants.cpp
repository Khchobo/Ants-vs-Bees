//
// Created by Kyle Brown on 11/1/2020.
//

#include "ants.h"
#include <iostream>

ants::ants() {
    foodCost = 0;
    isVacant = false;
    symbol = "";
}

ants::ants(bool isQueen) {
    if(isQueen) {
        symbol = "Q";
    }
    else {
        symbol = "";
    }
    foodCost = 0;
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