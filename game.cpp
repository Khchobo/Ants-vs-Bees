//
// Created by Kyle Brown on 11/1/2020.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "game.h"
#include "bugs.h"
#include "ants.h"
#include "bees.h"
#include "./ant_types/harvester.h"
#include "./ant_types/thrower.h"
#include "./ant_types/fire.h"
#include "./ant_types/long_thrower.h"
#include "./ant_types/short_thrower.h"
#include "./ant_types/wall.h"
#include "./ant_types/ninja.h"
#include "./ant_types/bodyguard.h"

using namespace std;

game::game() {

        this->gameBoard = vector<vector<bugs>> (1);
        this->gameBoard[0] = vector<bugs>(10);
        this->foodBank = 50;

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
    do {

        cout << "Food bank: " << this->foodBank << endl;

        // 1) A bee is generated on the right side of the board
        generateBee();
        printGameBoard();
        printVectors();

        // 2) The player can generate an ant and place it anywhere on the board
        //    (if they have enough food).
        if (this->foodBank < 2) {
            cout << "Insufficient food, can't buy an ant this round" << endl;
        }
        else {
            buyAnt();
        }

        // 3) The ants attack the bees. (Order of ant attacks occur left to right)
            //antAttack();

        /**
        * 4) The bees either attack an ant (order of attack is left to right) which is blocking
        * them or pass through to the next square on the board if they are not blocked by an ant
        */
        moveBee();
        this->foodBank++; // for testing

    } while (!queenDead() && checkBeeCount() > 0);

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
    cout << endl;
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

    this->beeCount = 0;

    for(int i = 0; i < gameBoard.size(); i++) {

        for(int j = 0; j < gameBoard[i].size(); j++) {

            if(j > 0 && gameBoard[i][j].symbol == "Bee") {
                this->beeCount++;
            }
        }
    }

    return beeCount;
}

int game::getFood() {
    return this->foodBank;
}

void game::setFood(int cost) {
    this->foodBank = foodBank - cost;
}

void game::buyAnt() {

    cout << "You have " << this->getFood() << " points" << endl;
    cout << "--Choose an ant--" << endl;
    cout << "1) Harvester:" << " 2pts" << endl;
    cout << "2) Thrower:" << " 4pts" << endl;
    cout << "3) Fire:" << " 4pts" << endl;
    cout << "4) Long Thrower:" << " 3pts" << endl;
    cout << "5) Short Thrower:" << " 3pts" << endl;
    cout << "6) Wall:" << " 4pts" << endl;
    cout << "7) Ninja:" << " 6pts" << endl;
    cout << "8) Bodyguard:" << " 4pts" << endl;

    int type = -1;

    do {
        cout << "Choose an ant option between 1 and 8" << endl;
        string input = "";
        getline(cin, input);
        type = parseInt(input);

    } while(type < 1 || type > 8);

    switch (type) {
        case 1:
            placeAnt(1); // Harvester
            setFood(2);
            break;
        case 2:
            placeAnt(2); // Thrower
            setFood(4);
            break;
        case 3:
            placeAnt(3); // Fire
            setFood(4);
            break;
        case 4:
            placeAnt(4); // Long Thrower
            setFood(3);
            break;
        case 5:
            placeAnt(5); // Short Thrower
            setFood(3);
            break;
        case 6:
            placeAnt(6); // Wall
            setFood(4);
            break;
        case 7:
            placeAnt(7); // Ninja
            setFood(6);
            break;
        case 8:
            placeAnt(8); // Bodyguard
            setFood(4);
            break;
    }
}

/**
 * NEED to stack body guard under any other ants
 * first check if there is an ant already there, then only bodyguard
 * can be added.
 */

/**
 *
 * @param antId
 */
