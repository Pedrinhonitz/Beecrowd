n1, n2, n3 = input().split(" ")
n4, n5, n6 = input().split(" ")

n1=int(n1)
n2=int(n2)
n3=float(n3)
n4=int(n4)
n5=int(n5)
n6=float(n6)

sum1 = n2 * n3
sum2 = n5 * n6  
total = sum1 + sum2

print(f"VALOR A PAGAR: R$ {total:.2f}")