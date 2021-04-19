#include <stdio.h>

void evenOrOdd(int number){
  if(number % 2 == 0){
    printf("Genap");
  }else {
    printf("ganjil");
  }
}

void main(){

  int number;
  printf("input : ");
  scanf("%i\n", &number);

  evenOrOdd(number);
}