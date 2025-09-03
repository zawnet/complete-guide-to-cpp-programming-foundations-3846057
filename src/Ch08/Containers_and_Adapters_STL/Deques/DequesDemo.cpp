#include <iostream>
#include <deque>


int main() {
    std::deque<std::string> recentActions = {"Pass", "Shoot", "Defend"};
    recentActions.push_front("Dribble");    // Add action to the front
    recentActions.push_back("Score");       // Add action to the back

     for (const auto& action : recentActions)
        std::cout << "Action: " << action << std::endl;
    return 0;
}