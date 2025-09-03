#include <iostream>

struct Character {
    int health;
    int strength;
};

Character* createCharacter(int health, int strength) {
    Character* newCharacter = new Character; // Allocate on the heap
    newCharacter->health = health;
    newCharacter->strength = strength;
    return newCharacter; // Return pointer to heap-allocated object
}

int main(){
    Character* hero = createCharacter(100, 50);
    std::cout << "Hero's health: " << hero->health << std::endl;
    std::cout << "Hero's strength: " << hero->strength << std::endl;
    delete hero; // Free the allocated memory

    float playerHealth = 100.0f;  // Player's health in a game
void *genericPointer = &playerHealth;  // Generic pointer pointing to player's health

// To dereference, cast the pointer back to float*
float actualHealth = *(static_cast<float*>(genericPointer));

// Or alternatively
float enemyHealth = *(float *) genericPointer;

std::cout << "Player Health: " << enemyHealth << std::endl;
    return 0;
}