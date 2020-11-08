//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_WALL_H
#define ANTS_VS_BEES_WALL_H

#include "../ants.h"

class wall: public ants {

public:

    // Constructor
    wall();

    // Copy Constructor
    wall(wall &orig);

    // Equals Overload
    wall & operator=(const wall &right);

    // Destructor
    ~wall();

};


#endif //ANTS_VS_BEES_WALL_H
