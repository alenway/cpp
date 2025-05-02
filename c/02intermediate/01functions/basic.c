#include <stdio.h>

// function declaration prototype
int add(int, int);

int main(){
    int value1, value2, result;
    printf("Enter two number with a space: ");
    scanf("%d %d",&value1,&value2);
    printf("value 1: %d and value 2: %d\n", value1, value2);
    result = add(value1,value2); // function calling
    printf("%d\n", result);
    return 0;
}

// function definition
int add(int a, int b){
    int result;
    result = a + b;
    return result;
}
