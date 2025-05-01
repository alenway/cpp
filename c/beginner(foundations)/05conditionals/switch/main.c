#include <stdio.h>

int main(){
    int day;

    printf("Enter no. of day: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        default:
        printf("sunday");
    }

    return 0;
}
