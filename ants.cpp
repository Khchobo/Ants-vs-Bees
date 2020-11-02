//
// Created by Kyle Brown on 11/1/2020.
//

#include "ants.h"

ants::ants() {
    foodCost = 0;

}

ants::ants(ants &orig) {
    this->armor = orig.armor;
    this->foodCost = orig.foodCost;
    this->symbol = orig.symbol;
}

ants::~ants() {

}