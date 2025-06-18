#include <stdio.h>
#include <sys/time.h>

int main() {
    struct timeval start, end;
    gettimeofday(&start, NULL);  // Start time

    int num1 = 10, num2 = 20, num3 = 30;

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

    gettimeofday(&end, NULL);  // End time (✅ Added)

    long seconds = end.tv_sec - start.tv_sec;
    long micros = (seconds * 1000000L) + end.tv_usec - start.tv_usec;

    printf("\nTime taken: %ld microseconds\n", micros);
    return 0;
}
