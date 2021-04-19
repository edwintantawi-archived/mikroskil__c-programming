#include <stdio.h>

void main(){
  float berat, tinggi, bmi;

  printf("input berat\t:");
  scanf("%f", &berat);
  printf("input tinggi\t:");
  scanf("%f", &tinggi);

  tinggi /= 100;

  bmi = berat / (tinggi * tinggi);

  printf("output\t: %.3f\n", bmi);
}