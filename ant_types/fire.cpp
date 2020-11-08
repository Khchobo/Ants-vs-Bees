//
// Created by Kyle Brown on 11/1/2020.
//

#include "fire.h"

fire::fire() {
    foodCost = 4;
    armor = 1;
    symbol = "Fire";
}

fire::fire(fire &orig) {
    this->foodCost = orig.foodCost;
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

fire & fire::operator=(const fire &right) {
    this->foodCost = right.foodCost;
    this->armor = right.armor;
    this->symbol = right.symbol;
}

fire::~fire() {

}

void fire::antsAttack() {

}