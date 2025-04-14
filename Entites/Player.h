//
// Created by Pedro Delgadillo on 4/13/25.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>


class Player {
    public:
        std::string name;
        int maxHealth = 100;
        int currentHealth = maxHealth;
        int level = 1;
};



#endif //PLAYER_H
