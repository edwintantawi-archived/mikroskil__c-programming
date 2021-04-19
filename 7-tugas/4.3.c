#include <stdio.h>

int main()
{
  int length, current = 3, count = 2, i;

  printf("input : ");
  scanf("%d", &length);
  printf("output : ");

  if (length >= 1) {
    printf("2 ");
  }

  while(count <= length){

    for (i = 2; i <= current - 1; i++){
      if (current % i == 0){
        break;
      }
    }

    if (i == current){
      printf("%d ", current);
      count++;
    }

    current++;
  }

  return 0;
}