#include "analytics.h"

void findExtremes(int arr[3][4], int *max_val, int *min_val, 
                 int *max_city, int *max_month, int *min_city, int *min_month) {
    *max_val = arr[0][0];
    *min_val = arr[0][0];
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(arr[i][j] > *max_val) {
                *max_val = arr[i][j];
                *max_city = i;
                *max_month = j;
            }
            if(arr[i][j] < *min_val) {
                *min_val = arr[i][j];
                *min_city = i;
                *min_month = j;
            }
        }
    }
}