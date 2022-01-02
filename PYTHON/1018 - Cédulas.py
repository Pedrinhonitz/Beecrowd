n1 = int(input())
print(n1)

vet = [100, 50, 20, 10, 5, 2, 1]
for vet in vet:
    sum = int(n1 / vet)
    print(f"{sum} nota(s) de R$ {vet},00")
    n1 -= sum * vet