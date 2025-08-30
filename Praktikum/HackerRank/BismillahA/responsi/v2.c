#include <stdio.h>

int main() 
{
    int N;
    scanf("%d", &N); 

    int T[N];
    int genap[N];
    int ganjil[N];
    int hitunggenap = 0;
    int hitungganjil = 0;

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &T[i]);

        if (T[i] % 2 == 0) 
        {
            genap[hitunggenap++] = T[i];
        } 
        else 
        {
            ganjil[hitungganjil++] = T[i];
        }
    }

    for (int a = 0; a < hitunggenap - 1; a++) 
    {
        for (int b = 0; b < hitunggenap - a - 1; b++) 
        {
            if (genap[b] > genap[b + 1]) 
            {
                int temp = genap[b];
                genap[b] = genap[b + 1];
                genap[b + 1] = temp;
            }
        }
    }

    for (int a = 0; a < hitungganjil - 1; a++) 
    {
        for (int b = 0; b < hitungganjil - a - 1; b++) 
        {
            if (ganjil[b] > ganjil[b + 1]) 
            {
                int temp = ganjil[b];
                ganjil[b] = ganjil[b + 1];
                ganjil[b + 1] = temp;
            }
        }
    }

    float medianganjil = 0;
    
    float mediangenap = 0;

    if (hitungganjil > 0) 
    {
        if (hitungganjil % 2 == 0) 
        {
            medianganjil = (ganjil[hitungganjil / 2 - 1] + ganjil[hitungganjil / 2]) / 2.0;
        } 
        else 
        {
            medianganjil = ganjil[hitungganjil / 2];
        }
    }

    if (hitunggenap > 0) 
    {
        if (hitunggenap % 2 == 0) 
        {
            mediangenap = (genap[hitunggenap / 2 - 1] + genap[hitunggenap / 2]) / 2.0;
        } 
        else 
        {
            mediangenap = genap[hitunggenap / 2];
        }
    }

    float mean = 0;

    if (hitungganjil > 0 && hitunggenap > 0)
    {
        mean = (medianganjil + mediangenap) / 2.0;
    }
    else if (hitungganjil > 0)
    {
        mean = medianganjil;
    }
    else if (hitunggenap > 0)
    {
        mean = mediangenap;
    }

    printf("%.3f\n", mean);
    
    return 0;
}
