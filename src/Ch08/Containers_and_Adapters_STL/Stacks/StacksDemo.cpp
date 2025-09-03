#include<iostream>
#include<stack>

int main(){
    std::stack<std::string> gameStates;
    gameStates.push("Main Menu");
    gameStates.push("Level 1");
    gameStates.push("Level 2");

    while (!gameStates.empty())
    {;
        std::cout << "CurrentState: " << gameStates.top() << std::endl;
        gameStates.pop();
    }
    
    return 0;
    
}