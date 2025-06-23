#include<iostream>
using namespace std;

void directrecursion(int a){
    if (a == 0)
        return;
    cout << a << endl;
    directrecursion(a - 1);
}

int main(){
    directrecursion(5);
    return 0;
}
