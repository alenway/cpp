#include <iostream>
#include <string>

class Car
{
public:
    std::string brand;
    int speed;

    void showDetails()
    {
        std::cout << "Brand: " << brand << " ,speed: " << speed << " km/h" << std::endl;
    }
};
int main()
{
    Car c1;
    c1.brand = "farari";
    c1.speed = 200;
    c1.showDetails();
    return 0;
}
