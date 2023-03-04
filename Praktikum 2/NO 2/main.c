/*
Nama Program : namaHari
Deskripsi: menuliskan nama hari sesuai nomor 1 sampai 7
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 28 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  //kamus
  int H;
  //H: Nomer hari 1 sampai 7

  //Algoritma
  printf("Masukan nomor hari: ");
  scanf("%d",&H);
  switch (H)
  {
  case 1 :
    printf("Minggu");
    break;
  case 2 :
    printf("Senin");
    break;
  case 3 :
    printf("Selasa");
    break;
  case 4 :
    printf("Rabu");
    break;
  case 5 :
    printf("Kamis");
    break;
  case 6 :
    printf("Jumat");
    break;
  case 7 :
    printf("Sabtu");
    break;
  default:
    printf("Masukan nomor hari tidak tepat");
  }
  return 0;

}
