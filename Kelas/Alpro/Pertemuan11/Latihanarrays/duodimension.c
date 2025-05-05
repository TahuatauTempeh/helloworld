#include <stdio.h>



int main()
{
    int array[5] = {0, 7, 14, 21, 28};
    int value = 0;
    int urutan = 0;
    int i;
    int j;

    while (i <= 1)
    {
        while (j <= 5)
        {
            if (array[j] > value)
            {
                value = array[j];
                urutan = array[j];
            }
                i = i + 1;
        }
        
    }

    printf(value);
    printf(urutan);
    return 0;
}
