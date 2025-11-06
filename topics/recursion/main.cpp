#include <iostream>
using namespace std;

void sum(int arr1[], int size){
      for (int i = 0; i < size; i++){
            cout << arr1[i] << endl;
      }
      cout << endl;
}
int main(){
      int arr1[] = {2,4,3};
      sum(arr1, sizeof(arr1)/sizeof(arr1[0]));
      return 0;
}
