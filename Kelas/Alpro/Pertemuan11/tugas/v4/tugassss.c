// Nama     : Azka Aqylla Maulana
// NIM      : 24060124140195
// Kelas    : A


#include <stdio.h>

// 1a
void soal1a(int arr[3][4], int *m, int *n)
{
    int sum;
    float mean;
    float maxing = 0;
    int kota = 0;

    for (int i = 1; i <= *n; i++)
    {
        sum = 0;
        
        for (int j = 1; j <= *m; j++)
        {
            sum = sum + arr[i - 1][j - 1];
        }
        
        mean = (float)sum / *m;

        printf("\n");
        printf("Mean = %f\n", mean);
        
        if (mean > maxing)
        {
            maxing = mean;
            kota = i;
        }

        printf("\n");
    }

    printf("Rata rata tertinggi di:\n");
    
    if (kota == 1) 
    {
        printf("Jakarta\n");
    }
    else if (kota == 2) 
    {
        printf("Semarang\n");
    }
    else if (kota == 3) 
    {
        printf("Pati\n");
    }

    printf("\n");
}

// 1b
void soal1b(int arr[3][4], int *m, int *n)
{
    int sum;
    float mean;
    float maxing = 0;
    int bulan = 0;

    for (int j = 1; j <= *m; j++)
    {
        sum = 0;
        
        for (int i = 1; i <= *n; i++)
        {
            sum = sum + arr[i - 1][j - 1];
        }
        
        mean = (float)sum / *n;
        
        if (mean > maxing)
        {
            maxing = mean;
            bulan = j;
        }
    }

    printf("Rata rata tertinggi di bulan:\n");

    if (bulan == 1) 
    {
        printf("January\n");
    }
    else if (bulan == 2) 
    {
        printf("February\n");
    }
    else if (bulan == 3) 
    {
        printf("March\n");
    }
    else if (bulan == 4) 
    {
        printf("April\n");
    }
    
    printf("\n");
}

// 2a
void soal2a(int arr[3][4], int *m, int *n)
{
    int minval = arr[0][0];
    int minkota = 0;
    int minbulan = 0;

    for (int i = 1; i <= *n; i++)
    {
        for (int j = 1; j <= *m; j++)
        {
            if (arr[i - 1][j - 1] < minval)
            {
                minval = arr[i - 1][j - 1];
                minkota = i;
                minbulan = j;
            }
        }
    }

    printf("Penjualan terendah: %d\n", minval);
    
    if (minkota == 1) 
    {
        printf("Kota: Jakarta\n");
    }
    else if (minkota == 2) 
    {
        printf("Kota: Semarang\n");
    }
    else if (minkota == 3) 
    {
        printf("Kota: Pati\n");
    }
    
    if (minbulan == 1) 
    {
        printf("Bulan: January\n");
    }
    else if (minbulan == 2) 
    {
        printf("Bulan: February\n");
    }
    else if (minbulan == 3) 
    {
        printf("Bulan: March\n");
    }
    else if (minbulan == 4) 
    {
        printf("Bulan: April\n");
    }

    printf("\n");
}

// 2b
void soal2b(int arr[3][4], int *m, int *n)
{
    int maxval = 0;
    int maxkota = 0;
    int maxbulan = 0;

    for (int i = 1; i <= *n; i++)
    {
        for (int j = 1; j <= *m; j++)
        {
            if (arr[i - 1][j - 1] > maxval)
            {
                maxval = arr[i - 1][j - 1];
                maxkota = i;
                maxbulan = j;
            }
        }
    }

    printf("Penjualan tertinggi: %d\n", maxval);
    
    if (maxkota == 1) 
    {
        printf("Kota: Jakarta\n");
    }
    else if (maxkota == 2) 
    {
        printf("Kota: Semarang\n");
    }
    else if (maxkota == 3) 
    {
        printf("Kota: Pati\n");
    }

    if (maxbulan == 1) 
    {
        printf("Bulan: January\n");
    }
    else if (maxbulan == 2) 
    {
        printf("Bulan: February\n");
    }
    else if (maxbulan == 3) 
    {
        printf("Bulan: March\n");
    }
    else if (maxbulan == 4) 
    {
        printf("Bulan: April\n");
    }

    printf("\n");
}

// 3
void soal3(int arr[3][4], int *m, int *n)
{
    char bulan[20];
    int p = -1;

    printf("Masukkan nama bulan (January = J), (February = F), (March = M), (April = A): ");
    scanf("%s", bulan);

    if (bulan[0] == 'J' || bulan[0] == 'j') 
    {
        p = 1;
    }
    else if (bulan[0] == 'F' || bulan[0] == 'f') 
    {
        p = 2;
    }
    else if (bulan[0] == 'M' || bulan[0] == 'm') 
    {
        p = 3;
    }
    else if (bulan[0] == 'A' || bulan[0] == 'a') 
    {
        p = 4;
    }

    if (p >= 1 && p <= 4)
    {
        printf("Penjualan bulan %d:\n", p);

        for (int i = 1; i <= *n; i++)
        {
            if (i == 1) 
            {
                printf("Jakarta: ");
            }
            else if (i == 2) 
            {
                printf("Semarang: ");
            }
            else if (i == 3) 
            {
                printf("Pati: ");
            }
            
            printf("%d\n", arr[i - 1][p - 1]);
        }
    }

    else
    {
        printf("Bulan tidak sesuai format/Invalid.\n");
    }
    
    printf("\n");
}

// 4
void soal4(int arr[3][4], int *m, int *n)
{
    char kota[20];
    int p = -1;

    printf("Masukkan nama kota (Jakarta = J), (Semarang = S), (Pati = P): ");
    scanf("%s", kota);

    if (kota[0] == 'J' || kota[0] == 'j') 
    {
        p = 1;
    }
    else if (kota[0] == 'S' || kota[0] == 's') 
    {
        p = 2;
    }
    else if (kota[0] == 'P' || kota[0] == 'p') 
    {
        p = 3;
    }

    if (p >= 1 && p <= 3)
    {
        printf("Penjualan kota %d:\n", p);
        
        for (int j = 1; j <= *m; j++)
        {
            if (j == 1) 
            {
                printf("January: ");
            }
            else if (j == 2) 
            {
                printf("February: ");
            }
            else if (j == 3) 
            {
                printf("March: ");
            }
            else if (j == 4) 
            {
                printf("April: ");
            }

            printf("%d\n", arr[p - 1][j - 1]);
        }
    }
    
    else
    {
        printf("Kota tidak sesuai format/Invalid.\n");
    }
    
    printf("\n");
}

int main()
{
    int m = 4;
    int n = 3;
    int arr[3][4] =
    {
        {10, 20, 15, 15},
        {7, 10, 8, 3},
        {10, 10, 12, 8}
    };

    soal1a(arr, &m, &n);
    soal1b(arr, &m, &n);
    soal2a(arr, &m, &n);
    soal2b(arr, &m, &n);
    soal3(arr, &m, &n);
    soal4(arr, &m, &n);

    return 0;
}
