#include "analytics.h"

void findLowestAvg(int arr[3][4], int *min_avg, int *city_index) {
    *min_avg = 9999; // Initialize with high value
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) sum += arr[i][j];
        int avg = sum / 4;
        if(avg < *min_avg) {
            *min_avg = avg;
            *city_index = i;
        }
    }
}