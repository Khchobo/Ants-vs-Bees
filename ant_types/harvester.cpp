//
// Created by Kyle Brown on 11/1/2020.
//

#include "harvester.h"

harvester::harvester() {
    foodCost = 2;
    armor = 1;
    symbol = "Harv";
}

harvester::harvester(harvester &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

harvester::~harvester() {

}

void harvester::antsAttack() {

}
