#include <stdio.h>

int main()
{
    int N;
    float total;

    printf("Input: \n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            total = total + i ;
            printf("%f\n", total);
        }
        else
        {
            total = total - i;
            printf("%f\n", total);
        }
    }
    return 0;
}