x = float(input())

if(x<=400.0):
    percent = 15
    sum = x + (x * percent / 100)
    sum1 = x *percent / 100

elif(x<=800.0):
    percent = 12
    sum = x + (x * percent / 100)
    sum1 = x *percent / 100

elif(x<=1200.0):
    percent = 10
    sum = x + (x * percent / 100)
    sum1 = x *percent / 100

elif(x<=2000.0):
    percent = 7
    sum = x + (x * percent / 100)
    sum1 = x *percent / 100

else:
    percent = 4
    sum = x + (x * percent / 100)
    sum1 = x *percent / 100

print(f"Novo salario: {sum:.2f}" )
print(f"Reajuste ganho: {sum1:.2f}")
print(f"Em percentual: {percent} %")