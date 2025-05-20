#include <stdio.h>

int main()
{
    int N = 5;
    int arr[] = {3, 10, 7, 13, 5};
    int max = -99;

    for (int i = 0; i <= N; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    return 0;    
}