#include<stdio.h>

int main(){
  int input , result;
  while(1){
    printf("Enter value: ");
    result = scanf("%d", &input);

    if(result == 1){
      switch(input){
        case 1:
          printf("case 1");
          break;
        default:
          printf("default case");
      }
      break;
    }
    printf("Enter a valid number.\n");
    while(getchar() != '\n');

  }
  return 0;
}
