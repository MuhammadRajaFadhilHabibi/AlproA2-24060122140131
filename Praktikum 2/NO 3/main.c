/*
Nama Program : namaBulan
Deskripsi: Menentukan nama nama bulan dari nomer 1 sampai 12
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 28 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Kamus
  int B;
  //B: Nomer bulan 1 sampai 12

  //Algoritma
  printf("Masukan nomor bulan: ");
  scanf("%d",&B);
  switch (B)
  {
  case 1 :
    printf("Januari");
    break;
  case 2 :
    printf("Februari");
    break;
  case 3 :
    printf("Maret");
    break;
  case 4 :
    printf("April");
    break;
  case 5 :
    printf("Mei");
    break;
  case 6 :
    printf("Juni");
    break;
  case 7 :
    printf("Juli");
    break;
  case 8 :
    printf("Agustus");
    break;
  case 9 :
    printf("September");
    break;
  case 10 :
    printf("Oktober");
    break;
  case 11 :
    printf("November");
    break;
  case 12 :
    printf("Desember");
    break;
  default:
    printf("Masukan nomor bulan tidak tepat");
  }
}
