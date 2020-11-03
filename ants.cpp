//
// Created by Kyle Brown on 11/1/2020.
//

#include "ants.h"

ants::ants() {
    foodCost = 0;
    isVacant = false;
    symbol = "A";
}

ants::ants(bool isQueen) {
    if(isQueen) {
        symbol = "Q";
    }
    foodCost = 0;
    isVacant = false;
}

ants::ants(ants &orig) {
    this->armor = orig.armor;
    this->foodCost = orig.foodCost;
    this->symbol = orig.symbol;
}

ants::~ants() {

}