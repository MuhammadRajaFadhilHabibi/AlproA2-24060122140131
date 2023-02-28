/*
Nama Program : gayaSentr
Deskripsi: menentukan hasil gaya sentripetal
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 21 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float F, m,v,r ;
    //gaya sentripetal
    //massa dalam kg
    //kecepatan dalam meter per detik
    //jari jari dalam meter

    //Algoritma
    printf("masukkan massa: ");
    scanf("%f", &m);
    printf("masukkan kecepatan: ");
    scanf("%f", &v);
    printf("masukkan jari jari: ");
    scanf("%f", &r);

    F = m*(v*v/r);

    printf("Gaya Sentripetalnya adalah : %f", F);
    return 0;


}
