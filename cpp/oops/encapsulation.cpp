#include<iostream>
using namespace std;

class Student{
  private:
    int age;

  public:
    void setAge(int a){
      if (a > 0) age = a;
    }

    int getAge(){
      return age;
    }
};

int main(){
  Student st1;
  st1.setAge(44);
  cout << st1.getAge() << endl;
  return 0;
}
