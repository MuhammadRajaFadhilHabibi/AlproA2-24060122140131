/*
Nama Program : BilSempN
Deskripsi: Mencetak bilangan sempurna sampai dengan bilangan integer sembarang N
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 11 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int n, i, j, sum;

    //Algoritma
    printf("Masukkan bilangan N: ");
    scanf("%d", &n);

    printf("Bilangan Sempurna dari 1 sampai %d adalah: ", n);

    for (i = 1; i <= n; i++) {
        sum = 0;
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
