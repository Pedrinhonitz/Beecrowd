x, y, z = input().split(" ")
x = float(x)
y = float(y)
z = float(z)

if abs(y - z) < x < (y + z) and (x - z) < y < (x + z) and (x - y) < z < (x + y):
    sum = x + y + z
    print(f"Perimetro = {sum:.1f}")
else:
    sum1 = ((x + y) / 2) * z
    print(f"Area = {sum1:.1f}")