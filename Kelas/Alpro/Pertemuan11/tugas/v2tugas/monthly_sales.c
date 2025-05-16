#include "analytics.h"
#include <stdio.h>

void printMonthlySales(int arr[3][4], int month, char *cities[]) {
    for(int i = 0; i < 3; i++) {
        printf("- %s: %d\n", cities[i], arr[i][month]);
    }
}