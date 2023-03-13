/*
Nama Program : JumDeret
Deskripsi: Menghitung jumlah deret bilangan integer
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 11 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   // kamus lokal
    int N, total = 0;
    //N: Bilangan Integer
    //total: jumlah total deret bilangan

    //Algoritma
    printf("Masukkan nilai N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        total += i;
    }
    printf("Jumlah total deret bilangan dari 1 hingga %d adalah %d\n", N, total);
    return 0;
}

