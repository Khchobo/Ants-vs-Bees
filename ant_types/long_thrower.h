//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_LONG_THROWER_H
#define ANTS_VS_BEES_LONG_THROWER_H

#include "../ants.h"

class long_thrower: public ants {

public:

    // Constructor
    long_thrower();

    // Copy Constructor
    long_thrower(long_thrower &orig);

    // Destructor
    ~long_thrower();

    // Utility Functions
    void antsAttack();
};


#endif //ANTS_VS_BEES_LONG_THROWER_H
