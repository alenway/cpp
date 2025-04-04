#include <iostream>

class Vehicle
{
public:
    virtual void start() = 0;
};

class Car : public Vehicle
{
public:
    void start() override
    {
        std::cout << "car is starting" << std::endl;
    }
};

int main()
{
    Car mycar;
    mycar.start();
    return 0;
}
