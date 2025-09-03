#include <iostream>
#include <vector>
#include <algorithm>

// Functor to sort enemies by health
struct SortByHealth{
    bool operator()(const std::pair<std::string, int>& enemy1, const std::pair<std::string, int>& enemy2) const {
        return enemy1.second < enemy2.second;  // Sort by health (second element of the pair)
    }
};

int main(){
    std::vector<std::pair<std::string, int>> enemies = {{"Zombie", 100}, {"Mutant", 150}, {"Ghoul", 80}};

    std::sort(enemies.begin(), enemies.end(), SortByHealth());

    for (const auto& enemy : enemies) {
        std::cout << enemy.first << " with health: " << enemy.second << std::endl;
    }

    return 0;
}