/*Nama File 	: CekBilPrima.c*/
/*Deskripsi 	: cek bilangan prima apa tidak*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 04/03/2025*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;          /*bilangannya, yg di cek*/
    int i;          /*counter*/
    int total;      /*variable tambahan pembantu*/

    /*Algoritma*/
    printf("Masukkan input: \n");
    scanf("%d", &N);

    if (N < 2)
    {
        printf("Masukkan tidak boleh kurang dari 2\n");
    }
    else
    {
        total = 0;
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                total = total + 1;
            }
        }
        if (total == 2)
        {
            printf("Bilangan prima\n");
        }
        else
        {
            printf("Bukan bilangan prima\n");
        }
    }
    return 0;
}