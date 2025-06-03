#include <stdio.h>
#include "gelas.h"

int main() {
    Gelas g1 = {1000, 0}; // gelas 1 kapasitas 1000 ml
    Gelas g2 = {500, 0};  // gelas 2 kapasitas 500 ml
    int pilihan, volume;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Isi penuh gelas 1\n");
        printf("2. Kosongkan gelas 1\n");
        printf("3. Isi gelas 1 dengan volume tertentu\n");
        printf("4. Tuangkan isi gelas 1 ke gelas 2\n");
        printf("5. Tampilkan status kedua gelas\n");
        printf("6. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                isiPenuh(&g1);
                break;
            case 2:
                kosongkan(&g1);
                break;
            case 3:
                printf("Masukkan volume yang ingin ditambahkan ke gelas 1 (ml): ");
                scanf("%d", &volume);
                isiDengan(&g1, volume);
                break;
            case 4:
                tuangKe(&g1, &g2);
                break;
            case 5:
                printf("Status Gelas 1:\n");
                tampilkanStatus(&g1);
                printf("Status Gelas 2:\n");
                tampilkanStatus(&g2);
                break;
            case 6:
                printf("Terima kasih!\n");
                return 0;
            default:
                printf("Pilihan tidak valid!\n");
        }
    }

    return 0;
}
