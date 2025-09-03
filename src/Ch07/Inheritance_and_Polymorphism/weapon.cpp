#include "item.h"
class Weapon : public Item{
private:
    int damage;

public:
    Weapon(const std::string& weaponName, int weaponWeight, int weaponDamage)
        : Item(weaponName, weaponWeight), damage(weaponDamage) {}

    void use() const override{
        std::cout << "Swinging the weapon " << name << " with damage " << damage << std::endl;
    }

    void display() const override{
        std::cout << "Weapon: " << name << ", Weight: " << weight << ", Damage: " << damage << std::endl;
    }
};