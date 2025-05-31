#include <iostream>
using namespace std;

// Class definition
class Car {
public:
    string brand;
    int year;

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar;             // Object creation
    myCar.brand = "Toyota";
    myCar.year = 2020;
    myCar.display();       // Calling method

    return 0;
}
