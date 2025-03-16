import sympy as life1
import numpy as life2


# soal : y=sinh(x)

# x = 0,2 ; n = 5 ; a = 1

def dobido(x, n):
    suku = 0
    for i in range(n):
        rumus = (x ** (2 * i + 1)) / life1.factorial(2 * i + 1)
        suku += rumus
    return suku

x_value = 0.2
n_terms = 5
a_value = 1

# Nilai asli sinh(0.2) menggunakan Numpy
x_value = 0.2
exact = life2.sinh(x_value)

# Buat table
table = []

# Hitung deret Taylor untuk n = 1 sampai 5
for n in range(1, 6):
    approx = dobido(x_value, n)  # Approksimasi deret Taylor
    galat = abs(exact - approx)  # Hitung galat
    table.append([n, approx, galat])  # Masukkan hasil ke table

# Tampilkan table
print("n\tNilai Taylor\t\tGalat")
for row in table:
    print(f"{row[0]}\t{row[1]:.16f}\t{row[2]:.16f}")

print(f"Nilai asli Sinh(x): {exact}")
