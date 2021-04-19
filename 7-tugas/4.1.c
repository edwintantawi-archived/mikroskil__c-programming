#include <stdio.h>

void main(){
  int length, baseUp = 65, baseLow = 97;

  printf("input : ");
  scanf("%i", &length);

  for (int i = baseLow; i < baseLow + length; i++)printf("%c ", i);
  puts("");
  for (int i = baseUp; i < baseUp + length; i++)printf("%c ", i);
  puts("");
}