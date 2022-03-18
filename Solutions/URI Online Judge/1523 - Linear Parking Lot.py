
n, k = [int(x) for x in raw_input().split()]

while n > 0:
	stack = []
	possible = True

	for i in xrange(0, n):
		c, s = raw_input().split()
		x = { 'c': int(c), 's': int(s) }

		if len(stack) > 0:
			t = stack[-1]

			while len(stack) > 0 and t['s'] <= x['c']:
				stack.pop()
				if len(stack) > 0:
					t = stack[-1]

			if len(stack) > 0 and x['s'] > t['s']:
				possible = False

			stack.append(x)

		else:
			stack.append(x)

		if len(stack) > k:
			possible = False

	print "Sim" if possible else "Nao"

	n, k = [int(x) for x in raw_input().split()]

