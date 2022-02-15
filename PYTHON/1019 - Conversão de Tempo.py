n1 = int(input())
n2 = n1 // 60**2
n1 = n1 - n2 * 60**2

sum1 = n1 // 60
n1 = n1 - sum1*60

print(f"{n2}:{sum1}:{n1}")