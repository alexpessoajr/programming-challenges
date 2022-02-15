
commands = {
  '>': '1000',
  '<': '1001',
  '+': '1010',
  '-': '1011',
  '.': '1100',
  ',': '1101',
  '[': '1110',
  ']': '1111'
}

s = 0
binary = ''
p = input()

for c in p:
  binary = binary + commands[c]

for idx, bit in enumerate(reversed(binary)):
  if bit == '1':
    s = s + (1 << idx)

print(s % 1000003)

