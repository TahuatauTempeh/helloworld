/*Nama File     : temp.c*/
/*Deskripsi     : template penulisan program bahasa C*/
/*Pembuat       : <diisikan Nim-Nama>*/
/*Tgl Pembuatan : <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Cek Bilangan Prima*/
void prima(int *N) 
{
    int faktor = 0;
    for (int i = 1; i <= *N; i++) 
    { // Diubah ke i <= *N
        if (*N % i == 0) 
        {
            faktor += 1;
        }
    }
    if (faktor == 2) 
    {
        printf("Bilangan Prima\n");
    } 
    else 
    {
        printf("Bukan Bilangan Prima\n");
    }
}

/*Program cek bilangan sempurna*/
void sempurna(int *N) 
{
    int total = 0;
    for (int i = 1; i < *N; i++) 
    { // Diubah ke i < *N
        if (*N % i == 0) {
            total += i; // Diubah ke total += i
        }
    }
    if (total == *N)    
    {
        printf("Bilangan Sempurna\n");
    } 
    else 
    {
        printf("Bukan Bilangan Sempurna\n");
    }
}

/*Program Utama*/
int main() 
{
    /*Kamus*/
    int N;

    /*Algoritma*/
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

    prima(&N);
    sempurna(&N); // Dihapus komentarnya

    return 0;
}