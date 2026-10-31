#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;

    void displayInfo() {
        cout << "Brand: " << brand << " | Price: $" << price << endl;
    }
};

int main() {
    Car car1, car2;
    car1.brand = "Toyota";
    car1.price = 25000;
    
    car2.brand = "Honda";
    car2.price = 22000;

    car1.displayInfo();
    car2.displayInfo();
    return 0;
}