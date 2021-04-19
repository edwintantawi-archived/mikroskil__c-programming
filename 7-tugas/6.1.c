#include <stdio.h>

void main(){
  int length;
  float max = 0;

  printf("input : ");
  scanf("%i", &length);
  float numbers[length];

  for (int i = 0; i < length; i++){
    scanf("%f", &numbers[i]);
  }

  for (int i = 0; i < length; i++){
    if(numbers[i] > max){
      max = numbers[i];
    }
  }

  printf("output : %.2f", max);
}