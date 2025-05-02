#include <stdio.h>

// function declaration and definition
int fibonacci(int input){
    if(input <= 1) return input;
    return fibonacci(input -1) + fibonacci(input -2);
}

int main(){
    int input, result, limit = 20;
    printf("Enter a number below %d: ", limit);
    while(1){
        result = scanf("%d", &input);
        if(result == 1){
            if(input <= limit){
                break;
            } else {
                printf("Enter a number in the given limit(%d): ", limit);
            }
        } else{
            printf("Enter a valid input: ");
            while(getchar() != '\n');
            printf("\r");
            printf("Enter a valid input:");
        }
    }

    printf("the fibonacci value on the %d th position is %d \n", input, fibonacci(input));

    return 0;
}
