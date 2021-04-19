#include <stdio.h>

void main(){
  int range = 12, masuk, pulang, jamKerja;

  printf("input masuk\t: ");
  scanf("%i", &masuk);
  printf("input pulang\t: ");
  scanf("%i", &pulang);

  jamKerja = (masuk - masuk) + (pulang - masuk);

  if(jamKerja < 0){
    jamKerja = range-masuk + pulang;
  } 


  printf("output\t: %i", jamKerja);
}