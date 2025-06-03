#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


#include <stdio.h>

int main()
{
    // Kamus
    int num; // number to split into digits
    int N;   // number of digits
    int i;

    // Algoritma
    scanf("%d %d", &N, &num);

    int T[N]; // declare after reading N

    // Fill T with digits of num from right to left
    for(i = N - 1; i >= 0; i--) {
        T[i] = num % 10;
        num /= 10;
    }

    // Print the array
    for(i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}