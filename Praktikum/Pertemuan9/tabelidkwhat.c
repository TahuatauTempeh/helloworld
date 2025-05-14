#include <stdio.h>

int main()
{
    int arr[] = {1, 1, 1, 3, 90, 49, 25, 78, 22, 21, 22, 21, 22, 3, 49};
    int valmin = arr[0];
    int valmax = arr[0];
    int N = sizeof(arr) / sizeof(arr[0]); // how big the array is

// valmin & valmax
    for (int i = 1; i < N; i++)
    {
        if (arr [i] < valmin)
        {
            valmin = arr[i];
        }
        if (arr[i] > valmax)
        {
            valmax = arr[i];
        }
    }

    int tabcount[valmax + 1];
    
    for (int j = valmin; j <= valmax; j++)
    {
        tabcount[j] = 0;
    }
    
    for (int bibo = 0; bibo < N; bibo++)
    {
        tabcount[arr[bibo]] = tabcount[arr[bibo]] + 1;
    }
    
    int k = 0;

    for (int i = valmin; i <= valmax; i++)
    {
        if (tabcount[i] != 0)
        {
            for (int l  = 0; l < tabcount[i]; l++)
            {
                arr[k] = i;
                k = k + 1;
            }
            
        }
        
    }
    
    printf("Array: \n");

    for (int i = 0; i < N; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    printf("\n");
    printf("value min: %d\n", valmin);
    printf("value max: %d\n", valmax);

    return 0;
}