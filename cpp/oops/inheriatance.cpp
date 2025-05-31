#include<iostream>
using namespace std;

class Animal{
  public:
    void sound(){
      cout << "make sound" << endl;
    }
};

class Dog: public Animal{
  public:
    void display(){
      cout << "bark" << endl;
    }
};

int main(){
  Dog d1;
  d1.display();
  d1.sound();
  return 0;
}
