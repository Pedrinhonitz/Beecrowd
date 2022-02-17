x, y = map(int, input() .split())

if (x % y == 0) or (y % x == 0):
    print(f"Sao Multiplos")
else:
    print(f"Nao sao Multiplos")