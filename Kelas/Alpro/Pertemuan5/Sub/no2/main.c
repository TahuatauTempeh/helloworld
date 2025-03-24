/*Nama File 	: main.c*/
/*Deskripsi 	: cypher code thingymajig*/
/*Pembuat   	: Azka Aqylla Maulana 2406012414195*/

#include <stdio.h>
#include "hitungpanjang.h"
#include "cypher.h"

/*Program utama*/
int main() 
{   /*Kamus*/
    int n;
    char pesan[103];

    /*Algoritma*/
    printf("Masukkan jumlah pergeseran: ");
    scanf("%d", &n);
    printf("Masukkan pesan terenkripsi: ");
    scanf("%s", pesan);

    cypher(n, pesan);

    printf("Pesan asli: %s\n", pesan);

    return 0;
}
