import sympy as simp
import numpy as bumpy

# No 5 A. y = sinh(x)
# Deret Maclaurin untuk fungsi y = sinh(x) ; x = 0,2 ; n = 5 ; a = 0

def MaclaurinSeries(x, n):
    suku = 0                                                                    # Awal jumlah suku, mulai dari nol
    hasil = []                                                                  # Tempat nyimpen hasil tiap iterasi
    galat = []                                                                  # Tempat nyimpen galat tiap iterasi
    asli = bumpy.sinh(x)                                                        # Nilai asli sinh(x) dari numpy
    a = 0                                                                       # Titik pusat deret Maclaurin
    
    for i in range(n):
        turunan = simp.diff(simp.sinh(simp.Symbol('x')), 'x', i).subs('x', a)   # Hitung turunan ke-i di x = a
        rumus = (turunan / simp.factorial(i)) * ((x - a) ** i)                  # Ini rumus deret Maclaurin-nya
        suku += rumus                                                           # Tambahin ke jumlah keseluruhan
        
        hasil.append((i + 1, suku.evalf()))                                     # Masukin hasil iterasi ke list
        galat.append((i + 1, abs(asli - suku.evalf())))                         # Hitung dan simpen galatnya
    
    return hasil, galat, asli

x_value = 0.2                                                                   # Nilai x yang mau dihitung
n_terms = 5                                                                     # Banyaknya suku yang dipake

hasil, galat, asli = MaclaurinSeries(x_value, n_terms)

# Print hasil tiap iterasi
print("n\tNilai Perkiraan")
for n, nilai in hasil:
    print(f"{n}\t{nilai}")

# Print galat tiap iterasi
print("\nn\tGalat")
for n, err in galat:
    print(f"{n}\t{err}")

# Print nilai asli sinh(0.2)
print("\nNilai asli sinh(0.2):", asli)
