#include <iostream>
using namespace std;

void B(int);  // Forward declaration

void A(int n) {
    if (n == 0) return;
    cout << "A: " << n << endl;
    B(n - 1);  // A calls B
}

void B(int n) {
    if (n == 0) return;
    cout << "B: " << n << endl;
    A(n - 1);  // B calls A
}

int main() {
    A(3);
    return 0;
}
