//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_BUGS_H
#define ANTS_VS_BEES_BUGS_H

#include <string>

class bugs {

public:

    // Constructor
    bugs();

    // Copy Constructor
    bugs(bugs &orig);

    bugs & operator=(const bugs &right);

    bugs(nullptr_t pVoid);

// Destructor
    ~bugs();

    int armor;

    int damage;

    // symbol used to represent as a character on the game board
    std::string symbol;

    // This one will need some thought, this is placeholder
    bool move(int xCoord);

    bool isVacant;

    int getArmor();
    void setArmor(int currArmor);
};


#endif //ANTS_VS_BEES_BUGS_H
