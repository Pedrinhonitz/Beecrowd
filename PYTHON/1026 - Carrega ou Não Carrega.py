while True:
    try:
      n1, n2 = map(int ,input().split())
    except EOFError:
      break
    print(n1 ^ n2)