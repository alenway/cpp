#include <stdio.h>

// function declaration prototype and declare at the same time
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return (n * factorial(n - 1));
    }
}

int main(){
    int num = 5;
    printf("factorial of %d is %d\n", num, factorial(num));
    return 0;
}
