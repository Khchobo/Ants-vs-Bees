//
// Created by Kyle Brown on 11/7/2020.
//

#ifndef ANTS_VS_BEES_TILE_H
#define ANTS_VS_BEES_TILE_H

#include "bugs.h"
#include "ants.h"
#include "bees.h"
#include <vector>

class tile {
public:

    // Constructor
    tile();

    // Copy Constructor
    tile(tile &orig);

    // Equals Overload
    tile & operator=(tile &right);

    // Destructor
    ~tile();

    ants firstAnt;
    ants secondAnt;

    std::vector<bees> beesList;

};


#endif //ANTS_VS_BEES_TILE_H
