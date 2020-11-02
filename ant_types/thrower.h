//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_THROWER_H
#define ANTS_VS_BEES_THROWER_H

#include "../ants.h"

class thrower: public ants {

public:

    // Constructor
    thrower();

    // Copy Constructor
    thrower(thrower &orig);

    // Destructor
    ~thrower();
};


#endif //ANTS_VS_BEES_THROWER_H
