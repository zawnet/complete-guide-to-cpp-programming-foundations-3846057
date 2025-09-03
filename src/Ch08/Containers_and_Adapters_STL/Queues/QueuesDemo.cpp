#include <iostream>
#include <queue>

int main(){
    std::queue<std::string> eventQueue;
    eventQueue.push("Start Game");
    eventQueue.push("Goal Scored");
    eventQueue.push("Half-Time");

    while (!eventQueue.empty()){
        std::cout << "Processing Event: " << eventQueue.front() << std::endl;
        eventQueue.pop();
    }
    return 0;
}