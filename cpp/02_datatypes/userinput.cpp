#include<iostream>
#include<string>

using namespace std;

int main(){
  string userTea;
  int teaQuentity;

  cout << "What would you like to order? \n";
  getline(cin,userTea);


  cout << "How many cups of " << userTea << " would you like to have";
  cin >> teaQuentity;

  cout << teaQuentity << endl;
  cout << userTea;

  return 0;
}

