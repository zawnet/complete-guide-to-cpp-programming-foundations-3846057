#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> playerStats;
    playerStats["Goals"] = 10;
    playerStats["Assists"] = 5;
    playerStats["Saves"] = 3;
    for(const auto& stat : playerStats) 
        std::cout << stat.first << ": " <<stat.second << std::endl;
    return 0;
}