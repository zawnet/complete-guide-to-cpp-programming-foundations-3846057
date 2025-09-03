#include <iostream>

int main() {
    int choice;

    do {
        std::cout << "Game Menu:\n" << std::endl;
        std::cout << "1. Start Game\n" << std::endl;
        std::cout << "2. Load Game\n" << std::endl;
        std::cout << "3. Exit\n" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Starting new game..." << std::endl;
                break;
            case 2:
                std::cout << "Loading saved game..." << std::endl;
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }while (choice != 3);

    return 0;
}