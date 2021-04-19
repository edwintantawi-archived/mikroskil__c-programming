#include <stdio.h>

void main(){
  float jamMasuk, jamKeluar, jamKerja = 8.00;

  printf("input\t: ");
  scanf("%f", &jamMasuk);

  jamKeluar = jamMasuk + jamKerja;

  if(jamKeluar >= 24){
    jamKeluar -= 24;
  }

  printf("output\t: %.2f", jamKeluar);
}