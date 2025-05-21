#include<stdio.h>
#include<stdbool.h>

int main(){
    int number = 123;
    char character = 'c';
    float floatingpoint = 3.1415926535f;  // Loss of precision
    double doublepoint = 3.1415926535;   // More precise
    bool boolean = true;
    int array[] = {1,2,3,4,5};

    // return types
    printf("number: %d\n", number);
    printf("character: %c\n", character);
    printf("floating point: %.7f\n", floatingpoint);
    printf("double point: %.15lf\n", doublepoint);
    printf("double point: %e\n", doublepoint);
    printf("boolean: %d\n", boolean);

    printf("array byte: %zu\n", sizeof(array));
    return 0;
}
