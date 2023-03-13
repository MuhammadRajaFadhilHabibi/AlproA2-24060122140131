/*
Nama Program : CekBillSemp
Deskripsi: Menentukan suatu bilangan integer termasuk bilangan sempurna atau bukan
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 11 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus Lokal
    int N, i, sum = 0;
    //N: Bilangan Integer sembarang

    //Algoritma
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (i = 1; i < N; i++) {
        if (N % i == 0) {
            sum += i;
        }
    }

    if (sum == N) {
        printf("%d adalah bilangan sempurna\n", N);
    } else {
        printf("%d bukan bilangan sempurna\n", N);
    }

    return 0;
}
