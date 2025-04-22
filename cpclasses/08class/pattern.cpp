#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    // Print spaces for right alignment
    for (int j = 1; j <= n - i; j++) {
      cout << "  "; // Two spaces for better formatting
    }

    // Increasing numbers
    int num = i;
    for (int k = 1; k <= i; k++) {
      cout << num << " ";
      num++;
    }

    // Decreasing numbers
    num -= 2;
    for (int k = 1; k < i; k++) {
      cout << num << " ";
      num--;
    }

    cout << endl;
  }

  return 0;
}
