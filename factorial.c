#include <stdio.h>

int factorial(int num);

int main(int argc, char ** argv){

  int number;

  printf("Enter a number : ");
  scanf("%d", &number);

  printf("%d\n",factorial(number));

  return 0;
}


int factorial(int num){
  if(num == 1){
    return 1;
  }
  else{
    return num * factorial(num - 1);
  }

  
}

