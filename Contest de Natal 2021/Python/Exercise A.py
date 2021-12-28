n = int(input())

brinquedo = 0
alimentos = 0
roupas = 0
calcados = 0
eletronicos = 0
livros = 0
gadgets = 0
phone = 0
jogos = 0
papelaria = 0

for i in range(n):
    name, tipo = input().split(" ")
    name = str(name)
    tipo = int(tipo)

    if tipo == 1:
        brinquedo += 1
    if tipo == 2:
        alimentos +=1
    if tipo == 3:
        roupas +=1
    if tipo == 4:
        calcados +=1
    if tipo == 5:
        eletronicos +=1
    if tipo == 6:
        livros +=1
    if tipo == 7:
        gadgets +=1
    if tipo == 8:
        phone +=1
    if tipo == 9:
        jogos +=1
    if tipo == 10:
        papelaria +=1

print(f"Total de Brinquedos: {brinquedo}")
print(f"Total de Alimentos: {alimentos}")
print(f"Total de Roupas: {roupas}")
print(f"Total de Calcados: {calcados}")
print(f"Total de Eletronicos: {eletronicos}")
print(f"Total de Livros: {livros}")
print(f"Total de Gadgets: {gadgets}")
print(f"Total de Smartphones: {phone}")
print(f"Total de Jogos: {jogos}")
print(f"Total de Papelaria: {papelaria}")
