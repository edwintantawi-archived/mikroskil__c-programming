#include <stdio.h>

int main() {
  // variabels
  int thn, bln, tgl;

  // input
  scanf("%d", &thn);
  scanf("%d", &bln);
  scanf("%d", &tgl);

  // process
  int jHari = 0;
  int i = 0;

  // cek tahun kabisat/biasa
  do{
 // kabisat
    if(thn % 4 == 0) jHari += 366;
      // biasa
    else jHari += 365;
    i++;
  } while (i < thn);

  i = 1;

  // cek bulan
  while( i < bln ){

    switch (i)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        jHari += 31;
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        jHari += 30;
        break;
      default:
        if(thn % 4 == 0) jHari += 29;
        else jHari += 28;
        break;
    }

    i++;
  }

  jHari += tgl;
  int x = jHari % 7;

  // output
  switch (x)
  {
    case 0:
     printf("Hari = Sabtu");
      break;
    case 1:
     printf("Hari = Minggu");
      break;
    case 2:
     printf("Hari = Senin");
      break;
    case 3:
     printf("Hari = Selasa");
      break;
    case 4:
      printf("Hari = Rabu");
      break;
    case 5:
     printf("Hari = Kamis");
      break;
    default:
     printf("Hari = jumat");
      break;
  }
  printf("\n\n");

  return 0;
}

















