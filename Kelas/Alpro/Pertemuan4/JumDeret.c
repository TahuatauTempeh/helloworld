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
    int i = 1;                /* buat ulang ulang */

    /*Algoritma*/
    printf("Masukkan bilangan: \n");
    scanf("%d", &N);


    if (N > 0)
    {
        while (i <= N)
        {
            totalthingymajig += i;
            i = i + 1;
        }
        printf("Total: %d\n", totalthingymajig);
    }
    else
    {
        printf("Masukan tidak boleh kurang dari 0 atau sama dengan 0.\n");
    }
    

    return 0;
}