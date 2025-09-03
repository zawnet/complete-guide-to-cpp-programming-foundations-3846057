#include <iostream>

// Functor class
class MultiplyBy {
public:
    MultiplyBy(int factor) : factor_(factor) {}

    int operator()(int value) const {
        return value * factor_;
    }

private:
    int factor_;
};

int main(){
    MultiplyBy multiplyBy5(5);  // Create a functor with factor 5
    int result = multiplyBy5(10);  // Calls operator() with value 10
    std::cout << "Result: " << result << std::endl;  // Output: 50
    return 0;
}