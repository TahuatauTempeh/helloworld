/*Nama File 	: kallSS.c*/
/*Deskripsi 	: kalkulator sederhana*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 3/03/2025 6:40*/

#include <stdio.h> /*header file*/
#include <stdlib.h>

/*Program Utama*/
int main()
{   /*Kamus*/
    int iA;         /*input bilangan bulat*/
    int iB;         /*input bilangan bulat*/
    int hasil;      /*hasil dari operasi dua bilangan*/
    char operasi;   /*menentukan operasi di kalkulator*/

    /*Algoritma*/
    printf("Masukkan bilangan pertama: \n");
    scanf("%d", &iA);

    printf("Masukkan bilangan kedua: \n");
    scanf("%d", &iB);

    printf("Masukkan operator (a - f): \n");
    scanf(" %c", &operasi);

    if (operasi == 'a' || operasi == 'A') /*addition*/
    {
        hasil = iA + iB;
        printf("Hasil : %d\n", hasil);
    }
    else if (operasi == 'b' || operasi == 'B') /*subtraction*/
    {
        hasil = iA - iB;
        printf("Hasil : %d\n", hasil);
    }
    else if (operasi == 'c' || operasi == 'C') /*multiplication*/
    {
        hasil = iA * iB;
        printf("Hasil : %d\n", hasil);
    }
    else if (operasi == 'd' || operasi == 'D') /*division*/
    {
        hasil = iA / iB;
        printf("Hasil : %d\n", hasil);
    }
    else if (operasi == 'e' || operasi == 'E') /*div operation*/
    {
        div_t hasil = div(iA, iB);
        printf("Hasil : %d\n", hasil.quot);
    }
    else if (operasi == 'f' || operasi == 'F')
    {
        hasil = iA % iB;
        printf("Hasil : %d\n", hasil);
    }
    else
    {
        printf("Bukan pilihan menu yang benar\n");
    }
    
    return 0;
}
