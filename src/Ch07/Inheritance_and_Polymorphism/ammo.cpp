#include "item.h"
class Ammo : public Item{
private:
    int rounds;

public:
    Ammo(const std::string& ammoName, int ammoWeight, int ammoRounds)
        : Item(ammoName, ammoWeight), rounds(ammoRounds) {}

    void use() const override{
        std::cout << "Reloading " << rounds << " rounds of " << name << std::endl;
    }

    void display() const override{
        std::cout << "Ammo: " << name << ", Weight: " << weight << ", Rounds: " << rounds << std::endl;
    }
};