/*Nama File 	: namaBulan.c*/
/*Deskripsi 	: menampilkan nama bulan dari angka 1-12. Jika angka diluar itu kembalikan Masukan nomor bulan tidak tepat”*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 25/02/2025 11:50*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{   /*Kamus*/
    int x; /*X adalah integer bulan dari January hingga Decembre yang direpresentasikan menggunakan angka 1-12 dengan 1 = Januari*/

    /*Algoritma*/
    printf("Masukkan angka dari 1-12: \n"); 
        scanf("%d", &x);
    
        if (x == 1)
        {
            printf("Bulan Januari\n");
        }
        else if (x == 2)
        {
            printf("Bulan Februari\n");

        }
        else if (x == 3)
        {
            printf("Bulan Maret\n");
        }
        else if (x == 4)
        {
            printf("Bulan April\n");
        }
        else if (x == 5)
        {
            printf("Bulan Mei\n");
        }
        else if (x == 6)
        {
            printf("Bulan Juni\n");
        }
        else if (x == 7)
        {
            printf("Bulan Juli\n");
        }
        else if (x == 8)
        {
            printf("Bulan Agustus\n");
        }
        else if (x == 9)
        {
            printf("Bulan September\n");
        }
        else if (x == 10)
        {
            printf("Bulan October\n");
        }
        else if (x == 11)
        {
            printf("Bulan November\n");
        }
        else if (x == 12)
        {
            printf("Bulan Decembre\n");
        }
        else
        {
            printf("Masukan nomor bulan tidak tepat\n");
        }
    return 0;
}