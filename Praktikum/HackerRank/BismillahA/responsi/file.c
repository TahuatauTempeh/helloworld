#include <stdio.h>


int main()
{
    int num;
    int N;
    int i = 0;
    float mean = 0;
    int totalganjil = 0;
    int totalgenap = 0;
    
    scanf("%d %d",&N, &num);
    int T[N];
    int genap[N];
    int ganjil[N];

    // masukin ke array
    // for (int i = 0; i < N; i++)
    // {
    //     T[i] 
    // }
    

    while(num > 0) //do till num greater than  0
    {
        int mod = num % 10;  //split last digit from number
        scanf("%d", &T[i]);
        // printf("%d\n",mod); //print the digit. 
    
        num = num / 10;    //divide num by 10. num /= 10 also a valid one 
        i += 1;
    }

    for (int j = 0; j < N; j++)
    {
        if (T[j] % 2 == 0)
        {
            genap[j] == j;
        }
        else
        {
            ganjil[j] == j ;
        }
    }
    
    int lenghtganjil = sizeof(ganjil);
    int lenghtgenap = sizeof(genap);

    for (int i = 0; i < lenghtgenap; i++)
    {
        totalgenap += genap[i];
    }
    
    for (int i = 0; i < lenghtganjil; i++)
    {
        totalganjil += ganjil[i];
    }
    
    mean == (totalganjil + totalgenap) / 2;

    printf("%f.2", mean);

    return 0;
}
