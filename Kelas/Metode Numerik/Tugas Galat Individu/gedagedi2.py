import sympy as lipo
import numpy as pipo

# No 5 A. y = sinh(x)
# Deret Maclaurin untuk fungsi y = sinh(x)

def badibo(x, n):
    suku = 0
    for i in range(n):
        rumus = (x ** (2 * i + 1)) / lipo.factorial(2 * i + 1)  # Rumus benar untuk sinh(x)
        suku += rumus
    return suku

# Nilai real no fake sinh(0.2) menggunakan Numpy
x_value = 0.2
exact_value = pipo.sinh(x_value)

# Buat table
table = []

# Hitung deret Maclaurin untuk n = 1 sampai 5
for n in range(1, 6):
    approx_value = badibo(x_value, n)  # Approksimasi deret Maclaurin
    galat = abs(exact_value - approx_value)  # Hitung galat
    table.append([n, approx_value, galat])  # Masukkan hasil ke table

# Tampilkan table
print("n\tMaclaurin Thingymajig\t\tGalat")
for row in table:
    print(f"{row[0]}\t{row[1]:.16f}\t{row[2]:.16f}")

    