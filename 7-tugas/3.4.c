#include <stdio.h>

void main(){

  int masuk[2], keluar[2], selisih[2];

  printf("input jam masuk\t\t: ");
  scanf("%i", &masuk[0]);
  printf("input menit masuk\t: ");
  scanf("%i", &masuk[1]);
  printf("input jam keluar\t: ");
  scanf("%i", &keluar[0]);
  printf("input menit keluar\t: ");
  scanf("%i", &keluar[1]);

  // selisih jam

  selisih[0] = keluar[0] - masuk[0];
  if(masuk[0] > keluar[0]){
    selisih[0] = 12 - masuk[0] + keluar[0];
  }

  // selisih menit
  if(masuk[1] > keluar[1]){
    selisih[0] -= 1;
    keluar[1] += 60;
    selisih[1] = keluar[1] - masuk[1];
  } else{
    selisih[1] = keluar[1] - masuk[1];
  }
  printf("%i Jam %i Menit\n", selisih[0], selisih[1]);
  printf("masuk = [ %i : %i ], keluar = [ %i : %i ]\nselisih = [ %i : %i ]", masuk[0], masuk[1], keluar[0], keluar[1], selisih[0], selisih[1]);
}