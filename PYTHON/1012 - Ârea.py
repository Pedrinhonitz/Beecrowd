n1, n2, n3 = map(float, input().split(" "))

sum1 = n1 + n2

PA = n1 * n3 /2
PB = n3 * n3 * 3.14159
PC =  sum1 * n3 /2
PD = n2 * n2
PE = n1 * n2

print(f"TRIANGULO: {PA:.3f}")
print(f"CIRCULO: {PB:.3f}")
print(f"TRAPEZIO: {PC:.3f}")
print(f"QUADRADO: {PD:.3f}")
print(f"RETANGULO: {PE:.3f}")