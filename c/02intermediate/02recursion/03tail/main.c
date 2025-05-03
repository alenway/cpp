#include <stdio.h>

// function declaration and definition
int factorialTail(int n, int result){
    if (n <= 1) return result;
    return factorialTail(n - 1, n * result);
}

int main(){
    int input = 5, result = 1;
    printf("%d\n", factorialTail(input , result));
    return 0;
}
