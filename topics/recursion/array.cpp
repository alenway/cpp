#include <iostream>
using namespace std;

void printing(int array[], int index , int size){
    if(index == size) return ;
    cout << array[index] << " ";
    printing(array, index + 1, size);
}

int main(){
    int array[] = {2,4,5,6,1,3,5,6,7};
    printing(array, 0 , sizeof(array)/sizeof(array[0]));
    cout << endl;
    return 0;
}
