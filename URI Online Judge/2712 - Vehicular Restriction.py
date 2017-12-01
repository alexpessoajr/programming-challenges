import re

n = int(raw_input())

for _ in xrange(0, n):
  nameplate = raw_input()

  if re.match(r'[A-Z]{3}-[0-9]{4}', nameplate) and len(nameplate) == 8:
    last_digit = nameplate[7]

    if last_digit in '12':
      print 'MONDAY'

    elif last_digit in '34':
      print 'TUESDAY'

    elif last_digit in '56':
      print 'WEDNESDAY'

    elif last_digit in '78':
      print 'THURSDAY'

    elif last_digit in '90':
      print 'FRIDAY'

  else:
    print 'FAILURE'

