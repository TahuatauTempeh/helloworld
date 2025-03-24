/*Program hitung panjang sting*/
int hitungPanjang(const char *str) 
{   /*Kamus*/
    int panjang = 0;

    /*Algoritma*/
    while (str[panjang] != '\0') 
    {
        panjang++;
    }
    return panjang;
}