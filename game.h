//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_GAME_H
#define ANTS_VS_BEES_GAME_H

#include <vector>
#include <string>
#include "bugs.h"

class game {

    int foodBank;

public:

    // Constructor
    game();

    // Destructor
    ~game();

    void gameLoop();

    // Utility Functions
    void printGameBoard();
    void addRow();
    void removeRow();
    void moveBee();

    void generateBee();
    void buyAnt();
    void placeAnt();
    void antAttack();
    void beesAttack(bugs b);


    int getFood();
    void setFood(int cost);

    int checkBeeCount();
    bool queenDead();

    // Game board 2D Vector
    std::vector<std::vector<bugs>> gameBoard;

};
#endif //ANTS_VS_BEES_GAME_H
