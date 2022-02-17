x, y = map(int, input().split())
sum = 24 - x + y

if (x == y):
    print("O JOGO DUROU 24 HORA(S)")

elif (x <= y):
    print(f"O JOGO DUROU {y-x} HORA(S)")

elif (x >= y):
    print(f"O JOGO DUROU {sum} HORA(S)")