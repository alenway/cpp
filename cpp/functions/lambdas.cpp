#include<iostream>
using namespace std;

int main(){
  auto greet = [](){
    cout << "hello world" << endl;
  };

  greet();
  return 0;
}
