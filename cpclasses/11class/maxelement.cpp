#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 3, 2, 1, 4, 6, 3, 9, 5, 7, 3};
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    max(arr[i]);
  }

  int max(int a) { return a }
  return 0;
}
