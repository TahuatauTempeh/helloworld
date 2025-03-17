/*Nama File 	: temp.c*/
/*Deskripsi 	: template penulisan program bahasa C*/
/*Pembuat   	: <diisikan Nim-Nama>*/
/*Tgl Pembuatan	: <diisikan tanggal dan jam>*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;
    int i;
    int total;
    int faktor;
    int kategori;

    /*Algoritma*/
    printf("Masukkan bilamgan: \n");
    scanf("%d", &N);

    if (N > 0)
    {
        faktor = 0;
        total = 0;
        for (i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                faktor = faktor + 1;
            }
        }
        for (i = 1; i < N - 1; i++)
        {
            if (N % i == 0)
            {
                total = total + i;
            }
        }

        if (faktor == 2)
        {
            kategori = 1;
        }
        else if (total == N)
        {
            kategori = 2;
        }
        else
        {
            kategori = 3;
        }
        if (kategori == 1)
        {
            printf("Bilangan Prima\n");
        }
        else if (kategori == 2)
        {
            printf("Bilangan Sempurna\n");
        }
        else
        {
            printf("Bilangan Biasa\n");
        }
        

    }
    else
    {
        printf("Masukan tidak boleh kurang dari 0\n");
    }
    

    return 0;
}
