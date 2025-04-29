#include <stdio.h>
#include <time.h>
int main(){
    clock_t start, end;
    double cpu_time_used;
    int num1 = 10, num2 = 20, num3 = 30 ;
    start = clock();

    if(num1 > num2){
        if(num1 > num3){
            printf("number 1 is the greatest: %d", num1);
        } else{
            printf("number 3 is the greatest: %d", num3);
        }
    } else if(num2 > num1){
        if(num2 > num3){
            printf("number 2 is the greatest: %d", num2);
        } else{
            printf("number 3 is the greatest: %d", num3);
        }
    } else{
        printf("number 3 is the greatest: %d", num3);
    }



    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nTime taken to execute: %f seconds\n", cpu_time_used);
    return 0;
}
