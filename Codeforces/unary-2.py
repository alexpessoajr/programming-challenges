
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

binary = ''
p = input()

for c in p:
  binary = binary + commands[c]

print(int(binary, 2) % 1000003)

