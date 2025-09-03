/*
* Example 3: Displaying a leaderboard position
* Consider a scenario where you want to display a player's position on a leaderboard with the right ordinal suffixes:
*/

#include <iostream>
#include <string>

int main(){
    int position = 1;

    std::string suffix = (position == 1) ? "st" : (position == 2) ? "nd" : (position == 3) ? "rd" : "th";

    std::cout << "Position: " << position << suffix << std::endl;
    return 0;
}
