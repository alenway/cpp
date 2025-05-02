#include <stdio.h>

// function declaration and definition
void fibo(int input){
    int a = 0, b = 1, next;
    for(int i = 0; i <= input; i++){
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main(){
    int input, result, limit = 20;
    printf("Enter a number lessthan(%d): ", limit);
    while(1){
        result = scanf("%d", &input);
        if(result == 1){
            if(input <= limit){
                break;
            } else{
                printf("Enter a number in the range (%d): ", limit);
            }
        } else{
            printf("Enter a valid integer type: ");
            while(getchar() != '\n');
            printf("\r");
            printf("Enter a valid integer type: ");
        }
    }

    printf("fibonacci series up to the : %d\n", input);
    fibo(input);
    return 0;
}
