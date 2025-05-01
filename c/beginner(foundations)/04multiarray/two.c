#include <stdio.h>

int main(){
    int a = 2, b = 2;
    int mularr[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            printf("Enter array element: ");
            scanf("%d", &mularr[i][j]);
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j< b; j++){
            printf("%d\n", mularr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
