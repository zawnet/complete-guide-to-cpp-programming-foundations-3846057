#include "item.h"
class Valuable : public Item{
private:
    int value;

public:
    Valuable(const std::string& valuableName, int valuableWeight, int valuableValue)
        : Item(valuableName, valuableWeight), value(valuableValue) {}

    void use() const override{
        std::cout << "Storing " << name << " in the safe, value: " << value << std::endl;
    }

    void display() const override{
        std::cout << "Valuable: " << name << ", Weight: " << weight << ", Value: " << value << std::endl;
    }
};