//
// Created by Pedro Delgadillo on 4/13/25.
//

#ifndef GAME_H
#define GAME_H
#include "../Entites/Player.h"
#include <iostream>

class Game {
public:
    static void gameStart() {
        Player player;

        std::cout << "Hello Player what is your name?\n";
        std::cin >> player.name;


        if (player.name == "Pedro") {
            std::cout << "Nice Job! Me\n" << "Your Current Health is " << player.currentHealth << "\n";
        } else {
            std::cout << "Hello " << player.name << ", welcome to the game!\n" << std::endl;
        }
    }
};


#endif //GAME_H
