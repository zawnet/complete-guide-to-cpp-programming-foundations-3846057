// Complete Guide to C++ Programming Foundations
// Exercise 03_03
// Example 2: Updating player position
// Let's consider updating a player's position in a 2D game:

#include <iostream>

int main() {
    int x = 10, y = 20;
    int dx = 3, dy = 4;
    x += dx * 2;
    y += dy * 2;

    std::cout << "Palyer Positoin: (" << x << ", " << y << ")" << std::endl;
    return 0;
}