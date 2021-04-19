#include <stdio.h>
#include <string.h>

void main(){

  char text[64];

  printf("input : ");
  scanf("%s", &text);

  int textLength = strlen(text);

  for (int i = 0; i < textLength; i++){
    if(((int)text[i] >= 65 && (int)text[i] <= 90) || ((int)text[i] >= 97 && (int)text[i] <= 122)){
      printf("output : %c\n", text[i]);
    }
  }
}