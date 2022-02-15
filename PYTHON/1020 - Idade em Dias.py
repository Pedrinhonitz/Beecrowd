n1 = int(input())

sum1 = n1 // 365
n1 = n1 - sum1 * 365

sum2 = n1 // 30
n1 = n1 - sum2 * 30

print(f"{sum1} ano(s)")
print(f"{sum2} mes(es)")
print(f"{n1} dia(s)")