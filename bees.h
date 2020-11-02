//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_BEES_H
#define ANTS_VS_BEES_BEES_H

#include "bugs.h"

class bees: public bugs {

public:

    // Constructor
    bees();

    // Copy Constructor
    bees(bees &orig);

    // Destructor
    ~bees();

    int damage;

    // This one will need some thought, this is placeholder
    bool move(int xCoord);

};


#endif //ANTS_VS_BEES_BEES_H
