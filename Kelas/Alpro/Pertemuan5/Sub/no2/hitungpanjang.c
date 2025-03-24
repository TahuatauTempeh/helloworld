/*Program hitung panjang sting*/
int hitungPanjang(const char *str) 
{
    int panjang = 0;
    while (str[panjang] != '\0') 
    {
        panjang++;
    }
    return panjang;
}