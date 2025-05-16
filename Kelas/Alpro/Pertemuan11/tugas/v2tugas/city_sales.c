#include "analytics.h"
#include <stdio.h>

void printCitySales(int arr[3][4], int city, char *months[]) {
    for(int j = 0; j < 4; j++) {
        printf("- %s: %d\n", months[j], arr[city][j]);
    }
}