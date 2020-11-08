//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_SHORT_THROWER_H
#define ANTS_VS_BEES_SHORT_THROWER_H

#include "../ants.h"

class short_thrower: public ants {

public:

    // Constructor
    short_thrower();

    // Copy Constructor
    short_thrower(short_thrower &orig);

    // Equals Overload
    short_thrower & operator=(const short_thrower &right);

    // Destructor
    ~short_thrower();

};


#endif //ANTS_VS_BEES_SHORT_THROWER_H
