#include <stdio.h>

// b)	Rata rata penjulana terbesar di bulan apa?

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
    float bulan;

    for (int j = 0; j < m; j++)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = arr[i][j] + sum;
        }
        mean = sum / m;
        printf("Rata rata = %f\n", mean);
        if (maxwin < mean)
        {
            maxwin = mean;
            bulan = j;
        }        
    }
    printf("Rata rata tertinggi di: \n");
    if (bulan == 0)
    {
        printf("January\n");
    }
    else if (bulan == 1)
    {
        printf("February\n");
    }
    else if (bulan == 2)
    {
        printf("March\n");
    }
    else if (bulan == 3)
    {
        printf("April\n");
    }
    


    return 0;
}