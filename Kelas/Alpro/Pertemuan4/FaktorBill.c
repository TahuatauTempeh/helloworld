/*Nama File 	: FaktorBill.c*/
/*Deskripsi 	: menentukan apa aja faktor dari bilangan N*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 04/03/2025*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;          /*bilangan*/
    int i = 1;      /*thingymajig*/

    /*Algoritma*/
    printf("Masukkan bilangan N : \n");
    scanf("%d", &N);

    /*Validasi input*/
    while (N <= 0)
    {
        printf("Bilangan harus tidak boleh <= 0. Masukkan lagi: \n");
        scanf("%d", &N);
    }

    /*Mencari faktor bilangan*/
    printf("Faktor bilangan dari %d adalah: ", N);
    while (i <= N)
    {
        if (N % i == 0)
        {
            printf("%d", i); 
            if (i != N)   
            {
                printf(", ");
            }
        }
        i++;
    }
    printf("\n");

    return 0;
}
