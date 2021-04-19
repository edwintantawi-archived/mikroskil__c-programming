#include <stdio.h>

int main(){

  char judul_buku[30], penerbit_buku[30], penulis_buku[30], kategori_buku[20];
  int tahun_terbit, jumlah_buku, id_buku;

  printf("ID Buku\t\t: ");
  scanf("%i", &id_buku);

  printf("Judul Buku\t: ");
  scanf("%s", &judul_buku);

  printf("Penulis Buku\t: ");
  scanf("%s", &penulis_buku);

  printf("Penerbit Buku\t: ");
  scanf("%s", &penerbit_buku);

  printf("kategori Buku\t: ");
  scanf("%s", &kategori_buku);

  printf("Tahun Terbit\t: ");
  scanf("%i", &tahun_terbit);

  printf("Jumlah Buku\t: ");
  scanf("%i", &jumlah_buku);

  printf("\n===================================\n");
  printf("Struk Buku\n");
  printf("===================================\n");
  printf("ID Buku\t\t: %i\n", id_buku);
  printf("Judul Buku\t: %s\n", judul_buku);
  printf("Penulis Buku\t: %s\n", penulis_buku);
  printf("Penerbit Buku\t: %s\n", penerbit_buku);
  printf("kategori Buku\t: %s\n", kategori_buku);
  printf("Tahun Terbit\t: %i\n", tahun_terbit);
  printf("Jumlah Buku\t: %i\n", jumlah_buku);
  printf("===================================\n");

  return 0;
}