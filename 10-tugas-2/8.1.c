#include <stdio.h>

void main(){
  int numbersLength;
  int *ptr = &numbersLength;
  printf("input : ");
  scanf("%d", ptr);

  for (int i = 1; i <= numbersLength; i++){
    printf("%d ", i);
  }

  puts("");
};