//
// Created by Kyle Brown on 11/1/2020.
//

#include <iostream>
#include <vector>
#include "game.h"

using namespace std;

game::game() {
    gameBoard.assign(10, "");

    // initialize queen (need to actually make an object later)
    gameBoard[0] = "Q";

    gameLoop();
}

game::~game() {

}

void game::gameLoop() {

    printGameBoard();

//    do {
//
//        // 1) A bee is generated on the right side of the board
//
//        // 2) The player can generate an ant and place it anywhere on the board
//
//        // 3) The ants attack the bees. (Order of ant attacks occur left to right)
//
//        /**
//        * 4) The bees either attack an ant (order of attack is left to right) which is blocking
//        * them or pass through to the next square on the board if they are not blocked by an ant
//        */
//
//        /**
//         * 5) Check to see if the bees have reached the queen or if there are any bees left in play,
//         * declare a winner and end the game if either condition is true
//         */
//
//    } while(!queen.isDead || bees.getCount == 0)
//
//    if(queen.isDead) {
//        cout << "The queen is dead! The bees win!" << endl;
//    }
//
//    else {
//        cout << "All bees are dead! The ants win!" << endl;
//    }
}

void game::printGameBoard() {

    cout << "\n" << endl;

    for(int i = 0; i < gameBoard.size(); i++) {
        cout << "[" << i+1 << ": "<< gameBoard[i] << " ] " ;
    }
}