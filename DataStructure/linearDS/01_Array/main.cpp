#include <iostream>
#include <array>
using namespace std;

int main(){
    // Declare an array of 5 integers
    int arr[5];                    // uninitialized (contains garbage)
    int arr2[5] = {1, 2, 3, 4, 5}; // initialized
    int arr3[] = {10, 20, 30};     // size deduced (3 elements)
    int zeros[10] = {};            // all elements initialized to 0
    int arr5[5] = {1, 2, 3, 4, 5};  // old, dangerous way

    std::array<int, 5> arr4 = {1, 2, 3, 4, 5};

    // C++11 and later (most common)
    std::array<int, 5> arr6 = {1, 2, 3, 4, 5};

    // Direct list initialization (C++11+)
    std::array<int, 5> arr7{1, 2, 3, 4, 5};

    // C++17 and later - even shorter
    std::array arr4{1, 2, 3, 4, 5};   // type and size deduced!

    // Explicit construction
    std::array<int, 5> arr8 = std::array<int, 5>{1, 2, 3, 4, 5};

    std::array<int, 5> arr9 = {1, 2, 3, 4, 5};

    std::cout << "Size: " << arr4.size() << '\n';     // 5
    std::cout << "First: " << arr4.front() << '\n';  // 1
    std::cout << "Last: " << arr4.back() << '\n';    // 5
    std::cout << "Element 2: " << arr4[2] << '\n';   // 3 (no check)
    // std::cout << arr4.at(10); // throws std::out_of_range

    // Range-based for loop works perfectly
    for (int x : arr4) {
        std::cout << x << ' ';
    }
    // Output: 1 2 3 4 5
    //
    //
    // Option 1: Still need std::array
    std::array<int, 5> arr10 = {1, 2, 3, 4, 5};   // works

    // Option 2: Create an alias (recommended if you hate typing std::)
    using std::array;
    array<int, 5> arr11 = {1, 2, 3, 4, 5};        // now works!

    // Option 3: Type alias (very common in real code)
    using Int5 = std::array<int, 5>;
    Int5 arr12 = {1, 2, 3, 4, 5};                  // clean and readable
    return 0;
}
