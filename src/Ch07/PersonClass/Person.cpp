// C++ implementation​​​​​​‌‌​‌‌‌‌‌​​​‌‌​‌​‌​‌​‌​‌‌‌ below
#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

// Uncomment these macros to control whether you see
// the expected result and/or hints.
#define showExpectedResult
#define showHints

class Person{
    private:
        std::string name;
        float energy;
        float happiness;
        float health;
    public:
        Person(const std::string& name, float energy, float happiness, float health ):name(name), energy(energy), happiness(happiness), health(health) {}
        
        void Eat(float calories) {
            energy += (calories*7.0 / 200.0);
        } 
        void Play(float minutes) {
            happiness += (minutes / 2.0);
            energy -= (minutes / 3.0);
        }

        void Sleep(int hours) {
            energy += ( (float) hours * 3.75);
            health += ((float) hours * 2.5);
        }

        float GetEnergy() const {
            return energy;
        }
        float GetHappiness() const {
            return happiness;
        }
        float GetHealth() const {
            return health;
        }

    
};

int main(){
    // This is how your code will be used.
// You can edit this code to try different testing cases.
std::string name = "Alice";
float energy = 40;
float happiness = 22;
float health = 80;

float calories = 300;
float playMinutes = 120;
float sleepHours = 5;

// Do not modify the following part of the code, as this is what your solution will be compared to.
Person sporty(name, energy, happiness, health);
sporty.Eat(calories);
sporty.Play(playMinutes);
sporty.Sleep(sleepHours);
return 0;    
}