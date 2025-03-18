/*Nama File 	: temp.c*/
/*Deskripsi 	: template penulisan program bahasa C*/
/*Pembuat   	: <diisikan Nim-Nama>*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/
// #include <stdbool.h>


/*Program Cek Bilangan Prima*/
void prima(int *N)
{
    int faktor = 0;
    for (int i = 1; i < *N; i++)
    {
        if (*N % i == 0)
        {
            faktor += 1;   
        }
    } 
    if (faktor == 2)
    {
        printf("Bilangan Prima\n");
    }
}

// bool isprim(int N)
// {
//     if (prima)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

/*Program cek bilangan sempurna*/
void sempurna(int *N)
{
    int total = 0;
    for (int i = 1; i < *N - 1; i++)
    {
        if (*N % i == 0)
        {
            total++;
        }
    }
    if (total == *N)
    {
        printf("Bilangan Sempurna\n");
    }
}

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;

    /*Algoritma*/
    printf("Masukkan bilangan : \n");
    scanf("%d", &N);

    prima(&N);
    // sempurna(&N);

    return 0;
}