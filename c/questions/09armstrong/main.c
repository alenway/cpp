#include<stdio.h>
#include<math.h>

int main(){
  int num,result = 0, remainder, digits = 0, original;

  printf("Enter a number: ");
  scanf("%d", &num);

  original = num;
  int temp = num;
  while(temp != 0){
    digits++;
    temp /= 10;
  }

  temp = num;
  while(temp != 0){
    remainder = temp % 10;
    result += pow(remainder, digits);
    temp /= 10;
  }

  if(result == original){
  printf("%d is an armstrong number.\n", original);
  }else{
    printf("%d is not an armstrong number.\n", original);
  }


  return 0;
}
