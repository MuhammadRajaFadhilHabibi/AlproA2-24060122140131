/*
Nama Program : FrekNilTabel
Deskripsi: Menentukan elemen tabel T yang frekuensi kemenculannya lebih dari satu kali
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus Lokal
    int n, i, j, count;
    // n: ukuran tabel T
    // i, j: Counter
    // Count: Kemunculan Elemen

    //Algoritma
    printf("Masukkan jumlah elemen dalam tabel: ");
    scanf("%d", &n);

    int *T = (int*) malloc(n * sizeof(int));
    printf("Masukkan elemen tabel:\n");

    for(i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    printf("Elemen tabel yang frekuensi kemunculannya lebih dari satu kali: ");
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i+1; j < n; j++) {
            if(T[i] == T[j]) {
                count++;
                if(count == 2) {
                    printf("%d ", T[i]);
                }
            }
        }
    }

    free(T);
    return 0;

}
