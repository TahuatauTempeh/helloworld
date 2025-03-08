/*Nama File 	: jarakGLBB.c*/
/*Deskripsi 	: menghitung jarak*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 01/03/2025 8:50*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float v0;   /*Kecepatan awal (meter per detik or m/s)*/
    float t;    /*Waktu dalam detik*/
    float a;    /*Percepatan dalam meter per detik kuadrat or m/s^2*/
    float S;    /*Jarak(aku kasih dalam meter soalnya nggak disebutin di soal)*/

    /*Algoritma*/
    printf("Masukkan kecepatan awal kalian: \n");
    scanf("%f", &v0);

    printf("Masukkan waktu tempuh dalam detik: \n");
    scanf("%f", &t);

    printf("Masukkan percepatan yg dialami benda: \n");
    scanf("%f", &a);

    S = v0 * t + (1.0/2.0) * (a * t * t); /*Rumus jarak*/

    printf("Jarak yg ditempuh adalah %.2f meter.\n", S); /*Di limit ke 2 decimal placement*/

    return 0;
}
