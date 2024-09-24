#include <stdio.h>
#include <stdlib.h>

void add(int a, int b);

void subtract(int a, int b);
void multiple(int a, int b);
void division(int a, int b);

int main(int argc, char **argv) {

  void (*funcPtr[4])() = {add, subtract, multiple, division};

  printf("example of table function pointer in C\n");

  int choice;

ComeBack:

  printf("[0]add\n[1]subtract\n[2]multiple\n[3]division\n ");
  scanf("%d", &choice);

  if (choice >= 0 && choice <= 3) {
    funcPtr[choice](33, 33);
  } else {
    printf("Invalid choice : ");
    goto ComeBack;
  }
  return 0;
}

void add(int a, int b) { printf("%d", a + b); }

void subtract(int a, int b) { printf("%d", a - b); }

void multiple(int a, int b) { printf("%d", a * b); }

void division(int a, int b) { printf("%d", a / b); }
