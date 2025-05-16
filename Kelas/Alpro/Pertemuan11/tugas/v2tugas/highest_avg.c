#include "analytics.h"

void findHighestAvg(int arr[3][4], int *max_avg, int *city_index) {
    *max_avg = 0;
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) sum += arr[i][j];
        int avg = sum / 4;
        if(avg > *max_avg) {
            *max_avg = avg;
            *city_index = i;
        }
    }
}