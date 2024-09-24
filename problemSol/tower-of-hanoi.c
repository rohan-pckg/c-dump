#include <stdio.h>

int towerOfHanoi(int n , char from , char to , char aux);

int main(int argc, char ** argv){

  int numberOfDisks;
  printf("Enter the number of disks : ");
  scanf("%d", &numberOfDisks);

  printf("%d",towerOfHanoi(numberOfDisks , 'A', 'B', 'C'));

  return 0;
}

int towerOfHanoi(int n , char from , char to , char aux){
  int steps = 0;
  if(n ==0 ){
    return 0;
  }
  towerOfHanoi((n -1) , 'A', 'C', 'B');
    printf("Move disk %d from rod %c to rod %c\n", n, from, to);
  towerOfHanoi((n -1) , 'C', 'B', 'A');


  return steps;
}
