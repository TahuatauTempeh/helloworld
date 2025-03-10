/*Nama File 	: CekBilSemp.c*/
/*Deskripsi 	: cek bilangan sempurna or not*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 05/03/2025*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;          /*bilangan nya*/
    int i;          /*buat looper*/
    int checker = 0;    /*buat check bil sempurna or not*/
    
    /*Algoritma*/
    printf("Masukkan bilangan: \n");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Bilangan tidak boleh 0 atau kurang dari 0\n");
    }
    else
    {
        while (i <= N)
        {
         for (i = 1; i < N; i++)
         {
            if (N % i == 0)
            {
                /* code */
            }
            
         }
        }
    }
    
    


    return 0;
}
