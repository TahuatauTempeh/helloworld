/*Nama File 	: BilSempN.c*/
/*Deskripsi 	: bilangan sempurna hingga ke N*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 08/03/25*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;      /*bilangan yg diperiksa*/
    int i;      /*counter iterasi*/
    int j;      /*counter cek faktor*/
    int total;  /*jumlah*/

    /*Algoritma*/
    printf("Masukan input: \n");
    scanf("%d", &N);

    if (N > 0)
    {
        for (i = 1; i < N; i++)
        {
            total = 0;
            for (j = 1; j < i - 1; j++)
            {
                if (i % j == 0)
                {
                    total = total + j;
                }
            }
            if (total = i)
            {
                printf("Hasil: %d\n", i);
            }
        }
        
    }
    else
    {
        printf("Masukan tidak boleh kurang dari atau sama dengan 0\n");
    }
    return 0;
}
