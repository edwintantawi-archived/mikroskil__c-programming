#include <stdio.h>

void main(){
  int length;

  printf("Jumlah matakuliah : ");
  scanf("%i", &length);

  float points[length], ipk = 0;

  for (int i = 0; i < length; i++){
    printf("Nilai matakuliah-%i (0-4) : ", i + 1);
    scanf("%f", &points[i]);
    ipk += points[i];
  }
  
  ipk /= length;

  puts("");
  printf("IPK anda : %.2f\n", ipk);
  printf("Anda berhak mengambil tugas akhir jalur ");

  if(ipk < 3){
    printf("proyek !\n");
  }else {
    printf("skripsi !\n");
  }
}
