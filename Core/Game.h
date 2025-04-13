//
// Created by Pedro Delgadillo on 4/13/25.
//

#ifndef GAME_H
#define GAME_H
#include "../Entites/Player.h"
#include <iostream>

class Game {
public:
    static void start() {
        Player player;

        std::cout << "Hello Player what is your name?\n";
        std::cin >> player.name;

        std::cout << "What would you like to do?\n";
        std::cout << "Press 1 - Take 10 damage\n";
        int action;
        std::cin >> action;
        if (action == 1) {
            player.currentHealth = player.currentHealth - 10;
            std::cout << "Your Health is now " << player.currentHealth;
        }
    }
};


#endif //GAME_H
