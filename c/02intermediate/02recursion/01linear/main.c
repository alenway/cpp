// The function makes one recursive call per invocation:
#include <stdio.h>

int sum(int arr[], int n){
    if (n <= 0) return 0; // base case
    return arr[n-1] + sum(arr, n-1);
}

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5,6,7};
    printf("%d\n", sum(arr , n));
    return 0;
}
