/*
Nama Program : volBolaKerct
Deskripsi: menentukan Volume Bola dan Kerucut
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 21 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    float r, Vb, Vk;
    //r: jari jari lingkaran dalam meter
    //Vb: Volume bola
    //Vk: volume kerucut


    //Algoritma
    printf("jari jari dalam meter: ");
    scanf("%f", &r);

    Vb = (1.333)*(3.1415*r*r*r);
    Vk = (0.5)* Vb;

    printf("volume bola: %f", Vb);
    printf("\nvolume kerucut: %f", Vk);
    return 0;
}
