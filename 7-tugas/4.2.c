#include <stdio.h>

void main(){

  int length, numOfStudents = 1,highScore = 0;

  printf("input : ");
  scanf("%i", &length);

  int scores[length];
  for (int i = 0; i < length; i++) scanf("%i", &scores[i]);

  for (int i = 0; i < length; i++){
      if( scores[i] == highScore ) numOfStudents++;

      if( scores[i] > highScore ) highScore = scores[i];
    
  }

  printf("high score: %i\n", highScore);
  printf("%i Mahasiswa\n", numOfStudents);
}