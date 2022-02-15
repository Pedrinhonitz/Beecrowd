A, B, C = input().split(" ")

A = float(A)
B = float(B)
C = float(C)

if A == 0.0 or (B ** 2 - 4 * A * C) < 0:
    print(f"Impossivel calcular")

else:
    x1 = (-B + (B ** 2 - 4 * A * C) ** (1/2))/(2 * A)
    x2 = (-B - (B ** 2 -4 * A * C) ** (1/2))/(2 * A)
    print(f"R1 = {x1:.5f}")
    print(f"R2 = {x2:.5f}")