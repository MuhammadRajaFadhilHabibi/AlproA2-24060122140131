/*
Nama Program : NilMax2Tabel
Deskripsi: Menentukan nilai max ke 2 dari sebuah bilangan integer
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus lokal
    int T[] = {7, 4, 5, 6, 5, 3, 5, 1, 4};
    int n = sizeof(T) / sizeof(T[0]);
    int max1 = INT_MIN, max2 = INT_MIN;
    //T: Bilangan Integer Sembarang
    //N: Ukuran Tabel
    //max1, max 2: nilai maksimum ke 1 dan 2

    //Algoritma
    for (int i = 0; i < n; i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        } else if (T[i] > max2) {
            max2 = T[i];
        }
    }
    printf("Nilai maksimum ke-2 adalah %d\n", max2);
    return 0;
}
