#include <stdio.h>

void secret_function() {
    printf("You have hacked into the system!\n");
}

int main() {
    char name[10];

    printf("Enter your name: ");
    gets(name); // ⚠️ Very unsafe function

    printf("Hello, %s\n", name);

    return 0;
}
