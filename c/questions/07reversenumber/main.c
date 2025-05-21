#include<stdio.h>

int main(){
  int num = 7392, reverse = 0;

  while ( num != 0 ){
    int digit = num % 10;
    reverse = reverse * 10 + digit;
    num = num / 10;
  }

  printf("Reversed number is : %d\n", reverse);
  return 0;
}
