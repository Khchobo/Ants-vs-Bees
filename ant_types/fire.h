//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_FIRE_H
#define ANTS_VS_BEES_FIRE_H

#include "../ants.h"

class fire: public ants {

public:

    // Constructor
    fire();

    // Copy Constructor
    fire(fire &orig);

    // Equals Overload
    fire & operator=(const fire &right);

    // Destructor
    ~fire();

    // Utility Functions
    void antsAttack();
};


#endif //ANTS_VS_BEES_FIRE_H
