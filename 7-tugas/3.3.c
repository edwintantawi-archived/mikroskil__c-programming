#include <stdio.h>

void main(){

  int jamMasuk, jamKeluar, selisih, biaya = 0, perJam = 500;

  printf("input jam masuk\t\t: ");
  scanf("%i", &jamMasuk);
  printf("input jam keluar\t: ");
  scanf("%i", &jamKeluar);

  selisih = jamKeluar - jamMasuk;

  if(selisih < 0) selisih = (12 - jamMasuk) + jamKeluar;

  if(selisih > 0)biaya += 2000;

  if(selisih > 2) biaya += (perJam * (selisih - 2));

  printf("output : %i\n", biaya);
}