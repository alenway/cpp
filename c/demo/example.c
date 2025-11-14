#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int a = 1 + rand() % 100;
    printf("Your random number is %d\n", a);
    return 0;
}
