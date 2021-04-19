#include <stdio.h>
#include <string.h>

void main(){

  char text[32];

  printf("input : ");
  scanf("%s", &text);

  int textLength = strlen(text);
  char flipText[textLength];

  strcpy(flipText, text);
  strrev(flipText);

  printf("%s\n", text);
  printf("%s\n", flipText);
  if(strcmp(text,flipText) == 0){
    printf("Palindrome\n");
  }else{
    printf("bukan Palindrome\n");
  }
}