void game::placeAnt(int antId) {

    ants a;

    switch (antId) {
        case 1:
            a = harvester();
            break;
        case 2:
            a = thrower();
            break;
        case 3:
            a = fire();
            break;
        case 4:
            a = long_thrower();
            break;
        case 5:
            a = short_thrower();
            break;
        case 6:
            a = wall();
            break;
        case 7:
            a = ninja();
            break;
        case 8:
            a = bodyguard();
            break;
    }

    cout << "--Select a location for the ant--" << endl;
    int location;

    do {
        cout << "Choose an ant option between 2 and 10" << endl;
        string input = "";
        getline(cin, input);
        location = parseInt(input);

    } while(location < 2 || location > 10);

    switch (location) {
        case 2:
            gameBoard[0][1] = a;
            break;
        case 3:
            gameBoard[0][2] = a;
            break;
        case 4:
            gameBoard[0][3] = a;
            break;
        case 5:
            gameBoard[0][4] = a;
            break;
        case 6:
            gameBoard[0][5] = a;
            break;
        case 7:
            gameBoard[0][6] = a;
            break;
        case 8:
            gameBoard[0][7] = a;
            break;
        case 9:
            gameBoard[0][8] = a;
            break;
        case 10:
            gameBoard[0][9] = a;
            break;
    }
}

/**
 * @description all ants actions executed here
 */
void game::antsAttack() {

}

void game::moveBee() {

    for(int i = 0; i < gameBoard.size(); i++) {

        for(int j = 1; j < gameBoard[i].size(); j++) {

            // Bee located
            if(gameBoard[i][j].symbol == "Bee") {

                // There is an ant here
                if(gameBoard[0][j-1].symbol != "" && gameBoard[0][j-1].symbol != "Bee" && gameBoard[0][j-1].symbol != "Q") {
                    cout << "battle" << endl;
                }

//                // There is an ant here
//                else if(gameBoard[1][j-1].symbol != "" && gameBoard[1][j-1].symbol != "Bee" && gameBoard[1][j-1].symbol != "Q") {
//                    cout << "battle" << endl;
//                }

                // Move the bees, no battles take place
                else {

                    for(int k = 0; k < gameBoard.size(); k++) {

                        // Stack up bees if blocked by other bees (First row)
                        if (gameBoard[k][j - 1].symbol != "Bee" && k == 0) {

                            gameBoard[k][j - 1] = gameBoard[k][j];
                            gameBoard[k][j] = bugs();
                        }

                        // Stack up bees if blocked by other bees (All other rows)
                        else if (gameBoard[k][j - 1].symbol != "Bee" && k > 0) {

                            gameBoard[k][j - 1] = gameBoard[0][j];
                            gameBoard[0][j] = bugs();
                        }

                        // Need to stack dynamically in a loop
                        else if (k == gameBoard.size() - 1) {
                            addRow();
                        }
                    }

                }

            }
            // Non-Bee squares are skipped
            else {
                continue;
            }
        }
    }
}

/**
 * @description Dynamically allocates a bee in the last column,
 * resizes if needed to add another bee at last column.
 */
void game::generateBee() {

    // Loops until empty last square found to place bee
    for (int i = 0; i < this->gameBoard.size(); i++) {
        if(this->gameBoard[i][9].symbol != "Bee") {
            this->gameBoard[i][9] = bees();
            break;
        }

        // If at end of list, adds a new row
        else if (i == this->gameBoard.size() -1){
            addRow();
        }
    }
}

/**
 * @description
 *
 * @param input
 * @return valid int
 */
int game::parseInt(std::string &input) {

    int number;
    istringstream iss(input);

    // Valid parsed int
    if (iss >> number) {
        return number;
    }

    cout << "invalid input, not an integer" << endl;
    return -1;
}

void game::printVectors() {
    cout << "--------------------------------------------------------------" << endl;
    for(int i = 0; i < gameBoard.size(); i++) {

        for(int j = 0; j < gameBoard[i].size(); j++) {
            cout << "[" << gameBoard[i][j].symbol << "] ";
        }
        cout << "\n";
    }
    cout << "--------------------------------------------------------------" << endl;

}