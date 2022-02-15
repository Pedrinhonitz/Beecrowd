n1, n2, n3, n4 = input().split(" ")
n1 = float(n1)
n2 = float(n2)
n3 = float(n3)
n4 = float(n4)

n5 = n1 * 2
n6 = n2 * 3
n7 = n3 * 4
n8 = n4 * 1

sum = n5 + n6 + n7 + n8
div = sum / 10

if div >= 7:
    print(f"Media: {div:.1f}")
    print(f"Aluno aprovado.")

elif div <= 4.9:
    print(f"Media: {div:.1f}")
    print(f"Aluno reprovado.")
else:
    print(f"Media: {div:.1f}")
    print(f"Aluno em exame.")
    n55 = float(input())
    print(f"Nota do exame: {n55}")
    somam = n55 + div
    div2 = somam / 2
    if somam >= 5:
        print(f"Aluno aprovado.")
        print(f"Media final: {div2:.1f}")
    else:
        print(f"Aluno reprovado.")
        print(f"Media final: {div2:.1f}")