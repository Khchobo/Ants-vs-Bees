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
    bugs(const bugs &orig);

    bugs & operator=(const bugs &right);

    // Destructor
    ~bugs();

    // Utility Functions
    int getArmor();
    void setArmor(int currArmor);

    // Fields
    int armor;
    int damage;
    bool isVacant;
    std::string symbol;
};


#endif //ANTS_VS_BEES_BUGS_H
