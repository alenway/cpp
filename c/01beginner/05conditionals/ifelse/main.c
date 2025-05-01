#include <stdio.h>

int main(){
    int age;

    printf("Enter you age: ");
    scanf("%d", &age);

    if(age > 18){
        printf("you are eligable.\n");
    } else if(age == 18){
        printf("Congratulation you can't vote.\n");
    } else {
        printf("Fuck off!\n");
    }
    return 0;
}
