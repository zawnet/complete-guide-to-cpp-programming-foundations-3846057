// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>

class Inventory{
    private:
        std::vector<std::string> *itmes;    //Pointer to a vector items
        int capacity;                       //Maximmum number or itmes allowed
};
int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}
