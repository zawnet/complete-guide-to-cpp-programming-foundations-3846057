#include <iostream>
#include <string>

int main() {
    int choice = 1;     // 1 for easy, 2 for medium, 3 for hard
    std::string difficulty = (choice == 1) ? "Easy" : (choice == 2) ? "Medium" : "Hard";

    std::cout << "Difficulty Level: " << difficulty << std::endl;

    return 0;
}