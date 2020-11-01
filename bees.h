//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_BEES_H
#define ANTS_VS_BEES_BEES_H


class bees {

public:

    // Constructor
    bees();

    // Copy Constructor
    bees(&orig);

    // Destructor
    ~bees();


    int armor;
    int damage;

    // This one will need some thought, this is placeholder
    void move(int xCoord);

};


#endif //ANTS_VS_BEES_BEES_H
