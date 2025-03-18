#include <stdio.h>

/*Sub Program Pencarian Prima atau tidak*/
void prima(int *N)
{
    /*Kamus*/
    int faktor = 0;
    int i;

    /*Algoritma*/

    for (i = 0; i <= *N; i++)
    {
        if (faktor % *N == 0)
        {
            faktor += 1;
        }
        
    }
    if (faktor == 2)
    {
        printf("Bilangan Prima\n");
    }
    else
    {
        printf("Bukan Prima\n");
    }
}

/*Program Utama*/
int main()
{
    /*Kamus*/
    int N;

    /*Algoritma*/
    printf("Masukkan bilangan: \n");
    scanf("%d", &N);

    prima(&N);

    return 0;
}