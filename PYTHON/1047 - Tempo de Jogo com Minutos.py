vet = input().split()
x, x1, y, y1 = vet

x = int(vet[0])
x1 = int(vet[1])
y = int(vet[2])
y1 = int(vet[3])

if x < y:
    sum = y - x
    if x1 < y1:
        sum1 = y1 - x1
    if x1 > y1:
        sum = sum - 1
        sum1 = (60 - x1) + y1
    if x1 == y1:
        sum1 = 0
if x > y:
    sum = (24 - x) + y
    if x1 < y1:
        sum1 = y1 - x1
    if x1 > y1:
        sum = sum - 1
        sum1 = (60 - x1) + y1
    if x1 == y1:
        sum1 = 0
if x == y:
    if x1 < y1:
        sum1 = y1 - x1
        sum = 0
    if x1 > y1:
        sum1 = (60 - x1) + y1
        sum = 23
    if x1 == y1:
        sum = 24
        sum1 = 0
    
print(f'O JOGO DUROU {sum} HORA(S) E {sum1} MINUTO(S)')