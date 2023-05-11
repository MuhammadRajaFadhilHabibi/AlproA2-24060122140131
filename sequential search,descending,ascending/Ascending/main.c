#include <stdio.h>
#include <stdlib.h>

void CountSORT(int T[], int N) //mengurutkan tabel integer [1..N] dengan pencacahan
{
  //kamus lokal
  int Tabcount [N]; //batas minimum dan maximum harga yang tersimpan dalam T
  int i; //indeks untuk transversal tabel
  int K; //jumlah elemen T yang sudah diisi pada proses pembentukan kembali

  //algoritma
  for(i = 0; i < N; i++){
    Tabcount[i] = 0;
  }

  for(i = 0; i < N;i++){
    Tabcount[T[i]] = Tabcount[T[i]] + 1;
  }

  K = 0;

  for(i = 0; i < N; i++){
    while(Tabcount[i]!=0){
      T[K]=i;
      K = K + 1;
      Tabcount[i]--;
    }
  }
}

int main(){
  int T[] = {2,5,6,3,2,4,1,2,1,7,4};
  int N;
  int i;

  N = sizeof(T)/sizeof(int);

  CountSORT(T,N);

  for(i = 0; i < N;i++){
    printf("%d ",T[i]);
  }

  return 0;
}
