#include <iostream>
#include <utility>  // Include the utility header for std::pair

int main(){
    // Create a pair to store player name and score
    std::pair<std::string, int> playerStats("Alice", 75);  
    std::cout << "Player: " << playerStats.first << ", Score: " << playerStats.second << std::endl;

    return 0;
}