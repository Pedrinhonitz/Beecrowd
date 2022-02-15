import math

while True:
    try:
        z, x, y, z2, x2, y2 = map(int, input().split(" "))
        sum = math.sqrt(((x2 - x) * (x2 - x)) + ((y2 - y) * (y2 - y)))
        if (z - sum) >= z2:
            print(f"RICO")
        else:
            print(f"MORTO")
    except EOFError:
        break