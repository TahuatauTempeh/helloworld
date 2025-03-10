/*Nama File 	: FaktorBill.c*/
/*Deskripsi 	: menentukan apa aja faktor dari bilangan N*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 04/03/2025*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;      /*bilangan*/
    int i;      /*buat perulangan*/

    /*Algoritma*/
    printf("Masukan bilangan: \n");
    scanf("%d", &N);

    if (N >= 0)
    {
        printf("Hasil: ");
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                printf(" %d", i);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Masukan tidak boleh 0 atau kurang dari 0\n");
    }
    

    return 0;
}
