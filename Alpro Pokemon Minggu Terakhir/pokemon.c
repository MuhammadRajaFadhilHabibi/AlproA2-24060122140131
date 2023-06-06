/*Nama File 	: pokemon.c*/
/*Deskripsi 	: Mengelompokkan pokemon bedasarkan power*/
/*Pembuat   	: Muhammad Raja Fadhil Habibi*/
/*Tgl Pembuatan	: 5 juni 2023 20.00 WIB*/

/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Program Utama*/
int main(void)
{
    /*Kamus Lokal*/
    int i, capacity;
    int Power[10]; // power pokemon
    char nama_pokemon[10][255]; // array nama pokemon
    char (*name)[100]; // array pointer nama
    int retval;
    FILE *myFILE, *aFile, *bFile;

    i = 0;
    myFILE = fopen("DaftarPokemon.txt", "r");
    aFile = fopen("PokemonSclass.txt","w");
    bFile = fopen("PokemonAclass.txt","w");

    /*Algoritma*/
    if(!myFILE){
        printf("File tidak ditemukan!");
    } else {
        retval = fscanf(myFILE, "%s %d", &nama_pokemon[0],&Power[0]);
        while (retval != EOF)
        {
            i++;
            retval = fscanf(myFILE, "%s %d", &nama_pokemon[i],&Power[i]);
        }
        capacity = i;
        name = malloc(capacity * sizeof(*name));
        for(int s=0;s<capacity;s++){
            strcpy(name[s], nama_pokemon[s]);
        }
        fprintf(aFile, "Pokemon S class \n");
        fprintf(bFile, "Pokemon A class \n");

            for(int a=0;a<capacity;a++){
                if(Power[a] >= 80){
                    fprintf(aFile, "%s %d\n", name[a],Power[a]);
                } else if(nama_pokemon[a] >= 50 && Power[a] < 80){
                    fprintf(bFile, "%s %d\n", name[a],Power[a]);
                }
            }

            printf("pokemon berhasil dikelompokkan");

            free(name);
    }
    return 0;
}
