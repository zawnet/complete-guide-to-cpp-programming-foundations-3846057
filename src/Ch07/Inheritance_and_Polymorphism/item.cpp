#include "item.h"

Item::Item(const std::string& name, int weight):name(name), weight(weight) {

}

Item::~Item() {}

void Item::use() const {
    std::cout << "Using " << name << "...\n";
}

std::string Item::getName() const { return name; }
    
int Item::getWeight() const { return weight; }

void Item::display() const {
    std::cout << "Item: " << name << ", Weight: " << weight << std::endl;
}