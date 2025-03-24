/*Program untuk menukar angka nya*/
void tukar(int *a, int *b) 
{   /*Kamus*/
    // int *a;     /*pointer buat nunjuk bilangan 1*/
    // int *b;     /*pointer buat nunjuk bilangan 2*/
    /*ternyata gabisa pakai yg diatas T-T*/
    int place;   /*buat placeholder thingy*/

    /*Algoritma*/
    place = *a;  /*basically placeholdernya ngambil nilai a dan ditukar sama b*/
    *a = *b;
    *b = place;  

}