// Complete Guide to C++ Programming Foundations
// Exercise 03_03
// Example 1: Calculating player score
// Suppose we are calculating a player's score based on various factors such as level, enemies defeated, and bonus points:

#include <iostream>

int main(){
    int level = 5;
    int enemiesDefeated = 20;
    int bonusPoints = 50;
    int score = level * 100 + enemiesDefeated * 10 + bonusPoints;
    std::cout << "Player Score: " << score << std::endl;
    return 0;
}