entrada = input() .split()

codigo = int(entrada[0])
qtd =  int(entrada[1])
resp = 0.0

if codigo == 1:
    resp = 4.0 * qtd
elif codigo == 2:
    resp = 4.5 * qtd
elif codigo == 3:
    resp = 5.0 * qtd
elif codigo == 4:
    resp = 2.0 * qtd
elif codigo == 5:
    resp = 1.5 * qtd
    
print(f"Total: R$ {resp:.2f}" )