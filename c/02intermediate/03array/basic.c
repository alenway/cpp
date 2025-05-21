#include<stdio.h>

int main(){
    int number[] = {1,2,3,4,5,6};
    char characters[] = {'c','h','u','t','i','y','a'};
    char name[] = "Nitin";

    for(int i = 0; i < sizeof(number)/sizeof(number[0]); i++){
        printf("%d\n", number[i]);
    }

    // for(int i = 0; i < sizeof(characters)/sizeof(characters[0]); i++){
    //     printf("%c\n", characters[i]);
    // }

    // printf("%c\n", name[0]);
    return 0;
}
