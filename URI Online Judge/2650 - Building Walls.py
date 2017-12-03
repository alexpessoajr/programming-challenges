n, w = [int(x) for x in raw_input().split()]

for _ in xrange(0, n):
  data = raw_input().split()
  name = ' '.join(data[:-1])
  height = int(data[-1])

  if height > w:
    print name
