#pragma once
#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>
class Item{

protected:
    std::string name;
    int weight;

public:
   Item(const std::string& itemName, int itemWeight);

   ~Item();

    virtual void use() const = 0;

    std::string getName() const;
    
    int getWeight() const; 

    virtual void display() const;
};

#endif //ITEM_H