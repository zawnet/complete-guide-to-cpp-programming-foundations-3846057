/**
 * Example 1: Determining player status
 * Let's consider a situation where you want to determine if a player is "alive" or "dead" based on their health points:
 */

 #include<iostream>
 #include<string>

int main() {

    int health = 0;
    std::string status = (health > 0) ? "Alive" : "Dead";
    std::cout << "Player is " << status << std::endl;
    return 0;
}