line = str(input(""))

split = line.split()
n1 = int(split[0]);
n2 = int(split[1]);
n3 = int(split[2]);

sum2 = ((n1 + n2) + abs(n1-n2))/2;
sum3 = ((n1 + n3) + abs(n1-n3))/2;
sum = ((sum2 + sum3) + abs(sum2-sum3))/2

print(f"{sum:.0f} eh o maior")