#include <iostream>
using namespace std;

int sum(int value){
    if(value == 0) return 0;
    return value + sum(value - 1);
}

int main(){
    cout << "Enter any value: ";
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}
