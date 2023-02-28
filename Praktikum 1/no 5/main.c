/*
Nama Program : luasKellLayang
Deskripsi: Menentukan luas dan keliling layang layang
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 21 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float s1, s2, d1, d2, Luas, Kell;
    //sisi satu layang layang dalam meter
    //sisi dua layang layang dalam meter
    //diagonal satu layang layang dalam meter
    //diagonal dua layang layang dalam meter
    //Luas Layang layang
    //Keliling Layang Layang

    //Algoritma
    printf("masukkan s1: ");
    scanf("%f", &s1);
    printf("masukkan s2: ");
    scanf("%f", &s2);
    printf("masukkan d1: ");
    scanf("%f", &d1);
    printf("masukkan d2: ");
    scanf("%f", &d2);

    Luas = (0.5) * d1 * d2;
    Kell = 2 * (s1+s2);

    printf("Luas Layang Layang: %f\n", Luas);
    printf("Keliling Layang Layang: %f", Kell);
    return 0;
}
