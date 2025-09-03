// C++ implementation​​​​​​‌‌​‌‌‌‌​‌​‌​‌​​‌‌​‌‌​​‌​​ below
#include <iostream>
#include <cstdint>
#include <vector>

// Uncomment these macros to control whether you see
// the expected result and/or hints.
//#define showExpectedResult
//#define showHints

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;

    // Write your code here
    for(auto res : resources) {
        switch (res.type) {
            case 'B':
                result += (res.baseCost + res.baseCost * 0.05);
                break;
            case 'L':
                result += (res.baseCost + res.baseCost * 0.15);
                break;
            default:
                 result += res.baseCost;
                break;
        }
    }    
    
    return result;
}

double CalculateTotalCost2(std::vector<Resource>& resources){
    double result = 0.0;
    
    for (const auto& resource : resources){
        double costWithTax = resource.baseCost;
        
        if (resource.type == 'B')      // Basic resource: 5% tax
            costWithTax += resource.baseCost * 0.05;
        else if (resource.type == 'L') // Luxury resource: 15% tax
            costWithTax += resource.baseCost * 0.15;

        // Essential resource 'E' has no tax, so no change is needed
        
        result += costWithTax;
    }
    
    return result;
}


int main() {

    // Example 1 resources
std::vector<Resource> resources = {
    {"Wood", 125.0, 'B'},
    {"Gold", 200.0, 'L'},
    {"Water", 50.0, 'E'}
};

double learnerResult = CalculateTotalCost2(resources);

std::cout << "Your code returned: " << learnerResult << std::endl;
    return 0;
}