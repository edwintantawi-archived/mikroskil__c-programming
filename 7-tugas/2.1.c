#include <stdio.h>

void main(){

  float r, luas, volume;

  printf("input\t: ");
  scanf("%f", &r);

  luas = 4.0 * 22.0 / 7.0 * r * r;
  volume = 4.0/3.0 * 22.0 / 7.0 * r * r * r;

  printf("output\t: %.3f\n", luas);
  printf("output\t: %.3f\n", volume);
}