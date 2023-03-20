/*
Nama Program : JumBarKolMat
Deskripsi: menjumlahkan semua elemen pada baris dan kolomnya
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 20 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus Lokal
    int T[100][100];
    int row, col, i, j;
    int rowSum, colSum;
    //T: ukuran tabel T
    //row: jumlah baris tabel T
    //col: jumlah kolom tabel T
    //rowSum,Colsum: menampung jumlah baris dan kolom
    //i,j: Counter

    //Algoritma
    // Membaca input dari pengguna
    printf("Masukkan jumlah baris: ");
    scanf("%d", &row);
    printf("Masukkan jumlah kolom: ");
    scanf("%d", &col);

    printf("Masukkan elemen:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    // Menghitung jumlah pada baris
    printf("Jumlah pada baris:\n");
    for (i = 0; i < row; i++) {
        rowSum = 0;
        for (j = 0; j < col; j++) {
            rowSum += T[i][j];
        }
        printf("%d ", rowSum);
    }

    // Menghitung jumlah pada kolom
    printf("\nJumlah pada kolom:\n");
    for (i = 0; i < col; i++) {
        colSum = 0;
        for (j = 0; j < row; j++) {
            colSum += T[j][i];
        }
        printf("%d ", colSum);
    }

    return 0;
}
