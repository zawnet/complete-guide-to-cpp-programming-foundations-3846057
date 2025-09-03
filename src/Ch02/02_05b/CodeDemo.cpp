// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a,b  = 5;

void generateUniqueID(){
    static int id = 0;
    ++id;
    std::cout << "Generated ID: " << id << std::endl;
}

class Enemy{
public:
    static int enemyCount; // Static class member

    // This is the constructor, called every time a new Enemy object is instantiated.
    Enemy(){
        ++enemyCount; // Increase enemy count
    }

    static void showEnemyCount() {
        std::cout << "Total Enemies: " << enemyCount << std::endl;
    }
};

// Initialize static member even when no instances exist yet
int Enemy::enemyCount = 0;

int main(){
    
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    generateUniqueID();
    generateUniqueID();
    generateUniqueID();
    std::cout << std::endl << std::endl;

    Enemy goblin;
    Enemy orc;
    Enemy troll;

    Enemy::showEnemyCount();
    return 0;
}
