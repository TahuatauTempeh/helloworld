/*Nama File 	: luasKellLayang.c*/
/*Deskripsi 	: menghitung luas dan keliling layang layang*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 02/03/2025 10:00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float s1;   /*sisi 1*/
    float s2;   /*sisi 2*/
    float d1;   /*diagonal 1*/
    float d2;   /*diagonal 2*/
    float Luas; /*luas layang layang*/
    float Kell; /*keliling layang layang*/
    int checknilai = 0; /*check apakah s1 = s2 dan d1 = d2*/

    /*Algoritma*/
    while (checknilai == 0)
    {
        printf("Masukkan nilai sisi pertama: \n");
        scanf("%f", &s1);

        printf("Masukkan nilai sisi ke-dua: \n");
        scanf("%f", &s2);

        printf("Masukkan nilai diagonal pertama: \n");
        scanf("%f", &d1);

        printf("Masukkan nilai diagonal ke-dua: \n");
        scanf("%f", &d2);

        if (s1 == s2 &&d1 == d2)
        {
            checknilai = 1;
        }
        else
        {
            printf("Nilai sisi atau diagonal tidak sama. Bukan layang layang.\n");
        }
        
        
    }

    Luas = (1.0/2.0) * d1 * d2 ;

    Kell = 2 * (s1 + s2);

    printf("Luas layang layang nya adalah: %.2f meter^2.\n", Luas);
    printf("Keliling layang layang nya adalah: %.2f meter.\n", Kell);

    return 0;
}