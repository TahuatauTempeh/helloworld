/*Nama File 	: BilPrimN.c*/
/*Deskripsi 	: bilangan prima hingga ke N*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 07/03/2025*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;      /*bilangan prima terdekat ke N atau hingga N*/
    int i;      /*counter*/
    int j;      /*counter*/
    int total;  /*variable pembantu*/

    /*Algoritma*/
    printf("Masukkan bilangan:\n");
    scanf("%d", &N);

    if (N > 0)
    {
        for (i = 1; i < N; i++)
        {
            total = 0;
            for (j = 1; j < N; j++)
            {
                if (i % j == 0)
                {
                    total = total + 1;
                }
            }
            if (total == 2)
            {
                printf("Hasil: %d\n", i);
            }   
        }
    }
    else
    {
        printf("Masukan tidak boleh kurand dari atau sama dengan 0\n");
    }
    return 0;
}
