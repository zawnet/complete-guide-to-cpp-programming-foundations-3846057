#include "item.h"
class Aid : public Item{
private:
    int healingPoints;

public:
    Aid(const std::string& aidName, int aidWeight, int aidHealingPoints)
        : Item(aidName, aidWeight), healingPoints(aidHealingPoints) {}

    void use() const override{
        std::cout << "Using " << name << " to heal " << healingPoints << " health points" << std::endl;
    }

    void display() const override{
        std::cout << "Aid: " << name << ", Weight: " << weight << ", Healing Points: " << healingPoints << std::endl;
    }
};