/*
Nama Program : JumFrekNilTabel
Deskripsi: Menentukan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int T[MAX_SIZE];
    int n, i, j, count, sum = 0;
    // T: elemen tabel t
    // n : ukuran tabel
    // i, j : Counter
    // Count: Kemunculan Elemen
    // sum : Jumlah Kemunculan Elemen yang lebih dari satu kali

    //Algoritma
    printf("Masukkan jumlah elemen T: ");
    scanf("%d", &n);

    printf("Masukkan nilai-nilai elemen T: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (T[i] == T[j]) {
                count++;
            }
        }
        if (count > 1) {
            sum += T[i];
        }
    }

    printf("Jumlah elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah %d", sum);

    return 0;
}
