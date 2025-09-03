#include <iostream>

int main(){
    int playerScore = 0;

    // Repeat until the player reaches a score of at least 100
    do {
        std::cout << "Current Score: " << playerScore << std::endl;
        std::cout << "Enter points earned this round: ";
        int points;
        std::cin >> points;
        playerScore += points;
    } while (!(playerScore >= 100)); // Loop until playerScore is at least 100

    std::cout << "Congratulations! You reached a score of 100 or more." << std::endl;

    return 0;
}