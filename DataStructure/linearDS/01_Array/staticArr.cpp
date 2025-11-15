#include <iostream>
#include <array>
using namespace std;

int main(){
    // Create an Array:
    // int arr[] = {2,3,4}; wrong
    std::array arr{1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size << endl;

    // Read
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

    // Update
    for (int i = 0; i < size; i++){
        cout << arr[i] + 10 << endl;
    }

    // Delete
    int index = 3;
    for (int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = 0;

    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
