
for _ in range(int(input())):
  n = int(input())
  r = n % 7
  
  if r <= (n % 10):
    print(n - r)
  else:
    print(n - r + 7)

