#include <stdio.h>

array[5] = {0, 7, 14, 21, 28};

int main()
{
    int value = 0;
    int urutan = 0;
    int i;

    while (i <= 5)
    {
        if (array[i] > value)
        {
            value = array[i];
            urutan = array[i];
        }
        i = i + 1;
    }

    printf(value);
    printf(urutan);
    return 0;
}
