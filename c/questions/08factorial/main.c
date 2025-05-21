#include<stdio.h>

int main(){
  int f = 1, num = 5;

  for(int i = 1; i <= num; i++){
    f = f * i;
  }

  printf("%d", f);
  return 0;
}
