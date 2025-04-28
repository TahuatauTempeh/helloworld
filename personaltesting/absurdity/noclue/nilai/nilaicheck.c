#include <stdio.h>


/*check nilai apkaah dapat a, b, c, d, e. a = N > 90. b = 89 >= N >= 80. c = 79 => N >= 70. E = N <= 69*/
void check(int N)
{
    if (N > 100)
    {
        printf("Error\n");
    }
    else if (N < 0)
    {
        printf("Error\n");
    }
    else if (N <= 100 || N >= 91)
    {
        printf("A\n");
    }
    else if (N <= 90 || N >= 81)
    {
        printf("B\n");
    }
    else if (N <= 80 || N >= 71)
    {
        printf("C\n");
    }
    else if (N <= 70 || N >= 61)
    {
        printf("D\n");
    }
    else
    {
        printf("E\n");
    }
    
}

int main()
{
    int N;

    printf("Nilai: \n");
    scanf("%d", &N);

    printf("Nilai: ");
    check(N);


    return 0;
}