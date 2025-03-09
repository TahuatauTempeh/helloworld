/*Nama File 	: JumDeret.c*/
/*Deskripsi 	: menghitung jumlah total dari nth deret*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 03/03/25*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    int N;                    /* banyak bilangan yg bakal ditambahkan. n > 0 */
    int totalthingymajig = 0; /* total semuanya. simplenya, mulai dari angka 0 terus tambah 1 dari angka sebelumnya */
    int i = 1;                /* variabel iterasi */

    /*Algoritma*/
    printf("Berapa kali penjumlahan: \n");
    scanf("%d", &N);

    /* buat cek input */
    while (N <= 0)
    {
        printf("Bilangan tidak boleh 0\n");
        scanf("%d", &N);
    }

    /* yg ini buat hitung total deret*/
    while (i <= N)
    {
        totalthingymajig += i; 
        i++;                  
    }

    /*ini output*/
    printf("Total: %d\n", totalthingymajig);

    return 0;
}