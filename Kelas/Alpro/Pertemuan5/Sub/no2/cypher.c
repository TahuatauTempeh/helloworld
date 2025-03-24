#include "hitungpanjang.h"

/*Program buat mencari pesan awal jika diketahui pesan enkripsinya*/
void cypher(int n, char *pesan) 
{   /*Kamus*/
    int panjang = hitungPanjang(pesan); 

    /*Algoritma*/
    for (int i = 0; i < panjang; i++) 
    {
        if (pesan[i] >= 'a' && pesan[i] <= 'z') 
        { 
            pesan[i] = ((pesan[i] - 'a' - n + 26) % 26) + 'a';
        } 
        else if (pesan[i] >= 'A' && pesan[i] <= 'Z') 
        { 
            pesan[i] = ((pesan[i] - 'A' - n + 26) % 26) + 'A';
        }
    }
}