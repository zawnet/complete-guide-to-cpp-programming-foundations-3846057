#include <iostream>
#include <memory> // Include the memory header for smart pointers

struct Enemy {
    int health;
    int attackPower;
};

int main() {
    std::unique_ptr<Enemy> boss = std::make_unique<Enemy>();
    boss->health = 200;
    boss->attackPower = 40;

    std::cout << "Boss Health: " << boss->health << std::endl;
    std::cout << "Boss Attack Power: " << boss->attackPower << std::endl;

    // No need to manually delete; std::unique_ptr takes care of it
    return 0;
}