#include <stdio.h>
#include <stdlib.h>

#define INITIAL_BUFFER_SIZE 10

char *dynamicBuffer();

int main(int argc, char *argv[]) {

  printf("implementing a dynamic buffer input\n");

  char *string = dynamicBuffer();

  printf("%s", string);
  return 0;
}

char *dynamicBuffer() {
  int bufferSize = INITIAL_BUFFER_SIZE;
  int length = 0;

  char *bufferInput = (char *)malloc(bufferSize * sizeof(char));

  if (bufferInput == NULL) {
    printf("Memory allocation Failed[bufferInput]");
  }

  char ch;

  while ((ch = getchar()) != '\n' && ch != EOF) {

    if (length == bufferSize - 1) {
      bufferSize *= 2;
      char *temp = (char *)realloc(bufferInput, bufferSize * sizeof(char));

      if (temp == NULL) {
        printf("Memory allocation Failed[temp]");
      }

      bufferInput = temp;
    }

    bufferInput[length] = ch;
    length++;
  }

  bufferInput[length] = '\0';

  char *finalBuffer = (char *)realloc(bufferInput, (length + 1) * sizeof(char));

  if (finalBuffer == NULL) {
    printf("Memory allocation Failed [finalBuffer]");
  }

  return finalBuffer;
}
