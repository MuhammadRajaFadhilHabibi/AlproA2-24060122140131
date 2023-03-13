/*
Nama Program : FaktorBil
Deskripsi: Menentukan faktor dari suatu bilangan integer
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 11 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int N, i;
    //N: Bilangan Integer Sembarang

    //Algoritma
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);
    printf("Faktor bilangan dari %d adalah: ", N);

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
