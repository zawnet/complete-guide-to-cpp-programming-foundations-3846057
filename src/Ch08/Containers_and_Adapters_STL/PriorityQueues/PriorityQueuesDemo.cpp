#include <iostream>
#include <queue>

int main(){
    std::priority_queue<int> aiTasks;
    aiTasks.push(1);    // Low priority task
    aiTasks.push(3);    // High priority task
    aiTasks.push(2);    // Medium priority task
    while (!aiTasks.empty()){
        std::cout << "Processing task with priority: " << aiTasks.top() << std::endl;
        aiTasks.pop();
    }
    return 0;
}