//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_NINJA_H
#define ANTS_VS_BEES_NINJA_H

#include "../ants.h"

class ninja: public ants {

public:

    // Constructor
    ninja();

    // Copy Constructor
    ninja(ninja &orig);

    // Destructor
    ~ninja();

    // Utility Functions
    void antsAttack();
};


#endif //ANTS_VS_BEES_NINJA_H
