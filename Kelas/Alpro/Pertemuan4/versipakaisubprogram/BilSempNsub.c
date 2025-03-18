/*Nama File : BilSempSub.c*/
/*Deskripsi : basically detect apakah bilangan adalah sempurna atau tidak tapi pakau sub program*/


#include <stdio.h>

/*Sub Program Pencarian Bilangan Sempurna*/
void sempurnadetector(int *N)
{
    /*Kamus*/
    int jumlah = 0;
    int i;

    /*Algoritma*/
    for (i = 1; i < *N; i++)
    {
      if (*N % i == 0)
      {
        jumlah = jumlah + i;
      } 
    }
    if (jumlah == *N)
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
    printf("Masukkan bilangan : \n");
    scanf("%d", &N);


    sempurnadetector(&N);

    return 0;
}