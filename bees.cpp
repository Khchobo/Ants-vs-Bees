//
// Created by Kyle Brown on 11/1/2020.
//

#include "bees.h"

bees::bees() {
    armor = 3;
}

bees::bees(bees &orig) {
    this->armor = orig.armor;
}

bees::~bees() {

}