#include <iostream>

void createZombie(const std::string& name = "Zombie", int health = 100){
    std::cout << name << " has " << health << " health points." << std::endl;
}

int main(){
    createZombie();      // Uses default arguments: "Zombie", 100
    createZombie("Crawler");     // Uses default health: 100
    createZombie("Runner", 150); // Uses provided arguments
    return 0;
}