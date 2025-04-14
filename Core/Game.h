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
        std::string input;

        std::cout << "Hello Player! What is your name?\n";
        std::getline(std::cin, player.name);

        while (player.currentHealth > 0) {
            std::cout << "\n--- Main Menu ---\n";
            std::cout << "1. Take 10 damage\n";
            std::cout << "2. Heal 10 health\n";
            std::cout << "3. View Stats\n";
            std::cout << "4. Advance Level\n";
            std::cout << "5. Quit Game\n";
            std::cout << "Choose an action (1-5): ";

            std::getline(std::cin, input);

            int action = 0;
            try {
                action = std::stoi(input);
            } catch (...) {
                std::cout << "Invalid input. Please enter a number between 1 and 5.\n";
                continue;
            }

            switch (action) {
                case 1:
                    player.currentHealth -= 10;
                    std::cout << "You took 10 damage. Current health: " << player.currentHealth << "\n";
                    break;
                case 2:
                    player.currentHealth += 10;
                    if (player.currentHealth > player.maxHealth) player.currentHealth = player.maxHealth;
                    std::cout << "You healed 10 health. Current health: " << player.currentHealth << "\n";
                    break;
                case 3:
                    std::cout << "\n--- Player Stats ---\n";
                    std::cout << "Name: " << player.name << "\n";
                    std::cout << "Health: " << player.currentHealth << "/" << player.maxHealth << "\n";
                    std::cout << "Level: " << player.level << "\n";
                    break;
                case 4:
                    std::cout << "Advancing to the next level...\n";
                    player.level += 1;
                    break;
                case 5:
                    std::cout << "Thanks for playing, " << player.name << "!\n";
                    return;
                default:
                    std::cout << "Invalid action. Try again.\n";
            }
        }
    }
};


#endif //GAME_H
