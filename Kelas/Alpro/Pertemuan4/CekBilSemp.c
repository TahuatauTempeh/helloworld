/*Nama File 	: CekBilSemp.c*/
/*Deskripsi 	: cek bilangan sempurna or not*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 05/03/2025*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;              /*bilangan nya*/
    int i;          /*buat looper*/
    int total = 0;      /*buat check bil sempurna or not*/
    
    /*Algoritma*/
    printf("Masukkan bilangan: \n");
    scanf("%d", &N);

    if (N > 0)
    {
        for (i = 1; i < N; i++)
        {
            if (N % i == 0)
            {
                printf("%d\n", i);
                total = total + i;
            }
        }
        if (total == N)
        {
            printf("Bilangan sempurna\n");
        }
        else
        {
            printf("Tidak bilangan sempurna\n");
        }
    }
    else
    {
        printf("Masukan tidak boleh kurang atau sama dengan 0\n");
    }
    return 0;
}
