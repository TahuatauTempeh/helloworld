import sympy as simp
import numpy as bumpy

# No 5 B. y = (1) / (1 + x)^2
# Deret McLaurin untuk fungsi (1) / (1 + x)^2 ; x = 0,2 ; n = 5 ; a = 0

def MaclaurinSeries(x, n):
    suku = 0                                                        # Awal jumlah suku, mulai dari nol
    hasil = []                                                      # Tempat nyimpen hasil tiap iterasi
    galat = []                                                      # Tempat nyimpen galat tiap iterasi
    asli = 1 / (1 + x) ** 2                                         # Nilai asli dari fungsi
    a = 0                                                           # Titik pusat deret Maclaurin
    
    f = 1 / (1 + simp.Symbol('x')) ** 2                             # Definisi fungsi utama
    
    for i in range(n):
        turunan = simp.diff(f, 'x', i).subs('x', a)                 # Hitung turunan ke-i di x = a
        rumus = (turunan / simp.factorial(i)) * ((x - a) ** i)      # Ini rumus deret Maclaurin-nya
        suku += rumus                                               # Tambahin ke jumlah keseluruhan
        
        hasil.append((i + 1, suku.evalf()))                         # Masukin hasil iterasi ke list
        galat.append((i + 1, abs(asli - suku.evalf())))             # Hitung dan simpen galatnya
    
    return hasil, galat, asli

x_value = 0.2                                                       # Nilai x yang mau dihitung
n_terms = 5                                                         # Banyaknya suku yang dipake

hasil, galat, asli = MaclaurinSeries(x_value, n_terms)

# Print hasil tiap iterasi
print("n\tNilai Perkiraan")
for n, nilai in hasil:
    print(f"{n}\t{nilai}")

# Print galat tiap iterasi
print("\nn\tGalat")
for n, err in galat:
    print(f"{n}\t{err}")

# Print nilai asli 1 / (1 + 0.2)^2
print("\nNilai asli 1 / (1 + 0.2)^2:", asli)
