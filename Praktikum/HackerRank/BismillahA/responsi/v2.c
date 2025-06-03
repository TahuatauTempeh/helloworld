#include <stdio.h>

int main() 
{
    int num;
    int N;
    int i = 0;
    float mean = 0;
    int totalganjil = 0;
    int totalgenap = 0;

    scanf("%d %d", &N, &num); 
    int T[N];
    int genap[N], ganjil[N];
    int hitunggenap = 0, hitungganjil = 0;

    while (num > 0 && i < N) 
    {
        T[i] = num % 10;
        num /= 10;

        i++;
    }

    for (int j = 0; j < i; j++) 
    {
        if (T[j] % 2 == 0) 
        {
            genap[hitunggenap++] = T[j];
        } 
        
        else 
        {
            ganjil[hitungganjil++] = T[j];
        }
    }


    int genapthingy = hitunggenap / 2;
    int ganjilthingy = hitungganjil / 2;
    int medianganjil = (ganjil[hitungganjil] + 1) / 2;
    int mediangenap = ((hitungganjil / 2) + ((hitungganjil / 2) - 1)) / 2;

    // for (int j = 0; j < hitunggenap; j++) 
    // {
    //     totalgenap += genap[j];
    // }

    // for (int j = 0; j < hitungganjil; j++) 
    // {
    //     totalganjil += ganjil[j];
    // }

    mean = (totalganjil + totalgenap) / (float)(hitungganjil + hitunggenap);

    printf("%.2f\n", mean);

    return 0;
}
