//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_BODYGUARD_H
#define ANTS_VS_BEES_BODYGUARD_H

#include "../ants.h"

class bodyguard: public ants {

public:

    // Constructor
    bodyguard();

    // Copy Constructor
    bodyguard(bodyguard &orig);

    // Destructor
    ~bodyguard();

    // Utility Functions
    void antsAttack();

};


#endif //ANTS_VS_BEES_BODYGUARD_H
