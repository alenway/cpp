#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a = 0, b = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << a << " ";
      int next = a + b;
      a = b;
      b = next;
    }
    cout << endl;
  }
  return 0;
}
