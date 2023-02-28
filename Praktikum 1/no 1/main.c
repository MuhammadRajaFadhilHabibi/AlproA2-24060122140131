/*
Nama Program : jarakGLBB
Deskripsi: Menentukan jarak GLBBB
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 21 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus

    float s;  //merupakan jarak
    float v0; //merupakan kecepatan awal
    float t;  // merupakan waktu
    float a;  // merupakan percepatan

    // algoritma
    // masukkan rumus s

    printf("masukkan keceptan awal: ");
    scanf("%f", &v0);
    printf("masukkan waktu: ");
    scanf("%f", &t);
    printf("masukkan percepatan: ");
    scanf("%f", &a);
    s = v0 * t + (0.5) * (a * t * t);
    printf("Hasil dari s adalah : %f\n",s);
    return 0;
}


