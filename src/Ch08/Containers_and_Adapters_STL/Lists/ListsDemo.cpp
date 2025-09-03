#include<iostream>
#include<list>

int main(){

    std::list<std::string> checkpoints = {"Entrance", "Lobby", "Storage Room"};
    checkpoints.push_back("Roof");
    for (const auto& checkpoint : checkpoints)
        std::cout << "Checkpoint: " << checkpoint << std::endl;
    return 0;
}
