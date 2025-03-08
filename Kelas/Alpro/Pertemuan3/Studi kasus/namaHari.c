/*Nama File 	: namaHari.c*/
/*Deskripsi 	: menampilkan nama hari dari angka 1-7. Jika angka diluar itu kembalikan Masukan nomor hari tidak tepat”*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 25/02/2025 10:40*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{   /*Kamus*/
    int x; /*X adalah integer hari dari Senin hingga Minggu yang direpresentasikan menggunakan angka 1-7 dengan 1 = Senin*/

    /*Algoritma*/
    printf("Masukkan angka dari 1-7: \n"); 
    scanf("%d", &x);

    if (x == 1)
    {
        printf("Senin\n");
    }
    else if (x == 2)
    {
        printf("Selasa\n");
    }
    else if (x == 3)
    {
        printf("Rabu\n");
    }
    else if (x == 4)
    {
        printf("Kamis\n");
    }
    else if (x == 5)
    {
        printf("Jumat\n");
    }
    else if (x == 6)
    {
        printf("Sabtu\n");
    }
    else if (x == 7)
    {
        printf("Minggu\n");
    }
    else
    {
        printf("Masukan nomor hari tidak tepat\n");
    }

    return 0;
}