//
// Created by Kyle Brown on 11/1/2020.
//

#include "bugs.h"

bugs::bugs() {
    armor = 0;
    std::string symbol;
}

bugs::bugs(bugs &orig) {
    this->armor = orig.armor;
    this->symbol = orig.symbol;
}

bugs::~bugs() {

}

// this one might be tricky
bool bugs::move(int xCoord) {

}