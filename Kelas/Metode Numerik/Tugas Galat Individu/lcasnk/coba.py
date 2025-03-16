import sympy as life1
import numpy as life2
import matplotlib.pyplot as plotting

# Define the Taylor series approximation for sin(x)
def dobido(x, n):
    suku = 0
    for i in range(n):
        rumus = ((-1) ** i) * (x ** (2 * i + 1)) / life1.factorial(2 * i + 1)  # Correct formula for sin(x)
        suku += rumus
    return suku

# Generate angles for plotting
angles = life2.arange(-2 * life2.pi, 2 * life2.pi, 0.1)

# Exact sin values
p_sin = life2.sin(angles)

# Taylor series approximation for sin(x) with 3 terms
t_sin = [dobido(angle, 3) for angle in angles]

# Plotting
fig, ax = plotting.subplots()
ax.plot(angles, p_sin, label='sin() function')
ax.plot(angles, t_sin, label='Taylor Series - 3 terms')
ax.set_ylim([-5, 5])
ax.legend()
ax.set_title('Taylor Series Approximation of sin(x)')
plotting.show()

# Exact value of sin(0.2) using numpy
x_value = 0.2
exact = life2.sin(x_value)

# Buat table
table = []

# Hitung deret Maclaurin untuk n = 1 sampai 5
for n in range(1, 6):
    approx = dobido(x_value, n)  # Approksimasi deret Maclaurin
    galat = abs(exact - approx)  # Hitung galat
    table.append([n, approx, galat])  # Masukkan hasil ke table

# Tampilkan table
print("n\tTaylor Thingymajig\t\tGalat")
for row in table:
    print(f"{row[0]}\t{row[1]:.16f}\t{row[2]:.16f}")

print(f"Nilai asli sin({x_value}): {exact}")