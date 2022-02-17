x, y, z = input().split(" ")
x= int(x)
y = int(y)
z = int(z)

lista = []

for i in range(1):
    lista.append(x)
    lista.append(y)
    lista.append(z)
    lista.sort()
    print(lista[0])
    print(lista[1])
    print(lista[2])
    
print(f"")

print(f"{x}")
print(f"{y}")
print(f"{z}")