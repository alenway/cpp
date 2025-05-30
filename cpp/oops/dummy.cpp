#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int add(int a, int b){
  return a + b;
}

int subtract (int a, int b) {
  return a - b;
}

int multiply (int a, int b) {
  return a * b;
}

float divide (float a, float b){
  return a / b;
}

bool negativeValue(int a) {
  if (a < 0){
    return true;
  } else {
    return false;
  }
}


int main(){
  int value, result;
  int a,b;
  while (true) {
    cout << "\ncalci opreations:" << endl;
    cout << "0. for exit." << endl;
    cout << "1. for add." << endl;
    cout << "2. for subtract." << endl;
    cout << "3. for multiply." << endl;
    cout << "4. for divide." << endl;

    cout << "value -> ";
    cin >> value;

    if (negativeValue(value)){
      cout << "negative values are not allowed." << endl;
    } else {
          if (value == 0) {
      cout << "system exit code 0..." << endl;
      break;
    } else {
       switch (value) {
      case 1:
        cout << "Enter two value by space: " ;
        cin >> a;
        cin >> b;
        cout << "your product is: " << add(a,b) << endl;
        break;
      case 2:
        cout << "Enter two value by space: ";
        cin >> a;
        cin >> b;
        cout << "your product is: " << subtract(a,b) << endl;
        break;
      case 3:
        cout << "Enter two value by space: ";
        cin >> a;
        cin >> b;
        cout << "your product is: " << multiply(a,b) << endl;
        break;
      case 4:
        cout << "Enter two value by space: ";
        cin >> a;
        cin >> b;
        cout << "your product is: " << divide(a,b) << endl;
        break;
      default:
        cout << "not valid" << endl;
        break;
    }
    }

    }

  }
  return 0;
}
