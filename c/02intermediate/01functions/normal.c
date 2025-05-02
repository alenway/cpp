#include <stdio.h>

// function declaration prototype
int add(int,int);
int subtract(int,int);
int multiply(int,int);
float devide(float,float);

int main(){
    int value1, value2, result1, result2;
    char operand;
    while(1){
        printf("Enter which operation to perform(+, -, /, *): ");
        scanf(" %c", &operand);
        if(operand == '+' || operand == '-' || operand == '/' || operand == '*') break;
        printf("Enter a valid operator or from given operators.\n");
        while(getchar() != '\n');
    }
    while(1){
        printf("Enter two integer values with a space: ");
        result1 = scanf("%d", &value1);
        result2 = scanf("%d", &value2);
        if(result1 == 1 && result2 == 1) break;
        printf("Enter both valid integers.\n");
        while(getchar() != '\n');
    }
    printf("value 1 is : %d and value 2 is : %d\n", value1, value2);
    printf("operation : %c\n", operand);

    switch (operand) {
        case '+':
            printf("%d\n",add(value1,value2)); // function calling
            break;
        case '-':
            printf("%d\n", subtract(value1,value2)); // function calling
            break;
        case '*':
            printf("%d\n", multiply(value1, value2));
            break;
        case '/':
            printf("%f\n", devide(value1, value2));
            break;
        default:
            printf("invalid.");
    }
    return 0;
}


// function definition
int add(int a, int b){
    int result = a + b;
    return result;
}

int subtract(int a, int b){
    int result = a - b;
    return result;
}

int multiply(int a, int b){
    int result = a * b;
    return result;
}

float devide(float a, float b){
    float result = a / b;
    return result;
}
