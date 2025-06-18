#include<stdio.h>

int main(){
    int num, a = 0, b = 1, next;
    printf("Enter a number: ");
    scanf("%d", &num);

  for(int i = 1; i <= num; i++){
   printf("%d\n", a);
    next = a + b;
    a = b;
    b = next;
  }
    return 0;
}
