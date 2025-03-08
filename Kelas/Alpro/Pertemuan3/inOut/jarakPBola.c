/*Nama File 	: jarakPBola.c*/
/*Deskripsi 	: menghitung jarak bola*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 01/03/2025 13:20*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float v0;           /*Kecepatan awal*/
    float t;            /*Waktu dalam detik*/
    float g = 9.807;    /*Konstanta gravitasi bumi yaitu 9.807 ms^2*/
    float y;            /*Distance yg dialami bola*/

    /*Algoritma*/
    printf("Masukkan kecepatan awal : \n");
    scanf("%f", &v0);

    printf("Masukkan waktu yg dibutuhkan dalam detik: \n");
    scanf("%f", &t);

    y = v0 * t - ((1.0/2.0) * (g * t * t));

    printf("Jarak yg ditempuh bola adalah %.2f meter.\n", y);

    return 0;
}
