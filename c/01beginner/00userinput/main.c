#include <stdio.h>
#include <stdbool.h> // For bool, true, false

// Structure Example
struct Person {
    char name[50];
    int age;
};

int main() {
    // Primitive Data Types
    int number;
    char character;
    bool boolean_value;
    float floating;
    double double_value;

    printf("Enter an integer value: ");
    scanf("%d", &number);

    printf("Enter a character: ");
    scanf(" %c", &character); // space before %c to consume any leftover newline

    printf("Enter a boolean value (0 or 1): ");
    scanf("%d", (int *)&boolean_value); // in C, we take 0 or 1 for bool

    printf("Enter a floating-point value: ");
    scanf("%f", &floating);

    printf("Enter a double value: ");
    scanf("%lf", &double_value);

    printf("\n--- Output ---\n");
    printf("Integer value: %d\n", number);
    printf("Character: %c\n", character);
    printf("Boolean: %s\n", boolean_value ? "true" : "false");
    printf("Floating value: %.2f\n", floating);
    printf("Double value: %.4lf\n", double_value);

    // Non-Primitive Data Types
    char name[100];
    int numberArray[5];
    int multiArray[2][2];

    printf("\nEnter your name: ");
    scanf("%s", name); // reads until whitespace

    printf("Enter 5 integers for the array:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numberArray[i]);
    }

    printf("Enter 4 integers for 2x2 matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &multiArray[i][j]);
        }
    }

    printf("\n--- Output ---\n");
    printf("Name: %s\n", name);

    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numberArray[i]);
    }
    printf("\n");

    printf("Matrix elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", multiArray[i][j]);
        }
        printf("\n");
    }

    // Structure usage
    struct Person p;
    printf("\nEnter person's name: ");
    scanf("%s", p.name);
    printf("Enter person's age: ");
    scanf("%d", &p.age);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    return 0;
}
