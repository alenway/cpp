#include <stdio.h>

int main(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
