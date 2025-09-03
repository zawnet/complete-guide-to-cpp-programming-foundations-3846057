// Complete Guide to C++ Programming Foundations
// Exercise 03_03
// Example 3: Checking a game-over condition
// Consider a game-over condition where the player loses if their health drops to zero or below:

#include <iostream>

int main() {
    int health = 0;
    bool isGmaeOver =  (health <= 0);
    std::cout << "Game Over: " << (isGmaeOver ? "Yes" : "No") << std::endl; 
    return 0;
}