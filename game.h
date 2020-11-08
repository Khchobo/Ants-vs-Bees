//
// Created by Kyle Brown on 11/1/2020.
//

#ifndef ANTS_VS_BEES_GAME_H
#define ANTS_VS_BEES_GAME_H

#include <vector>
#include <string>
#include "bugs.h"
#include "ants.h"
#include "tile.h"

class game {

public:

    // Constructor
    game();

    // Destructor
    ~game();

    void gameLoop();

    // Utility Functions
    void printGameBoard();
    int parseInt(std::string &input);
    int getFood();
    void setFood(int cost);
    int checkBeeCount();
    bool queenDead();

    // Bees
    void generateBee();
    void moveBee();
    void beesTurn();
    void postVictoryMove(bees &copiedBee, int tileLoc);

    // Ants
    void checkAntPos(int loc, ants a);
    void buyAnt();
    void placeAnt(int antId);
    void antsTurn();
    ants createAntType(int antId);

    // Game Fields
    std::vector<tile> gameBoard;
    int beeCount;
    int foodBank;

};
#endif //ANTS_VS_BEES_GAME_H
