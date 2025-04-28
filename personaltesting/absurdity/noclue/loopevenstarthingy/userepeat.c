#include <stdio.h>

int main()
{
    float total = 0; 
    int N;
    int i = 1;
    
    printf("Input: \n");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("NO\n");
    }
    else
    {
        do
        {
            total = total + (1/(float)i);
            printf("Iterasi ke: %d\n", i);
            printf("%f\n", total);
            printf("----------\n");
            i ++;
        } while (i <= N);
        
        // printf("%f\n", total);
    }
    return 0;   
}