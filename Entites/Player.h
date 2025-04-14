#ifndef PLAYER_H
#define PLAYER_H

#include  <iostream>
#include "Item.h"

class Player {
public:
    std::string name;
    int maxHealth = 100;
    int currentHealth = 100;
    int level = 1;
    std::vector<Item> inventory;

    void takeDamage(int amount) {
        currentHealth = std::max(0, currentHealth - amount);
    }

    void heal(int amount) {
        currentHealth = std::min(maxHealth, currentHealth + amount);
    }

    void addItem(const Item &item) {
        inventory.push_back(item);
    }

    void viewInventory() const {
        if (inventory.empty()) {
            std::cout << "Inventory is empty.\n";
            return;
        }

        std::cout << "Inventory:\n";
        for (size_t i = 0; i < inventory.size(); ++i) {
            const Item& item = inventory[i];
            std::cout << i << ": " << item.name
                      << " - " << item.description
                      << " [" << (item.isConsumable() ? "Consumable" : "Quest") << "]\n";
        }
    }

    void useItem(int index) {
        if (index < 0 || index >= inventory.size()) {
            std::cout << "Invalid item index.\n";
            return;
        }

        Item item = inventory[index];

        if (item.isConsumable()) {
            std::cout << "You used: " << item.name << "\n";
            heal(item.healAmount);
            inventory.erase(inventory.begin() + index); // Remove after use
        } else {
            std::cout << "This item cannot be used.\n";
        }
    }
};

#endif //PLAYER_H
