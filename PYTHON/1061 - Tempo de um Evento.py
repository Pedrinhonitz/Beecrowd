x = input().split()
x1 = input().split()
y = input().split()
y1 = input().split()

z, z1 = int(x[1]), int(y[1])
v, v1, v2 = int(x1[0]), int(x1[2]), int(x1[4])
w, w1, w2 = int(y1[0]), int(y1[2]), int(y1[4])

segTime = 60
hourTime = segTime * 60
dayTime = hourTime * 24

sum = v2 + v1 * segTime + v * hourTime + z * dayTime
sum1 = w2 + w1 * segTime + w * hourTime + z1 * dayTime

if sum < sum1:
    time = sum1 - sum
    day = int(time / dayTime)
    
    time = time % dayTime
    hour = int(time / hourTime)
    
    time = time % hourTime
    minute = int(time / segTime)
    
    time = time % segTime
    seg = time
    
    print(f'{day} dia(s)')
    print(f"{hour} hora(s)")
    print(f"{minute} minuto(s)")
    print(f"{seg} segundo(s)")