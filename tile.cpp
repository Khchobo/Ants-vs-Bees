//
// Created by Kyle Brown on 11/7/2020.
//

#include "tile.h"
#include <vector>

tile::tile() {
    firstAnt = ants();
    secondAnt = ants();
    beesList = std::vector<bees> (0);
}

tile::tile(tile &orig) {
    this->firstAnt = orig.firstAnt;
    this->secondAnt = orig.secondAnt;
    this->beesList = orig.beesList;
}

tile & tile::operator=( tile &right) {
    this->firstAnt = right.firstAnt;
    this->secondAnt = right.secondAnt;
    this->beesList = right.beesList;
}

/**
 * Vectors of objects allocated on the stack not the heap, the destructor
 * for each object gets implicitly called after scope is lost.
 * Similarly the firstAnt and secondAnt destructors get implicitly called.
 */
tile::~tile() {

}