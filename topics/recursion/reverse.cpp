#include <iostream>
using namespace std;

void reverse(int n){
    if (n == 0) return ;
    cout << n << " ";
    reverse(n - 1);
}
int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;
    reverse(n);
    cout << endl;
    return 0;
}
