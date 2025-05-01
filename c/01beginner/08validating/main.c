#include <stdbool.h>
#include <stdio.h>

int main() {
    int value1, result;
    float value2;
    double value3;
    char value4;
    char str[100];
    bool value5;
    int tempBool;

    // if(scanf("%d", &value1) == 1){
    //     printf("Entered a number.");
    // } else{
    //     printf("It's not a number.");
    // }

    // Integer
    //
    while (1) {
        printf("Enter an integer: ");
        result = scanf("%d", &value1);
        if (result == 1) break;
        printf("Invalid input. Please enter a valid integer.\n");
        while (getchar() != '\n');
    }

    // Float
    while (1) {
        printf("Enter a float: ");
        result = scanf("%f", &value2);
        if (result == 1) break;
        printf("Invalid input. Please enter a valid float.\n");
        while (getchar() != '\n');
    }

    // Double
    while (1) {
        printf("Enter a double: ");
        result = scanf("%lf", &value3);
        if (result == 1) break;
        printf("Invalid input. Please enter a valid double.\n");
        while (getchar() != '\n');
    }

    // Char
       while (1) {
           printf("Enter a character: ");
           result = scanf(" %c", &value4);  // Note the space before %c
           while (getchar() != '\n');  // Clear remaining input buffer
           if (result == 1) break;
           printf("Invalid input. Please enter a valid character.\n");
       }

       // String (single word)
       while (1) {
           printf("Enter a word (no spaces): ");
           result = scanf("%99s", str);  // Limit input to 99 characters
           while (getchar() != '\n');  // Clear remaining input buffer
           if (result == 1) break;
           printf("Invalid input. Please enter a valid word.\n");
       }

    // Bool (1 or 0)
    while (1) {
        printf("Enter 1 (true) or 0 (false): ");
        result = scanf("%d", &tempBool);
        if (result == 1 && (tempBool == 0 || tempBool == 1)) {
            value5 = tempBool;
            break;
        }
        printf("Invalid input. Please enter 1 or 0.\n");
        while (getchar() != '\n');
    }

    // Output all values
    printf("\n--- You Entered ---\n");
    printf("Integer: %d\n", value1);
    printf("Float: %.2f\n", value2);
    printf("Double: %.2lf\n", value3);
    printf("Character: %c\n", value4);
    printf("String: %s\n", str);
    printf("Boolean: %s\n", value5 ? "true" : "false");

    return 0;
}
