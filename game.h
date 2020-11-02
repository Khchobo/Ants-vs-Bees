//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_GAME_H
#define ANTS_VS_BEES_GAME_H

#include <vector>
#include <string>

class game {

public:

    // Constructor
    game();

    // Destructor
    ~game();

    void gameLoop();

    void printGameBoard();

    std::vector<std::string> gameBoard;

};
#endif //ANTS_VS_BEES_GAME_H
