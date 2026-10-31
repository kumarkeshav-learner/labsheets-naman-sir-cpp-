#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Integer Addition: " << calc.add(5, 10) << endl;
    cout << "Double Addition: " << calc.add(5.5, 10.2) << endl;
    return 0;
}