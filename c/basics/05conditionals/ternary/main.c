#include <stdio.h>

int main(){
    int age;

    printf("Enter you age: ");
    scanf("%d", &age);

    (age > 18) ? printf("you are elegable.\n") : printf("you are not go home.\n");

    return 0;
}
