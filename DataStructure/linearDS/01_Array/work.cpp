#include <iostream>
#include <array>
using namespace std;

int main() {
    std::array arr1{1, 2, 3, 4, 5, 6, 7};   // CTAD works!
    // std::array<int, 7> arr2 = {10, 20, 30, 40, 50, 60, 70}; // classic way

    cout << "Size = " << arr1.size() << "\n";
    for(int x : arr1) cout << x << ' ';
    cout << "\n";
    return 0;
}
