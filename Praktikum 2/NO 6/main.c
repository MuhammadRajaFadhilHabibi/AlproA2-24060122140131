/*
Nama Program : kallSS
Deskripsi: Menghitung keluaran operasi aritmatika pada kalkulator sesuai pilihan
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 28 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int iA,iB;
    char c;
    float h;
    int i;
    //iA: Sembarang Integer
    //iB: Sembarang Integer
    //X : Menu Pilihan, Character a sampai f
    //i : Hasil operasi aritmatika (Keluaran)

    //Algoritma
    printf("Masukan angka pertama = ");
    scanf("%d", &iA);

    printf("Masukan angka kedua = ");
    scanf("%d", &iB);

    printf("Masukkan pilihan operasi: ");
    scanf(" %c", &c);

    switch(c){
    case 'a':
        printf("%d", iA + iB);
    break;
    case 'b':
        printf("%d", iA - iB);
    break;
    case 'c':
        printf("%d", iA * iB);
    break;
    case 'd':
        h = iA/iB;
        printf("%f", h);
    break;
    case 'e':
        printf("%d", iA / iB);
    break;
    case 'f':
        printf("%d", iA % iB);
    break;
    default:
        printf("Bukan pilihan menu yang benar");

    }
    return 0;
}
