#include <stdio.h>

int main()
{
    int arr[4] = {4, 10, 5, 8};
    int i = 0;
    int N = 4;
    int IX;
    int x = 8;

    // printf("Input x : \n");
    // scanf("%d", &x);asdasdsadaskdfasdsadasdasdsadsadfgdghdghdhgdhdgdhd

    do
    {
        i = i + 1;
    } while (arr[i] !=  x && i != N);

    if (arr[i] == x)
    {
        IX = i;
    }
    else
    {
        IX = 0;
    }
    
    printf("Terdapat di %d\n", IX);


    return 0;
}