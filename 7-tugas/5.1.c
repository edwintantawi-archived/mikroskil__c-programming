#include <stdio.h>

void fibo(int length){
  int initial = 1, current = 1, tmp;
  printf("%i ", initial);
  for (int i = 0; i < length - 1; i++){
    printf("%i ", initial);
    tmp = initial;
    initial += current;
    current = tmp;
  }
}

void main(){
  int length;

  printf("input : ");
  scanf("%i", &length);

  fibo(length);
}