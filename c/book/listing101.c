#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    // decleration
    double A[5] = {
        [0] = 9.3,
        [1] = 3.231,
        [2] = 3.E+23,
        [3] = 0.98897,
    };

    for(size_t i = 0; i < 5; ++i){
        printf("element %zu is %g \tits square is %g\n",
            i,
            A[i],
            A[i]*A[i]);
    }
    return EXIT_SUCCESS;
}
