#include <stdio.h>
#include <string.h>
#include <sys/time.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    struct timeval start, end;
    gettimeofday(&start, NULL);

    int n = 30;
    printf("%d\n", fibonacci(n));

    gettimeofday(&end, NULL);

    // Calculate the time difference
    long seconds = end.tv_sec - start.tv_sec;
    long micros = end.tv_usec - start.tv_usec;

    // Adjust for negative microseconds
    if (micros < 0) {
        micros += 1000000;
        seconds -= 1;
    }

    printf("\nTime taken: %ld seconds and %ld microseconds\n", seconds, micros);
    return 0;
}
