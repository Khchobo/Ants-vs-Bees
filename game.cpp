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
#include "./ant_types/fire.h"

using namespace std;

game::game() {

        this-> gameBoard = vector<vector<bugs>> (1);
        this-> gameBoard[0] = vector<bugs>(10);
        this->foodBank = 50;

        // Initializing the Queen
        gameBoard[0][0] = ants(true);
        //gameBoard[0][4] = fire();
    /**
     *  [Q], [], [], [], [], [], [], [], [Fire], [Bee, Bee]
     */

    gameLoop();
}

game::~game() {

}

void game::gameLoop() {
    do {
        // 1) A bee is generated on the right side of the board
        generateBee();
        cout << checkBeeCount() << endl;
        printGameBoard();

        // 2) The player can generate an ant and place it anywhere on the board
        buyAnt();

        // 3) The ants attack the bees. (Order of ant attacks occur left to right)
        moveBee();

        /**
        * 4) The bees either attack an ant (order of attack is left to right) which is blocking
        * them or pass through to the next square on the board if they are not blocked by an ant
        */

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
            placeAnt();
            break;
        case 2:
            placeAnt();
            break;
        case 3:
            placeAnt();
            break;
        case 4:
            placeAnt();
            break;
        case 5:
            placeAnt();
            break;
        case 6:
            placeAnt();
            break;
        case 7:
            placeAnt();
            break;
        case 8:
            placeAnt();
            break;
    }
}

void game::placeAnt() {
    cout << "--Select a location for the ant--" << endl;
    int location;

    do {
        cout << "Choose an ant option between 1 and 10" << endl;
        string input = "";
        getline(cin, input);
        location = parseInt(input);

    } while(location < 1 || location > 10);

    switch (location) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        default:
            break;
    }
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
                // There is an ant here
                else if(gameBoard[1][j-1].symbol != "" && gameBoard[1][j-1].symbol != "Bee" && gameBoard[1][j-1].symbol != "Q") {
                    cout << "battle" << endl;
                }

                // Move the bees no conflict
                    // Move bee one to the left
                    gameBoard[i][j-1] = gameBoard[i][j];
                    // Remove Bee from that past index
                    gameBoard[i][j] = bugs();

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
 *
 */
void game::generateAnt(int location) {

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