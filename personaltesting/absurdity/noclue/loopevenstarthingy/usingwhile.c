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
        while (i <= N)
        {
            total = total + (1/(float)i);
            i ++;
            printf("%f\n", total);
            printf("----------\n");
        }
        
        // printf("%f\n", total);
    }
    return 0;   
}