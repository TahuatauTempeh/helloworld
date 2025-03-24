/*Nama File 	: mainfile.c*/
/*Deskripsi 	: tukar nilai 2 bilangan*/
/*Pembuat   	: Azka Aqylla Maulana 2406012414195*/



#include <stdio.h> /*header file*/
#include "tukarfile.h"

/*Program Utama*/
int main()
{   /*Kamus*/
    int a;      /*bilangan 1*/
    int b;      /*bilangan 2*/

    /*Algoritma*/
    printf("Masukkan bilangan 1 & 2 (Harus diberi spasi setelah komma angka pertama. Contoh: 5, 9): \n");
    scanf("%d, %d", &a, &b);

    tukar(&a, &b);

    printf("Nilai baru: %d, %d\n", a, b);

    return 0;
}
