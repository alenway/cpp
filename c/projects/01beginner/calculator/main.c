#include <stdio.h>
#include <string.h>
#include <sys/time.h>

int main(){
    struct timeval start, end;
    int value1, value2, result;
    char operator;
    printf("Calculator\n");

    printf("Enter value 1: ");
    scanf("%d", &value1);

    printf("Enter value 2: ");
    scanf("%d", &value2);

    printf("Enter these symbols to perform operation(+,-,/,*): ");
    scanf(" %c", &operator);

    gettimeofday(&start, NULL);

    switch(operator){
        case '+':
            result = value1 + value2;
            printf("value 1 + value 2 = %d", result);
            break;
        case '-':
            result = value1 - value2;
            printf("value 1 - value 2 = %d", result);
            break;
        case '/':
            result = value1 / value2;
            printf("value 1 / value 2 = %d", result);
            break;
        case '*':
            result = value1 * value2;
            printf("value 1 * value 2 = %d", result);
            break;
        default:
            printf("Enter a valid number");
    }

    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long micros = (seconds * 1000000L) + end.tv_sec - start.tv_sec;

    printf("\nTime taken: %ld microseconds\n", micros);
    return 0;
}
