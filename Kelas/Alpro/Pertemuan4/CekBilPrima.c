/*Nama File 	: CekBilPrima.c*/
/*Deskripsi 	: cek bilangan prima apa tidak*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 04/03/2025*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;          /*bilangannya, yg di cek*/
    int prima = 1;  /*checker prima, asumsi awal adalah prima*/
    int i;          /*buat perulangan*/

    /*Algoritma*/
    printf("Masukkan bilangan: \n");
    scanf("%d", &N); 

    if (N <= 0)
    {
        printf("Bilangan tidak boleh 0 or kurang dari 0\n");
    }
    else
    {
        /*cek prima or not*/
        if (N < 2) 
        {
            prima = 0; /*not prima*/
        }
        else if (N == 2) 
        {
            prima = 1; /*prima*/
        }
        else
        {
            /*perulangan hingga N kali*/
            for (i = 2; i * i <= N; i++)
            {
                if (N % i == 0) 
                {
                    prima = 0; 
                    break;   
                }
            }
        }

        if (prima)
        {
            printf("%d adalah bilangan prima\n", N);
        }
        else
        {
            printf("%d bukan bilangan prima\n", N);
        }
    }

    return 0;
}