// Nama File : 3a.c
// Deskripsi : that
// Nama : Azka Aqylla Maulana 24060124140195
// Tanggal : 12 May 2025


// T = [1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47]
// N = 13
// 2. Gunakan prosedur binary search dengan Boolean untuk mencari:
//   a) X = 30
//   b) X = 9

#include <stdio.h>

void arraysearch(int arr[], int N, int X, int *IX )
{
    int atas = 0; //satu
    int bawah = N - 1;
    int tengah;


    while (atas <= bawah)
    {
        tengah = (atas + bawah) / 2;

        if (arr[tengah] == X)
        {
            *IX = tengah;
            return;
        }
        else if (X < arr[tengah])
        {
            bawah = tengah - 1;
        }
        else
        {
            atas = tengah + 1;
        }
    }
   *IX = 0;
}

int main()
{
    int arr[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int N = 13;
    int IX;
    int X = 30;

    arraysearch(arr, N, X, &IX);
    printf("Ada di index ke: %d\n", IX);

    return 0;
}