#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::pair<std::string, int>> enemies = {{"Zombie", 100}, {"Mutant", 150}, {"Ghoul", 80}};

    std::sort(enemies.begin(), enemies.end(), [](const auto& enemy1, const auto& enemy2) {
        return enemy1.second < enemy2.second;
    });

    for (const auto& enemy : enemies)
        std::cout << enemy.first << " with health: " << enemy.second << std::endl;
    return 0;
}