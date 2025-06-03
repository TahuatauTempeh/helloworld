#include <stdio.h>

int main()
{
    // Kamus
    int i, j, k;
    int sum;
    float mean;
    int TABNILAI[100];
    char TABKONVERSI[100];
    int oftenA = 0;
    int oftenB = 0;
    int oftenC = 0;
    int oftenD = 0;
    int oftenE = 0;
    int total = 100;
    float relatifA, relatifB, relatifC, relatifD, relatifE;

    // Input nilai (dummy data, bisa diganti input scanf)
    for (i = 0; i < total; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &TABNILAI[i]);
    }

    // a. Rata-rata
    sum = 0;
    for (i = 0; i < total; i++)
    {
        sum += TABNILAI[i];
    }
    mean = (float)sum / total;
    printf("\nRata-rata nilai: %.2f\n", mean);

    // b. Konversi ke A-E
    for (j = 0; j < total; j++)
    {
        if (TABNILAI[j] >= 80)
        {
            TABKONVERSI[j] = 'A';
        }
        else if (TABNILAI[j] >= 70)
        {
            TABKONVERSI[j] = 'B';
        }
        else if (TABNILAI[j] >= 55)
        {
            TABKONVERSI[j] = 'C';
        }
        else if (TABNILAI[j] >= 40)
        {
            TABKONVERSI[j] = 'D';
        }
        else
        {
            TABKONVERSI[j] = 'E';
        }
    }

    // c. Hitung frekuensi
    for (k = 0; k < total; k++)
    {
        if (TABKONVERSI[k] == 'A')
        {
            oftenA++;
        }
        else if (TABKONVERSI[k] == 'B')
        {
            oftenB++;
        }
        else if (TABKONVERSI[k] == 'C')
        {
            oftenC++;
        }
        else if (TABKONVERSI[k] == 'D')
        {
            oftenD++;
        }
        else if (TABKONVERSI[k] == 'E')
        {
            oftenE++;
        }
    }

    // Frekuensi relatif
    relatifA = (float)oftenA / total * 100;
    relatifB = (float)oftenB / total * 100;
    relatifC = (float)oftenC / total * 100;
    relatifD = (float)oftenD / total * 100;
    relatifE = (float)oftenE / total * 100;

    printf("\nFrekuensi Relatif:\n");
    printf("A: %.2f%%\n", relatifA);
    printf("B: %.2f%%\n", relatifB);
    printf("C: %.2f%%\n", relatifC);
    printf("D: %.2f%%\n", relatifD);
    printf("E: %.2f%%\n", relatifE);

    return 0;
}
