/*Nama File 	: BiayaKirim.c*/
/*Deskripsi 	: menghitung biaya kirim*/
/*Pembuat   	: Azka Aqylla Maulana-24060124140195*/
/*Tgl Pembuatan	: 02/03/2025 12:00*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main()
{   /*Kamus*/
    float berat;                     /*berat barang kiriman*/
    float jarak;                     /*jarak lokasi barang yg dikirim*/
    float basecost = 10000.00;       /*harga dasar = Rp10.000*/
    float costperkm = 2000.00;       /*harga per km = 50000*/
    float costperkg = 5000.00;       /*harga per kilo*/
    float biayakirim;                /*biaya akhir pengiriman*/

    /*Algoritma*/
    printf("Masukkan berat barang: \n");
    scanf("%f", &berat);

    printf("Masukkan jarak tempuh lokasi: \n");
    scanf("%f", &jarak);

    biayakirim = basecost + (berat * costperkg) + (jarak * costperkm);

    printf("Biaya total yang harus dibayar adalah : Rp%.2f.\n", biayakirim);

    return 0;
}