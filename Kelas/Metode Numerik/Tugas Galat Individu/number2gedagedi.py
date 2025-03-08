import sympy as lipo
import numpy as pipo

# No 5 B. y = 1 / (1 + x)^2
# Deret Maclaurin untuk fungsi y = 1 / (1 + x)^2

def badibo(x, n):
    suku = 0
    for i in range(n):
        rumus = ((-1) ** i) * (i + 1) * (x ** i)  # Rumus benar untuk 1 / (1 + x)^2
        suku += rumus
    return suku

# Nilai real no fake 1 / (1 + 0.2)^2 menggunakan Numpy
x_value = 0.2
exact_value = 1 / ((1 + x_value) ** 2)

# Buat table
table = []

# Hitung deret Maclaurin untuk n = 1 sampai 5
for n in range(1, 6):
    approx_value = badibo(x_value, n)  # Approksimasi deret Maclaurin
    galat = abs(exact_value - approx_value)  # Hitung galat
    table.append([n, approx_value, galat])  # Masukkan hasil ke table

# Tampilkan table
print("n\tMaclaurin Approximation\t\tGalat")
for row in table:
    print(f"{row[0]}\t{row[1]:.16f}\t{row[2]:.16f}")