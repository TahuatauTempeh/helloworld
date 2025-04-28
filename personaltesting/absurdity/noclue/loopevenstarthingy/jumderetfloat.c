#include <stdio.h>

int main()
{
    float total = 0; 
    int N;
    
    printf("Input: \n");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("NO\n");
    }
    else
    {
        for (float i = 1; i <= N; i++)
        {
            printf("--------------------\n");
            printf("Before :%f\n", total);
            total = total + (1/(float)i); 
            printf("After : %f\n", total);
            // printf(" \n");
            printf("Difference: %f\n", 1/(float)i);
            printf("--------------------\n");
        }

        // printf("%f\n", total);
    }
    return 0;
}