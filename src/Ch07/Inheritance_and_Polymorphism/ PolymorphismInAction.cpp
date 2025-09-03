#include <vector>
#include "item.h"
#include "weapon.cpp"
#include "ammo.cpp"
#include "aid.cpp"
#include "valuable.cpp"

int main(){
    std::vector<Item*> inventory;  // Vector of Item pointers

    inventory.push_back(new Weapon("Axe", 5, 20));
    inventory.push_back(new Ammo("9mm Bullets", 2, 30));
    inventory.push_back(new Aid("Medkit", 3, 50));
    inventory.push_back(new Valuable("Gold Bar", 10, 100));

    for (const auto& item : inventory){
        item->display();  // Polymorphic call
        item->use();      // Polymorphic call
        std::cout << std::endl;
    }

    // Clean up dynamic memory
    for (auto& item : inventory)
        delete item;

    return 0;
}