//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_ANTS_H
#define ANTS_VS_BEES_ANTS_H

#include "bugs.h"
#include <string>
#include <vector>

class ants: public bugs {

public:

    // Constructor
    ants();

    // Queen Constructor
    ants(bool isQueen);

    // Copy Constructor
    ants(ants &orig);

    // Equals Overload
    ants & operator=(const ants &right);

    // Destructor
    ~ants();

    int foodCost;

};


#endif //ANTS_VS_BEES_ANTS_H
