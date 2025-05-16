#include <stdio.h>
#include "analytics.h"

int main() {
    int arr[3][4] = 
    {
        {10, 20, 15, 15}, // Jakarta
        {7, 10, 8, 3},    // Semarang
        {10, 10, 12, 8}   // Pati
    };
    
    char *cities[] = {"Jakarta", "Semarang", "Pati"};
    char *months[] = {"Januari", "Februari", "Maret", "April"};
    
    // 1. Highest average
    int max_avg, max_city;
    findHighestAvg(arr, &max_avg, &max_city);
    printf("Rata-rata tertinggi: %d di kota %s\n", max_avg, cities[max_city]);
    
    // 2. Lowest average
    int min_avg, min_city;
    findLowestAvg(arr, &min_avg, &min_city);
    printf("Rata-rata terendah: %d di kota %s\n", min_avg, cities[min_city]);
    
    // 3. Monthly sales (February)
    printf("\nPenjualan bulan Februari:\n");
    printMonthlySales(arr, 1, cities);
    
    // 4. City sales (Semarang)
    printf("\nPenjualan kota Semarang:\n");
    printCitySales(arr, 1, months);
    
    // 5-6. Extremes
    int max_val, min_val, max_c, max_m, min_c, min_m;
    findExtremes(arr, &max_val, &min_val, &max_c, &max_m, &min_c, &min_m);
    printf("\nNilai terbesar: %d (%s, %s)\n", max_val, cities[max_c], months[max_m]);
    printf("Nilai terkecil: %d (%s, %s)\n", min_val, cities[min_c], months[min_m]);
    
    return 0;
}