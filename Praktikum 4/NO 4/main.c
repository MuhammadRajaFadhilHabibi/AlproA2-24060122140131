/*
Nama Program : SimetriTabel
Deskripsi: Menentukan bahwa T1 dan T2 simetri atau tidak
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int T1[100], T2[100];
    int size1, size2, i, j;
    int simetri = 1; // inisialisasi sebagai simetri
    //T1,T2: bilangan integer sembarang di tabel T1,T2
    //size1,size2: ukuran tabel
    //simetri: menentukan simetri atau tidak

    //Algoritma
    // Membaca input dari pengguna
    printf("Masukkan ukuran T1: ");
    scanf("%d", &size1);
    printf("Masukkan elemen T1: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &T1[i]);
    }

    printf("Masukkan ukuran T2: ");
    scanf("%d", &size2);
    printf("Masukkan elemen T2: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &T2[i]);
    }

    // Cek simetri
    if (size1 != size2) {
        simetri = 0; // ukuran tidak sama
    }
    else {
        for (i = 0; i < size1; i++) {
            if (T1[i] != T2[i]) {
                simetri = 0; // elemen tidak sama
                break;
            }
        }
    }

    // Output hasil
    if (simetri) {
        printf("T1 dan T2 Simetri.\n");
    }
    else {
        printf("T1 dan T2 Tidak Simetri.\n");
    }

    return 0;
}
