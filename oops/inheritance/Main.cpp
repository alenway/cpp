#include <iostream>

class Animal
{
public:
    void makeSound()
    {
        std::cout << "make sound from animal." << std::endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "bark from dog class." << std::endl;
    }
};

int main()
{
    Dog mydog;
    mydog.makeSound();
    mydog.bark();

    return 0;
}
