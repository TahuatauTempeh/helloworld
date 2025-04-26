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

        /*A + C*/
        if (A > 0 && C > 0) 
        {
            makan = (A + C < 3) ? (A + C) : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 1;
            }
        }

        /*A + D*/
        if (A > 0 && D > 0) 
        {
            makan = (A + D < 3) ? (A + D) : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 2;
            }
        }

        /*B + C*/
        if (B > 0 && C > 0) 
        {
            makan = (B + C < 3) ? (B + C) : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 3;
            }
        }

        /*B + D*/
        if (B > 0 && D > 0) 
        {
            makan = (B + D < 3) ? (B + D) : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 4;
            }
        }

        /*A*/
        if (A > 0) 
        {
            makan = (A < 3) ? A : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 5;
            }
        }

        /*B*/
        if (B > 0) 
        {
            makan = (B < 3) ? B : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 6;
            }
        }

       /*C*/
        if (C > 0) 
        {
            makan = (C < 3) ? C : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 7;
            }
        }

        /*D*/
        if (D > 0) 
        {
            makan = (D < 3) ? D : 3;
            if (makan > maxMakan) 
            {
                maxMakan = makan;
                opsi = 8;
            }
        }

        if (opsi == 1) 
        {
            long long mA = (A < maxMakan) ? A : maxMakan;
            long long mC = maxMakan - mA;
            A -= mA;
            if (C < mC) mC = C;
            C -= mC;
        } 
        else if (opsi == 2) 
        {
            long long mA = (A < maxMakan) ? A : maxMakan;
            long long mD = maxMakan - mA;
            A -= mA;
            if (D < mD) mD = D;
            D -= mD;
        } 
        else if (opsi == 3) 
        {
            long long mB = (B < maxMakan) ? B : maxMakan;
            long long mC = maxMakan - mB;
            B -= mB;
            if (C < mC) mC = C;
            C -= mC;
        } 
        else if (opsi == 4) 
        {
            long long mB = (B < maxMakan) ? B : maxMakan;
            long long mD = maxMakan - mB;
            B -= mB;
            if (D < mD) mD = D;
            D -= mD;
        } 
        else if (opsi == 5) 
        {
            A -= maxMakan;
        } 
        else if (opsi == 6) 
        {
            B -= maxMakan;
        } 
        else if (opsi == 7) 
        {
            C -= maxMakan;
        } 
        else if (opsi == 8) 
        {
            D -= maxMakan;
        }

        bulan++;
    }

    printf("%lld\n", bulan);
    return 0;
}
