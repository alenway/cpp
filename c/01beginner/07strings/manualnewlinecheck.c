#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    int found = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Newline character found inside the string!\n");
    else
        printf("No newline character found.\n");

    return 0;
}
