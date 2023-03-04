/*
Nama Program : hitungTahanan
Deskripsi: Menghitung dan menampilkan total 3 buah tahanan yang dirangkai seri
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 28 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    float t1,t2,t3,total;
    //t1: Tahanan 1
    //t2: Tahanan 2
    //t3: Tahanan 3
    //total: total tahanan

    //Algoritma
    printf("Program untuk cek seri positif\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t1);
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t2);
    printf("Masukan sebuah bilangan : ");
    scanf("%f", &t3);
    if (t1 >= 0 && t2 >= 0 && t3 >= 0){
            total = t1 + t2 + t3;
            printf("Maka total tahanan jika dirangkai seri adalah %.2f\n",total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }

}
