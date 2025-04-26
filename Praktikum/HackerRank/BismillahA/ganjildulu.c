#include <stdio.h>

int main()
{   /*Kamus*/
    int N;

    /*Algoritma*/
    scanf("%d", &N);
    int T[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &T[i]);
    }
    for (int i = 0; i < N; i++) 
    {
        if (T[i] % 2 != 0) 
        { 
            printf("%d ", T[i]);
        }
    }
    for (int i = 0; i < N; i++) 
    {
        if (T[i] % 2 == 0) 
        {
            printf("%d ", T[i]);
        }
    }

    printf("\n");
    return 0;
}

