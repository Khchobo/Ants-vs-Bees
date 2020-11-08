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

    // Equals Overload
    ninja & operator=(const ninja &right);

    // Destructor
    ~ninja();

};


#endif //ANTS_VS_BEES_NINJA_H
