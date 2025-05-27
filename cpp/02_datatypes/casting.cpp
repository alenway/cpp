#include<iostream>
using namespace std;

int main(){
  float teaPrice = 234.32;
  int roundedTeaPrice = (int) teaPrice;

  int teaQuentity = 2;
  int totalprice = teaPrice * teaQuentity;

  cout << roundedTeaPrice << endl;
  return 0;
}

