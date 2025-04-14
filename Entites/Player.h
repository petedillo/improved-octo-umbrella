#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <algorithm>

class Player {
public:
    std::string name;
    int maxHealth = 100;
    int currentHealth = 100;
    int level = 1;

    void takeDamage(int amount) {
        currentHealth = std::max(0, currentHealth - amount);
    }

    void heal(int amount) {
        currentHealth = std::min(maxHealth, currentHealth + amount);
    }
};

#endif //PLAYER_H
