#include <iostream>

class Shape
{
public:
    virtual void draw()
    {
        std::cout << "draw shape class." << std::endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        std::cout << "draw from circle class." << std::endl;
    }
};

int main()
{
    Shape *shape1;
    Circle circle;
    shape1 = &circle;
    shape1->draw();
    return 0;
}
