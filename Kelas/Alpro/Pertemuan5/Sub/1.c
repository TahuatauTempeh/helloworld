/*Nama File 	: 1.c*/
/*Deskripsi 	: tukar nilai 2 bilangan*/
/*Pembuat   	: Azka Aqylla Maulana 2406012414195*/



#include <stdio.h> /*header file*/


/*Program tukar angka*/
void tukar() 
{   /*Kamus*/
    int *a;     /*pointer buat nunjuk bilangan 1*/
    int *b;     /*pointer buat nunjuk bilangan 2*/
    int temp;   /*buat placheloder thingy*/

    /*Algoritma*/
    temp = *a;  /*basically placeholdernya ngambil nilai a dan ditukar sama b*/
    *a = *b;
    *b = temp;

}


/*Program Utama*/
int main()
{   /*Kamus*/
    int a;      /*bilangan 1*/
    int b;      /*bulangan 2*/

    /*Algoritma*/
    printf("Masukkan bilangan 1 & 2 (Harus diberi spasi setelah komma angka pertama. Contoh: 5, 9): \n");
    scanf("%d, %d", &a, &b);

    tukar(&a, &b);

    printf("Nili baru: %d, %d\n", a, b);

    return 0;
}
