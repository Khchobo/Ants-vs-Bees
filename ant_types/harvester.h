//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_HARVESTER_H
#define ANTS_VS_BEES_HARVESTER_H

#include "../ants.h"

class harvester: public ants {

public:

    // Constructor
    harvester();

    // Copy Constructor
    harvester(harvester &orig);

    // Destructor
    ~harvester();

    // Utility Functions
    void antsAttack();
};


#endif //ANTS_VS_BEES_HARVESTER_H
