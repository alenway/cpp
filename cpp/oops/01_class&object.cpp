#include<iostream>
using namespace std;

class car{
  public:
    string brand;

    car() {
      brand = "unknown";
    }

    car(string brand){
      brand = brand;
    }

    void honk(){
      cout << brand << endl;
      cout << "beep beep" << endl;
      }
};

int main(){
  car tesla;
  tesla.honk();
  return 0;
}
