// File: max_bulan_eat.c
#include <stdio.h>

int main() 
{   /*Kamus*/
    long long A, B, C, D;
    long long bulan = 0;
    long long maxMakan, makan;
    int opsi;

    /*Algoritma*/
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    while (A > 0 || B > 0 || C > 0 || D > 0) 
    {
        maxMakan = 0;
        opsi = 0;

        if (A > 0 && C > 0) 
        {
            makan = (A + C < 3) ? (A + C) : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 1; }
        }

        if (A > 0 && D > 0) 
        {
            makan = (A + D < 3) ? (A + D) : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 2; }
        }

        if (B > 0 && C > 0) 
        {
            makan = (B + C < 3) ? (B + C) : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 3; }
        }

        if (B > 0 && D > 0) 
        {
            makan = (B + D < 3) ? (B + D) : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 4; }
        }

        if (A > 0) 
        {
            makan = (A < 3) ? A : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 5; }
        }

        if (B > 0) 
        {
            makan = (B < 3) ? B : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 6; }
        }

        if (C > 0) 
        {
            makan = (C < 3) ? C : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 7; }
        }

        if (D > 0) 
        {
            makan = (D < 3) ? D : 3;
            if (makan > maxMakan) { maxMakan = makan; opsi = 8; }
        }

        if (maxMakan == 0) break;

        switch (opsi) 
        {
            case 1: 
            {
                long long mA = (A < maxMakan) ? A : maxMakan;
                long long mC = (maxMakan - mA < C) ? maxMakan - mA : C;
                A -= mA; C -= mC;
                break;
            }
            case 2: 
            {
                long long mA = (A < maxMakan) ? A : maxMakan;
                long long mD = (maxMakan - mA < D) ? maxMakan - mA : D;
                A -= mA; D -= mD;
                break;
            }
            case 3: 
            {
                long long mB = (B < maxMakan) ? B : maxMakan;
                long long mC = (maxMakan - mB < C) ? maxMakan - mB : C;
                B -= mB; C -= mC;
                break;
            }
            case 4: 
            {
                long long mB = (B < maxMakan) ? B : maxMakan;
                long long mD = (maxMakan - mB < D) ? maxMakan - mB : D;
                B -= mB; D -= mD;
                break;
            }
            case 5: A -= maxMakan; break;
            case 6: B -= maxMakan; break;
            case 7: C -= maxMakan; break;
            case 8: D -= maxMakan; break;
        }

        bulan++;
    }

    printf("%lld\n", bulan);
    return 0;
}
