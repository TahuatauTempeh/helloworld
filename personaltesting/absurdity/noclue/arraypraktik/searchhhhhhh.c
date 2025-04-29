#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    int i = 0;

    printf("Angka yg dicari: \n");
    scanf("%d", &x);

    while (i < 10 && arr[i] != x)
    {
        i++;
    }
    if (arr[i] == x)
    {
        printf("Bilangan ditemukan: %d\n", i);
    }
    else
    {
        printf("No clue where the number is\n");
    }

    return 0;
}