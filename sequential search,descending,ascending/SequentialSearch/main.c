#include <stdio.h>
#include <stdlib.h>

int main() {

// kamus lokal
  int T[] = {1,3,5,-8,12,90,3,5} ;
  int N; //size
  int X;// nilai yang ingin dicari (indeks ke berapa)

  N = sizeof(T);
  X = 5;

  seqsearch(T, N, X);

   return 0;
}

void seqsearch(int T[], int n, int X){
  // kamus lokal
  int i; //indeks untuk pencarian
  int IX; //nilai yang dicari ada pada tabel atau tidak

  //algoritma
  i = 0;
  while (i < n && T[i] != X){
    i++;
  }
  if (T[i] = X){
    IX = i;
  }else {
    IX = -1;
  }

  printf("Terdapat pada indeks ke %d",IX);
}

