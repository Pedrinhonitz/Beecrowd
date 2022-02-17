x, y, z = input().split()

x = float(x)
y = float(y)
z = float(z)

x1 = float(1)
y1 = float(1)
z1 = float(1)

if x >= y and x >= z:
    x1 = x
    if y >= z:
        y1 = y
        z1 = z
    else:
        y1 = z
        z1 = y
if y >= x and y >= z:
    x1 = y
    if x >= z:
        y1 = x
        z1 = z
    else:
        y1 = z
        z1 = x

if z >= x and z >= y:
    x1 = z
    if x >= y:
        y1 = x
        z1 = y
    else:
        y1 = y
        z1 = x             

if x == y and y == z:
    x1=x
    y1=y
    z1=z

x = x1
y = y1
z = z1

if x >= (y + z):
    print(f'NAO FORMA TRIANGULO')
else:
    if (x ** 2) == (y ** 2 + z ** 2):
        print(f'TRIANGULO RETANGULO')
    if (x ** 2) > (y ** 2 + z ** 2):
        print(f'TRIANGULO OBTUSANGULO')
    if (x ** 2) < (y ** 2 + z ** 2):
        print(f'TRIANGULO ACUTANGULO')
    if (x == y == z):
        print(f'TRIANGULO EQUILATERO')
    if x == y != z or y == z != x or x == z != y:
        print(f'TRIANGULO ISOSCELES')