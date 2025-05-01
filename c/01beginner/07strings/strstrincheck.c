#include <stdio.h>
#include <string.h>

int main(){
    char name[10];

    printf("Enter you name: ");
    fgets(name, sizeof(name), stdin);

    if(strchr(name, '\n') != NULL){
        printf("Newline character found inside a string!\n");
    } else{
        printf("no newline charater found.\n");
    }

    // ASCII number of new line
    // if (name[i] == 10) { /* found newline */ }
    //
    // to see new hidden line in every character
    // for (int i = 0; name[i] != '\0'; i++) {
    //      printf("[%c]", name[i]);
    // }

    return 0;
}
