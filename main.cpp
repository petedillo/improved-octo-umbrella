#include <iostream>

int main() {
    std::string name;

    std::cout << "Hello Player what is your name?\n";
    std::cin >> name;
    if (name == "Pedro") {
        std::cout << "Nice Job! Me\n";
    } else {
        std::cout << "Hello " << name << ", welcome to the game!\n" << std::endl;
    }

    return 0;
}
