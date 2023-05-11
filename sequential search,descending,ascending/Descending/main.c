#include <stdio.h>
#include <stdlib.h>

void MAXSORT(int T[], int N)//Mengurutkan tabel integer [1..N] terurut mengecil dengan maksimum suksesif
{
  //kamus lokal
  int i;    //indeks untuk transversal tabel
  int Pass; //tahapan pengurutan
  int Temp; //memorisasi harga untuk penukaran
  int IMax; //indeks, dimana T (1..pass) bernilai maksimum

  //algoritma

  for(Pass = 0; Pass < N-1 ; Pass++){
    IMax = Pass;
    for (i = Pass + 1; i < N; i++){
      if (T[IMax] < T[i]){
        IMax = i;
      }
    }
    Temp = T[IMax];
    T[IMax] = T[Pass];
    T[Pass] = Temp;
  }
}

int main(){
  int T[] = {1,2,3,4,5,16,17,18,20,11,13,14,15,17,18,12};
  int N;
  int i;

  N = sizeof(T)/sizeof(int);

  MAXSORT(T,N);

  for(i = 0; i < N; i++){
    printf("%d ",T[i]);
  }

  return 0;
}
