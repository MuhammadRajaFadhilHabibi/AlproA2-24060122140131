/*
Nama Program : CekBillPrima
Deskripsi: Menentukan suatu bilangan integer termasuk bilangan prima atau tidak
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 11 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int N;
    int i;
    int count = 0;

    //Algoritma
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d adalah bilangan prima\n", N);
    } else {
        printf("%d bukan bilangan prima\n", N);
    }

    return 0;
}
