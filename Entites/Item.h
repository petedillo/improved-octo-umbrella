#ifndef ITEM_H
#define ITEM_H

#include <string>

enum class ItemType {
    Consumable,
    Quest
};

class Item {
public:
    std::string name;
    std::string description;
    ItemType type;
    int healAmount = 0;

    Item(std::string name, std::string description, ItemType type, int healAmount = 0)
        : name(std::move(name)), description(std::move(description)), type(type), healAmount(healAmount) {}

    bool isConsumable() const {
        return type == ItemType::Consumable;
    }
};

#endif // ITEM_H
