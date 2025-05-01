#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int min = 1, max = 50, guess, result;
    bool flag = 0;
    srand(time(NULL));
    int randomNumber = (rand() % (min - max + 1)) + min;

    printf("Guess the number from (1 - 50): \n");

    for(int i = 5; i >= 1; i--){
        while(1){
            printf("number of tries left (%d) : ",i);
            result = scanf("%d", &guess);
            if(result == 1) break;
            printf("Enter a valid Integer.\n");
            while(getchar() != '\n');
        }
        if(guess == randomNumber){
            flag = 1;
            break;
        } else{
            continue;
        }
    }

    if(flag == 1){
        printf("congratulation you guessed it right: %d", guess);
    } else{
        printf("sorry try again, number was: %d", randomNumber);
    }

    printf("\n");
    return 0;
}
