#include <stdio.h>

void isKabisat(int years[], int length){
  for (int i = 0; i < length; i++)

    if (years[i] % 4 == 0)
    {
      printf("\n%d Merupakan Tahun Kabisat!", years[i]);
    }
    else
    {
      printf("\n%d Bukan Tahun Kabisat!", years[i]);
    }
  printf("\n");
}

void main() {

  int num,i;
  printf("Input Jumlah Tahun : ");
  scanf("%d", &num);
  int years[num];
  i = 0;
  while (i < num)
  {
    printf("Tahun ke-%d : ", i+1);
    scanf("%d", &years[i]);
    i++;
  }
  isKabisat(years, num);
}








