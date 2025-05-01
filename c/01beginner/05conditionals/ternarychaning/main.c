#include <stdio.h>

int main(){
    int grades;

    printf("Enter you grades: ");
    scanf("%d", &grades);

    (grades >= 90) ? printf("Grade is A\n") :
    (grades >= 70) ? printf("Grade is B\n") :
    (grades >= 50) ? printf("Grade is C\n") :
    (grades >= 40) ? printf("Grade is D\n") :
    printf("Grade is F\n");

    return 0;
}
