#include <stdio.h>

int main(){
    char name[10];

    printf("Enter you name: ");
    fgets(name, sizeof(name), stdin);

    printf("\n --------- Memory dump----------- \n");
    for(int i = 0; i < 10; i++){
        printf("Character:  '%c' || ASCII:  %d  || Hex:  %02x\n", (name[i] >= 32 && name[i] <= 126) ? name[i] :  '.', name[i], (unsigned char)name[i]);
    }
    return 0;
}
