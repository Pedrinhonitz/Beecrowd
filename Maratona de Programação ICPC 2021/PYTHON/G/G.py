n1 = int(input())
n2 = int(input())

sum, rest = n2//(n1-1), n2%(n1-1)
count = sum
if rest>0:
    count += 1
print(count) 
