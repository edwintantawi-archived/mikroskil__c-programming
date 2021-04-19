#include <stdio.h>
#include <string.h>

void main(){

  int howMany = 0;
  char text[64];
  char search;

  printf("input : ");
  gets(text);
  printf("input : ");
  scanf("%c", &search);
  int textLength = strlen(text);
  for (int i = 0; i < textLength; i++){
    if(text[i] == search){
      howMany++;
    }
  }

  printf("output : %i\n", howMany);
}