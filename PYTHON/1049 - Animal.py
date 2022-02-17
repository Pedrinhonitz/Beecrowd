x = str(input())
y = str(input())
z = str(input())

if x == "vertebrado":
    if y == "ave":
        if z == "carnivoro":
            print("aguia")
        elif z == "onivoro":
            print("pomba")
    if y == "mamifero":
        if z == "onivoro":
            print("homem")
        elif z == "herbivoro":
            print("vaca")
if x == "invertebrado":
    if y == "inseto":
        if z == "hematofago":
            print("pulga")
        elif z == "herbivoro":
            print("lagarta")
    if y == "anelideo":
        if z == "hematofago":
            print("sanguessuga")
        elif z == "onivoro":
            print("minhoca")