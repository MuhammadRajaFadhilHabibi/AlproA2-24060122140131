/*
Nama Program : SisiSegitiga
Deskripsi: Menentukan dan mengklasifikasikan 3 buah inputan sisi segitiga termasuk segitiga sams sisi atau sama kaki atau sembarang
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 28 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int s1; //Sisi ke 1
    int s2; //Sisi ke 2
    int s3; //sisi ke 3

    //Algoritma
    printf("Masukan S1= ");
    scanf("%d", &s1);
    printf("Masukan S2= ");
    scanf("%d", &s2);
    printf("Masukan s3= ");
    scanf("%d", &s3);

    if (s1<= 0  || s2 <= 0 || s3<= 0){
        printf("Terdapat nilai yang bukan segitiga");}
    else if (s1==s2 && s2==s3){
        printf("segitiga sama sisi");
    }
    else if (s1==s2 || s1==s3 || s2==s3){
        printf("segitiga sama kaki");
    }
    else
        printf("seigita sembarang");

    return 0;



}
