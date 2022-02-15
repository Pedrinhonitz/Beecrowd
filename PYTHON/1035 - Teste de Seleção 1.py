n1, n2, n3, n4 = map(int, input().split(" "))

if n2 > n3 and n4 > n1 and (n3 + n4) > (n1 + n2):
    print("Valores aceitos")

else:
    print("Valores nao aceitos")