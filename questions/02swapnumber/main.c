#include <stdio.h>
#include <time.h>

int main(){
    clock_t start, end;
    double cpu_time_used;
    start = clock();

    int value1 = 10, value2 = 30;

    printf("before swapping: \n");
    printf("value1, %d\n", value1);
    printf("value2, %d\n", value2);

    value1 = value1 + value2;
    value2 = value1 - value2;
    value1 = value1 - value2;

    printf("after swaping: \n");
    printf("value1, %d\n", value1);
    printf("value2, %d\n", value2);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken to execute: %f seconds\n", cpu_time_used);
    return 0;
}
