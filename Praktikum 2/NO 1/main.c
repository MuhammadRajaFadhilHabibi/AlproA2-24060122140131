/*
Nama Program : bilInteger
Deskripsi: Menghitung keluaran operasi aritmatika pada kalkulator sesuai pilihan
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 28 Februari 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
//kamus lokal
int bilangan ;// bilangan sembarang

//Algoritman
printf("Masukkan Bilangan: ");
if(scanf("%d", &bilangan)){
if (bilangan > 0){
printf("bilangan bulat positif");
}
else if (bilangan == 0){
printf("bilangan nol");
}
else if (bilangan < 0){
printf("bilangan bulat negatif");
}
}
else{
printf("bukan termasuk sebuah bilangan");
}
}

