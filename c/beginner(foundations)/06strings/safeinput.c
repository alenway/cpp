#include <stdio.h>
#include <string.h>  // for strlen

int main(){
    char name[10];
    printf("Enter you name: ");
    fgets(name , sizeof(name), stdin);

    // Remove trailing newline if it exists
    name[strcspn(name, "\n")] = 0;

    printf("%s", name);
    return 0;
}
