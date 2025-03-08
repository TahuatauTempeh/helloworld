/*Nama File 	: gayaSentr.c*/
/*Deskripsi 	: menghitung besar gaya*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 02/03/2025 7:00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float m;    /*Massa benda dalam kg*/
    float v;    /*Kecepatan benda dalam m/s*/
    float r;    /*Jari jari dalam meter*/
    float F;    /*Gaya*/

    /*Algoritma*/
    printf("Masukkan massa benda: \n");
    scanf("%f", &m);

    printf("Masukkan kecepatan benda: \n");
    scanf("%f", &v);

    printf("Masukkan jari jari benda: \n");
    scanf("%f", &r);

    F = m * ((v * v) / r);

    printf("Gaya benda anda adalah %.2f Newton.\n", F);

    return 0;
}
