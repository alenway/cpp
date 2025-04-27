// for dynamic array in c we have to use
// dynamic function like
// malloc()
// calloc()
// realloc()
// free() which are in stdlib.h

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    // create dynamic array
    int *arr = (int*) malloc(n*sizeof(int));

    // check if memory allocation is successful
    if(arr == NULL){
        printf("memory no allocated\n");
        return 1;
    }

    // input values
    for(int i = 0; i < n; i++){
        printf("Enter a number: %d ->", i+1);
        scanf("%d",&arr[i]);
    }

    // print values
    printf("Array elements:");
    for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }

    free(arr);
    return 0;
}
