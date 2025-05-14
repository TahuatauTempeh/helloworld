// Nama File : 1a.c
// Deskripsi : that
// Nama : Azka Aqylla Maulana 24060124140195
// Tanggal : 12 May 2025


#include <stdio.h>



// T = [19, 1, 28, 5, 20, 15, 52, 13, 16, 29]
// N = 10
// Gunakan prosedur sequential search dengan sentinel untuk mencari:
// X = 52



void arraysearch(int arr[], int N, int X, int *IX)
{
    int i;
    arr[N] = X;
    i = 0;

    while (arr[i] != X)
    {
       i++;
    }
    if (i < N)
    {
        *IX = i;
    }
    else
    {
        *IX = 0;
    }
    
    
}


int main()
{
    int N = 10;
    int arr[11] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29};
    int X = 52;
    int IX;

    arraysearch(arr, N, X, &IX);
    printf("%d\n", IX);

    return 0;
}