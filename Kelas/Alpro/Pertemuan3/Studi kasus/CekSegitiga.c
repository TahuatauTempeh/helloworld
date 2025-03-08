/*Nama File 	: CekSegitiga.c*/
/*Deskripsi 	: menampilkan nama tipe segitiga berdasarkan angle yg diberikan*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 28/02/2025 18:55*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float angle1, angle2, angle3; /*Angle 1 sampai angle 3*/
    float apakahsegitiga; /*Segitiga kan ada 180 derajat, ini buat cek kalau nilainya 180 atau tidak*/

    /*Algoritma*/
    printf("Masukkan angle pertama untuk segitiga: \n");
    scanf("%f", &angle1);
    printf("Masukkan angle ke-dua untuk segitiga: \n");
    scanf("%f", &angle2);
    printf("Masukkan angle ke-tiga untuk segitiga: \n");
    scanf("%f", &angle3);
    
    apakahsegitiga = angle1 + angle2 + angle3;


    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && apakahsegitiga >= 179.99 && apakahsegitiga <= 180.01)
    { 

        if (angle1 == angle2 && angle2 == angle3)
        {
            printf("Segitiga adalah segitiga sama sisi\n");
        }
        else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3)
        {
            printf("Segitiga adalah segitiga sama kaki\n");
        }
        else
        {
            printf("Segitiga adalah segitiga sembarang\n");
        }        
    }
    else
    {
        printf("Terdapat nilai yang bukan sisi segitiga.\n");
    }
    return 0;
}