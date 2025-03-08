import sympy as sp

# Fungsi untuk menghitung deret Maclaurin dari y = sinh(x)
def MaclaurinSeries_sinh(x, n):
    suku = 0
    print("\nDeret Maclaurin untuk y = sinh(x):")
    for i in range(n):
        rumus = (x ** (2*i + 1)) / sp.factorial(2*i + 1)  # Rumus deret Maclaurin untuk sinh(x)
        suku += rumus
        print(f"Iterasi {i+1}: Suku = {rumus}, Jumlah Parsial = {suku}")
    return suku

# Fungsi untuk menghitung deret Taylor dari y = sinh(x)
def TaylorSeries_sinh(x, n, a=0):
    suku = 0
    x_sym = sp.symbols('x')  # Definisikan variabel simbolis
    print(f"\nDeret Taylor untuk y = sinh(x) berpusat di x = {a}:")
    for i in range(n):
        # Hitung turunan ke-i dari sinh(x) dan substitusi x = a
        turunan = sp.diff(sp.sinh(x_sym), x_sym, i).subs(x_sym, a)
        rumus = (turunan / sp.factorial(i)) * (x - a)**i  # Rumus umum deret Taylor
        suku += rumus
        print(f"Iterasi {i+1}: Suku = {rumus}, Jumlah Parsial = {suku}")
    return suku

# Fungsi untuk menghitung deret Maclaurin dari y = 1/(1+x)^2
def MaclaurinSeries_b(x, n):
    suku = 0
    print("\nDeret Maclaurin untuk y = 1/(1+x)^2:")
    for i in range(n):
        rumus = ((-1)**i) * (i + 1) * (x**i)  # Rumus deret Maclaurin untuk y = 1/(1+x)^2
        suku += rumus
        print(f"Iterasi {i+1}: Suku = {rumus}, Jumlah Parsial = {suku}")
    return suku

# Fungsi untuk menghitung deret Taylor dari y = 1/(1+x)^2
def TaylorSeries_b(x, n, a=0):
    suku = 0
    x_sym = sp.symbols('x')  # Definisikan variabel simbolis
    print(f"\nDeret Taylor untuk y = 1/(1+x)^2 berpusat di x = {a}:")
    for i in range(n):
        # Hitung turunan ke-i dari 1/(1+x)^2 dan substitusi x = a
        turunan = sp.diff(1 / (1 + x_sym)**2, x_sym, i).subs(x_sym, a)
        rumus = (turunan / sp.factorial(i)) * (x - a)**i  # Rumus umum deret Taylor
        suku += rumus
        print(f"Iterasi {i+1}: Suku = {rumus}, Jumlah Parsial = {suku}")
    return suku

# Input nilai x, jumlah suku (n), dan titik pusat (a)
x_value = 0.2
n_terms = 5
a_value = 0  # Titik pusat (a = 0 untuk deret Maclaurin)

# Hitung deret Maclaurin untuk sinh(x)
print(f"\n=== Soal 5a: y = sinh(x) ===")
hasil_maclaurin_sinh = MaclaurinSeries_sinh(x_value, n_terms)
nilai_sebenarnya_sinh = sp.sinh(x_value)
galat_sinh_maclaurin = abs(nilai_sebenarnya_sinh - hasil_maclaurin_sinh)
print(f"Hasil akhir deret Maclaurin untuk sinh({x_value}): {hasil_maclaurin_sinh}")
print(f"Nilai sebenarnya dari sinh({x_value}): {nilai_sebenarnya_sinh}")
print(f"Galat: {galat_sinh_maclaurin}")

# Hitung deret Taylor untuk sinh(x)
hasil_taylor_sinh = TaylorSeries_sinh(x_value, n_terms, a_value)
galat_sinh_taylor = abs(nilai_sebenarnya_sinh - hasil_taylor_sinh)
print(f"Hasil akhir deret Taylor untuk sinh({x_value}): {hasil_taylor_sinh}")
print(f"Galat: {galat_sinh_taylor}")

# Hitung deret Maclaurin untuk y = 1/(1+x)^2
print(f"\n=== Soal 5b: y = 1/(1+x)^2 ===")
hasil_maclaurin_b = MaclaurinSeries_b(x_value, n_terms)
nilai_sebenarnya_b = (1 / (1 + x_value))**2
galat_b_maclaurin = abs(nilai_sebenarnya_b - hasil_maclaurin_b)
print(f"Hasil akhir deret Maclaurin untuk y = 1/(1+{x_value})^2: {hasil_maclaurin_b}")
print(f"Nilai sebenarnya dari y = 1/(1+{x_value})^2: {nilai_sebenarnya_b}")
print(f"Galat: {galat_b_maclaurin}")

# Hitung deret Taylor untuk y = 1/(1+x)^2
hasil_taylor_b = TaylorSeries_b(x_value, n_terms, a_value)
galat_b_taylor = abs(nilai_sebenarnya_b - hasil_taylor_b)
print(f"Hasil akhir deret Taylor untuk y = 1/(1+{x_value})^2: {hasil_taylor_b}")
print(f"Galat: {galat_b_taylor}")