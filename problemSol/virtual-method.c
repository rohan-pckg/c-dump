#include <stdio.h>
#include <stdlib.h>

typedef struct {
  void (*playwhat)();
}player;

void cricket(){
  printf("play cricket!\n");
}

void footbool(){
  printf("Play football\n");
}

int main(int argc, char ** argv){
  printf("Implementing Vertiual Methods in C\n");

  player rohan = {cricket};

  rohan.playwhat();


  return 0;
}
