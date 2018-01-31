
n = int(raw_input())
names = []
well_behaved = 0

for _ in xrange(0, n):
  b, name = raw_input().split()
  names.append(name)
  if b == '+':
    well_behaved = well_behaved + 1

for name in sorted(names):
  print name

print 'Se comportaram: %d | Nao se comportaram: %d' % (well_behaved, len(names) - well_behaved)

