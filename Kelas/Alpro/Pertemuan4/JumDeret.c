/*Nama File 	: JumDeret.c*/
/*Deskripsi 	: menghitung jumlah total dari nth deret*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 03/03/25*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;                    /*brp banyak bilangan yg mau ditambah dari angka 1 dst. n>0*/
    int totalthingymajig;     /*total*/
    int i = 1;                   /*start/end loop*/

    /*Algoritma*/
    printf("Berapa kali penjumlahan: \n");
    scanf("%d", &N);

    /* Validasi input */
    while (N <= 0)
    {
        printf("Bilangan harus lebih dari 0. Masukkan lagi: \n");
        scanf("%d", &N);
    }

    /* Hitung total deret menggunakan while */
    while (i <= N)
    {
        totalthingymajig += i; // Tambahkan nilai i ke totalthingymajig
        i++;                  // Increment i
    }

    /* Output hasil */
    printf("Total: %d\n", totalthingymajig);

    return 0;
}
