#include <stdio.h>

// a)	Rata rata penjulan terbesar di kota mana?


int main()
{
    int m = 4;
    int n = 3;
    int arr[3][4] = 
    {   //Jan, Feb, Mar, Apr
        {10, 20, 15, 15}, // Jakarta
        {7, 10, 8, 3}, // Semarang
        {10, 10, 12, 8} // Pati
    };
    int sum;
    float mean;
    float maxwin = 0;
    int kota;
    
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = arr[i][j] + sum;
        }
        mean = sum / m;
        printf("Mean = %f\n", mean);
        if (mean > maxwin)
        {
            maxwin = mean;
            kota = i;
        }
    }
    printf("Rata rata tertinggi di: \n");
    if (kota == 0)
    {
        printf("Jakarta\n");
    }
    else if (kota == 1)
    {
        printf("Semarang\n");
    }
    else if (kota == 2)
    {
        printf("Pati\n");
    }
    
    

    return 0;
}