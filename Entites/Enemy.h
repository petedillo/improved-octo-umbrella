#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <algorithm>

class Enemy {
public:
    std::string name;
    int maxHealth = 10;
    int currentHealth = 10;

};

#endif //ENEMY_H