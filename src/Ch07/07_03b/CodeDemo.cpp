// Complete Guide to C++ Programming Foundations
// Exercise 07_03
// Function Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory{
public:
    // Add item to inventory
    void addItem(const std::string& item) {
        if(items->size() < capacity)
            items->push_back(item);
        else
            std::cout << "Inventory is full, cannot add " << item << std::endl;
    }

    //Remomve item
    void removeItem(const  std::string& item){
        auto it = std::find(items->begin(), items->end(), item);
        if(it != items->end()) 
            items->erase(it);
        else
            std::cout << "Item " << item << "not found in inventory" << std::endl;
        
    }

    //Access item by index
    std::string getItem(int index) const {
        if(index <=0 && index< items->size())
            return (*items)[index];
        else
            return "Index out of bounds";
    }

    // Get number of items in the inventory
    int getItemCount() const{
        return items->size();
    }

    // DIspaly inventory contents
    void displayINventory() const{
        std::cout << "Inventory: [ ";
            for (size_t i = 0; i < items->size(); i++)
            {
                std::cout << (*items)[i];
                if(i < items->size() -1) std::cout << ", ";
            }
            std::cout << " ]"<<std::endl;
            
    }


    private:
    std::vector<std::string> *items; // Pointer to a vector of items
    int capacity; // Maximum number of items allowed
};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
