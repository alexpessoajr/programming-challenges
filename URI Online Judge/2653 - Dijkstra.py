
jewels = {}

while True:
  try:
    j = raw_input()
    jewels[j] = True
  except EOFError:
    break

print len(jewels)