#include <stdio.h>

int iterator(char characters[64], int *counter){
  for (int i = 0; i < 64; i++)
  {
    if(characters[i] == 0) break;
    *counter += 1;
  }
}

void main(){
  char characters[64];
  int numOfChars = 0;
  int *ptr_numOfChar = &numOfChars;
  printf("input\t: ");
  gets(characters);
  iterator(characters, ptr_numOfChar);
  printf("output\t: %d\n", numOfChars);
}




