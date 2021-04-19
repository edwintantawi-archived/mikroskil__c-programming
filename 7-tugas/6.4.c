#include <stdio.h>

void main(){
  int length;

  printf("input : ");
  scanf("%i", &length);
  int numbers[length];

  for (int i = 0; i < length; i++){
    scanf("%i", &numbers[i]);
  }

    for (int i = 0; i < length; i++)
    {
      for (int j = 0; j < length; j++)
      {
        if (numbers[i] < numbers[j])
        {
          int tmp = numbers[j];
          numbers[j] = numbers[i];
          numbers[i] = tmp;
        }
      }
    }

  for (int i = 0; i < length; i++)
  {
    printf("%i ", numbers[i]);
  }
}