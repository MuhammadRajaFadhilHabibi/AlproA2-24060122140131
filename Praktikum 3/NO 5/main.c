/*
Nama Program : BilPrimaN
Deskripsi: Mencetak bilangan prima sampai dengan bilangan integer sembarang N
Nama Pembuat: Muhammad Raja Fadhil Habibi
NIM : 24060122140131
Tanggal: 11 Maret 2023
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kamus Lokal
   int i, j, n, isPrime;

   //Algoritma
   printf("Masukkan bilangan N: ");
   scanf("%d", &n);

   printf("Bilangan prima dari 2 hingga %d adalah: ", n);

   // 2 adalah bilangan prima pertama
   printf("2 ");

   // loop untuk mencari bilangan prima dari 3 hingga N
   for(i=3; i<=n; i++) {
      isPrime = 1; // asumsikan bilangan i adalah prima

      // loop untuk memeriksa apakah bilangan i prima atau tidak
      for(j=2; j<=i/2; j++) {
         if(i%j==0) {
            isPrime = 0; // bilangan i bukan prima
            break;
         }
      }

      // jika bilangan i prima, cetak
      if(isPrime == 1) {
         printf("%d ", i);
      }
   }

   return 0;
}
