// Complete Guide to C++ Programming Foundations
// Example 4: Complex expression in combat calculation
// Let's look at a more complex expression used in a combat scenario:

#include <iostream>

int main(){
    
    int baseDamage = 50;
    int strength = 20;
    int criticalHitMultiplier = 2;
    int damageDealt = baseDamage * (strength / 10 + 1) * criticalHitMultiplier;
    std::cout << "Damage Dealt: " << damageDealt << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}