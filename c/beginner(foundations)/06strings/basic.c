#include <stdio.h>

int main(){
    char manualname[6] = {'A', 'l', 'i', 'c', 'e', '\0'};
    char name[] = "Narendra";
    char emptyname[6];
    printf("Enter you name: ");
    fgets(emptyname ,sizeof(emptyname), stdin);
    printf("you name is : %s", emptyname);
    return 0;
}
