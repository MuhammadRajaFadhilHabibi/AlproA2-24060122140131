/*
Nama Program : jarakPBola
Deskripsi: menentukan jarak gerak parabola
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 21 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float y, v0, t;
    //y  : Jarak gerak parabola
    //v0 : kecepatan awal dalam meter per detik
    //t  :  waktu dalam detik


    //Algoritma
    printf("masukkan input kecepatan awal: ");
    scanf("%f", &v0);

    printf("input waktu: ");
    scanf("%f", &t);

    y = v0*t-(0.5)*(9.8*t*t);

    printf("jarak gerak parabola: %f", y);

    return 0;
}
