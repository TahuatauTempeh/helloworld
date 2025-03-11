#include <stdio.h>

/*Buat testing array lagi*/

int main()
{
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; /*ini buat array nilai*/
    int i; /*inisiasi i*/
    float total; /*total semua bilangan*/
    float avg; /*buat mencari rata rata*/

    for (i = 0; i < 11; i++)
    {
        total = total + i;

    }

    avg = total / 10;
    printf("the average of all is : %.2f\n", avg);

    return 0;
}