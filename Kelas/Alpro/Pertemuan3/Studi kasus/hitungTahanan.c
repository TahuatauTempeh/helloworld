/*Nama File 	: hitungTahanan.c*/
/*Deskripsi 	: menampilkan nama hari dari angka 1-7. Jika angka diluar itu kembalikan Masukan nomor hari tidak tepat”*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 25/02/2025 13:25*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int tahanan1, tahanan2, tahanan3; /*Basically ini buat nilai jumlah tahanan dari tahanan 1 until tahanan 3*/
    int total_tahanan; /*Total dari seluruh tahanan*/

    /*Algoritma*/
    printf("Masukkan nilai tahanan 1: \n");
    scanf("%d", &tahanan1);

    printf("Masukkan nilai tahanan 2: \n");
    scanf("%d", &tahanan2);

    printf("Masukkan nilai tahanan 3: \n");
    scanf("%d", &tahanan3);

    if (tahanan1 < 0 || tahanan2 < 0 || tahanan3 < 0)
    {
        printf("Masukan tahanan tidak boleh negatif \n");
    }
    else
    {
        total_tahanan = tahanan1 + tahanan2 + tahanan3;
        printf("Total tahanan adalah: %d \n", total_tahanan);
    }

    return 0;
}