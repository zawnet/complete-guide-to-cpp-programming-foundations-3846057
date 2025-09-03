// C++ implementation​​​​​​‌‌​‌‌‌‌​‌​​​‌‌​​​​​​​​​​​ below
#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <sstream>

// Uncomment these macros to control whether you see
// the expected result and/or hints.
//#define showExpectedResult
//#define showHints

std::vector<int> SelectKeyPoints(std::vector<int> distances, int checkpointIndex){
    
    std::vector<int> result;
    result.push_back(distances.front());                // Add the firmst element
    result.push_back(distances.at(checkpointIndex));    // Add the element at checkpointIndex
    result.push_back(distances.back());                 // Add the last element
    
    //Version via iterator
    result.push_back(*distances.begin());
    result.push_back(distances[checkpointIndex]);
    result.push_back(*(distances.end() -1));
    
    return result;
}

int main() {
    std::vector<int> distances = {3, 5, 4, 6, 7, 8};
    int checkpointIndex = 4;

    std::vector<int> learnerResult = SelectKeyPoints(distances, checkpointIndex);

    std::stringstream resultTxtStream; 
    resultTxtStream << "{ " << learnerResult.at(0) << " " <<  learnerResult.at(1) << " " <<  learnerResult.at(2) << " }";
    std::cout << "Your code returned: " << resultTxtStream.str() << std::endl;

    return 0;
}