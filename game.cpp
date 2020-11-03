//
// Created by Kyle Brown on 11/1/2020.
//

#include <iostream>
#include <string>
#include <vector>
#include "game.h"
#include "bugs.h"
#include "ants.h"
#include "bees.h"
#include "./ant_types/fire.h"

using namespace std;

game::game() {

        this-> gameBoard = vector<vector<bugs>> (1);
        this-> gameBoard[0] = vector<bugs>(10);

        // Initializing the Queen
        gameBoard[0][0] = ants(true);

    /**
     *  [Q], [], [], [], [], [], [], [], [Fire], [Bee, Bee]
     */

    gameLoop();
}

game::~game() {

}

void game::gameLoop() {

    printGameBoard();

    do {

        // 1) A bee is generated on the right side of the board

        // 2) The player can generate an ant and place it anywhere on the board

        // 3) The ants attack the bees. (Order of ant attacks occur left to right)

        /**
        * 4) The bees either attack an ant (order of attack is left to right) which is blocking
        * them or pass through to the next square on the board if they are not blocked by an ant
        */

        /**
         * 5) Check to see if the bees have reached the queen or if there are any bees left in play,
         * declare a winner and end the game if either condition is true
         */

    } while(!queenDead() || checkBeeCount() != 0);

    if(queenDead()) {
        cout << "\n" << "The queen is dead! The bees win!" << endl;
    }

    else {
        cout << "\n" << "All bees are dead! The ants win!" << endl;
    }
}

/**
 * @description Prints the game board in a 1D representation of 10 squares.
 * this loop goes through and totals up adjacent ants & bees sharing the same
 * square as well and displays as a comma separated list.
 */
void game::printGameBoard() {

    for(int i = 0; i < gameBoard[0].size(); i++) {

        string squareBugs = "";
        for(int j = 0; j < gameBoard.size(); j++) {

            string str = gameBoard[j][i].symbol;
            squareBugs.append(str);

            if(str != "" && j != gameBoard.size()-1) {
                squareBugs.append(", ");
            }
        }

        cout << "[" << i+1 << ": "<< squareBugs << " ] ";
    }
}

/**
 * @description Allocates space for a new 10 length bug vector.
 */
void game::addRow() {
    this->gameBoard.resize(gameBoard.size()+1);
    this->gameBoard[gameBoard.size()-1] = vector<bugs> (10);
}

/**
 * @description Removes row of empty spaces in order to free up memory.
 */
void game::removeRow() {
    this->gameBoard.resize(gameBoard.size()-1);
}

/**
 *
 * @return
 */
bool game::queenDead() {

    for(int j = 0; j < gameBoard.size(); j++) {

        if(gameBoard[j][0].symbol == "Bee") {
            return true;
        }
    }

    return false;
}

/**
 *
 * @return
 */
int game::checkBeeCount() {
    int beeCount = 0;

    for(int i = 0; i < gameBoard.size(); i++) {

        for(int j = 0; j < gameBoard[i].size(); j++) {

            if(i > 0 && gameBoard[i][j].symbol == "Bee") {
                beeCount++;
            }
        }
    }

    return beeCount;
}