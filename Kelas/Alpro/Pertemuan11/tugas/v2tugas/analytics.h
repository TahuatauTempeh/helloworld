#ifndef ANALYTICS_H
#define ANALYTICS_H

void findHighestAvg(int arr[3][4], int *max_avg, int *city_index);
void findLowestAvg(int arr[3][4], int *min_avg, int *city_index);
void printMonthlySales(int arr[3][4], int month, char *cities[]);
void printCitySales(int arr[3][4], int city, char *months[]);
void findExtremes(int arr[3][4], int *max_val, int *min_val, 
                 int *max_city, int *max_month, int *min_city, int *min_month);

#endif