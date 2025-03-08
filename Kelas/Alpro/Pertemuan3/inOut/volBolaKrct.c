/*Nama File 	: volBolaKrct.c*/
/*Deskripsi 	: menghitung volume kerucut dan volume bola*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 02/03/2025 8:00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float r;                /*Jari jari lingkaran dalam meter*/
    float Vb;               /*Volume bola*/
    float Phi = 3.1415;     /*Nilai dari konstanta phi*/
    float Vk;               /*Volume kerucut*/
    
    /*Algoritma*/
    printf("Masukkan jari jari: \n");
    scanf("%f", &r);

    Vb = (4.0/3.0) * (Phi * (r * r * r));

    Vk = (1.0/2.0) * Vb;

    printf("Volume bola adalah %.2f m^3.\n", Vb);
    printf("Volume kerucut anda adalah %.2f m^3. \n", Vk);

    return 0;
}
