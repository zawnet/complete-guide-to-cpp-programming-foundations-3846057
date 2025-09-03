// C++ implementation​​​​​​‌‌​‌‌‌‌​‌‌‌​​​‌​‌​​​‌​‌​​ below
#include <iostream>
#include <cstdint>
#include <vector>

// Uncomment these macros to control whether you see
// the expected result and/or hints.
//#define showExpectedResult
//#define showHints

// Function to calculate score based on milliseconds difference 
// You still need to make the bonus multiplier optional with a default value
double CalculateScore(int millisecondsDiff, double bonusMultiplier = 1.0) {
    double score = 0.0;
    if(millisecondsDiff <= 50.0 ){
        score = 100.0;
    }
    else if(millisecondsDiff <= 100.0) {
        score = 70.0;
    }
    else if(millisecondsDiff <= 200.0) {
        score = 50.0;
    }
    
    score = (score * bonusMultiplier);
    
    return score;
}

// Overloaded function to calculate score based on seconds difference 
// You still need to make the bonus multiplier optional with a default value
double CalculateScore(double secondsDiff, double bonusMultiplier = 1.5) {
    int millisecondsDiff =  static_cast<int>(secondsDiff * 1000);
    
    return CalculateScore(millisecondsDiff, bonusMultiplier);
}

// Function to call both overloaded functions and return a vector of results
std::vector<double> GetScores(int millisecondsDiff, double secondsDiff, double bonusMultiplier1, double bonusMultiplier2) {
    std::vector<double> results;
    results.push_back(CalculateScore(millisecondsDiff));                   // Call the function using milliseconds with the default multiplier
    results.push_back(CalculateScore(millisecondsDiff, bonusMultiplier1));  // Call the function using milliseconds with a custom multiplier
    results.push_back(CalculateScore(secondsDiff));                        // Call the function using seconds with the default multiplier
    results.push_back(CalculateScore(secondsDiff, bonusMultiplier2));       // Call the function using seconds with a custom multiplier
    
    return results;
}

int main() {
    // Example 1
    int millisecondsDiff = 45;    // Input for the function using milliseconds
    double secondsDiff = 0.12;    // Input for the function using seconds
    double bonusMultiplier1 = 1.3;  // Custom multiplier for the function using milliseconds
    double bonusMultiplier2 = 1.75; // Custom multiplier for the function using seconds

    // Get the results from the GetScores function
    std::vector<double> learnerResult = GetScores(millisecondsDiff, secondsDiff, bonusMultiplier1, bonusMultiplier2);
    std::cout << "Your code returned: {";
    
    for(const auto& value : learnerResult){
        std::cout << " " << value; 
    }
    std::cout << " }" << std::endl;
    return 0;
}