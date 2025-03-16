import sympy as sp

# No 5 A. y = sinh(x)
# deret taylor untuk fungsi y=sinh(x)

def TaylorSeries(x,n):
    suku = 0
    for i in range(n):
        rumus = ((x)**i) * ((x) ** (2*i-1)) / sp.factorial(2*i + 1)
        suku += rumus
    return suku

lalala = TaylorSeries(0.2, 5)

print(lalala)

# deret mclaurin untuk fungsi y=sinh(x)

def MclaurinSeries(x,n):
    sukuu = 0
    for i in range(n):
        rumuss = (x ** (2*i + 1)) / sp.factorial(2*i + 1)
        sukuu += rumuss
    return sukuu
popopo = MclaurinSeries(0.2, 5)

print(popopo)

