#include <stdio.h>
#include <rata2tinggi.h>

// cari rata rata tertinggi di kota apa? di bulan apa?
// cari rata rata terendah di kota apa? di bulan apa?
// penjulana bulan ... di ketiga kota
// penjulan kota ... di setiap bulan
// brp nilai terbesar dan pada index ke
// brp nilai terkecil dan pada index ke

int main()
{
    int arr[3][4] = 
    {   //jan, fer, mar, april
        {10, 20, 15, 15}, //jakarta
        {7, 10, 8, 3}, //semarang
        {10, 10, 12, 8} //pati
    };
    int i;
    int j;
    int Nmin;
    int mean;
    


    // rata2tinggi(int Nmax, int arr[i][j], int mean);

    return 0;
}



    // No 1
    // int Nmax = 0;
    // for(i=0; i <3; i++){
    //     int sum =0;
    //     for (j = 0; j < 4; j++){
    //         sum += arr[i][j];
    //     }
    //     mean = sum / 4 ;
    //     if (mean > Nmax){
    //         Nmax = mean;
    //     }
    // }
    // printf("%d \n",Nmax);