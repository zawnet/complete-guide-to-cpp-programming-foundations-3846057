#include <iostream>
#include <string>

int main(){
    int score = 85;
    std::string result = (score >= 50) ? "Pass" : "Fail";

    std::cout << "Result: " << result << std::endl;

    return 0;
}