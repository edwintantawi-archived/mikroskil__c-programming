#include <stdio.h>
#include<string.h>

void main(){
  char numbers[9];
  int length;
  printf("input : ");
  scanf("%s", &numbers);
  length = strlen(numbers);
  for (int i = length; i >= 0 ; i--){
    printf("%c", numbers[i]);
  }
}