/*Nama File 	: bilInteger.c*/
/*Deskripsi 	: menentukan apakah sebuah integer termasuk bilangan bulat positif atau nol atau bulat negative*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 25/02/2025 9:40*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{   /*Kamus*/
    int i; /*Angka yg dimasukkan. Ini pakai integer aja biar gampang, bisa diubah pakai float tapi aku masukin integer aja*/

    /*Algoritma*/
    printf("Masukkan bilangann integer: \n");
    scanf("%d", &i);
    
    if (i < 0) 
    {
        printf("Bilangan negatif\n");
    }
    else if (i > 0)
    {
        printf("Bilangan Positif\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}