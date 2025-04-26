#include <stdio.h>

int main() 
{   /*Kamus*/
    int N;
    int K;
    int aman = 1;

    /*Algoritma*/
    scanf("%d %d", &N, &K);
    int T[N];

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &T[i]);
    }

    for (int i = 0; i < N; i++) 
    {
        if (T[i] == 0) 
        {
            int ye = 0;  

            for (int j = (i - K >= 0) ? i - K : 0; j < i; j++) 
            {
                if (T[j] == 1) 
                {
                    ye = 1;
                    break;
                }
            }

            if (!ye) 
            {
                for (int j = i + 1; j <= ((i + K < N) ? i + K : N - 1); j++) 
                {
                    if (T[j] == 1) 
                    {
                        ye = 1;
                        break;
                    }
                }
            }

            if (!ye) 
            {
                aman = 0;
                break;  
            }
        }
    }

    printf("%s\n", aman ? "YES" : "NO");
    return 0;
}