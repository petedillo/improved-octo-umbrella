#include <iostream>

#include "Entites/Player.h"

int main() {
    Player player;

    std::cout << "Hello Player what is your name?\n";
    std::cin >> player.name;


    if (player.name == "Pedro") {
        std::cout << "Nice Job! Me\n" << "Your Current Health is " << player.currentHealth << "\n";
    } else {
        std::cout << "Hello " << player.name << ", welcome to the game!\n" << std::endl;
    }

    return 0;
}
