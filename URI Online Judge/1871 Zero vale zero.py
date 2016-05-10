
while True:

	n = raw_input().split(' ')
	n = int(n[0]) + int(n[1])
	n = str(n)
	
	if n == '0':
		break
	
	without_zeros = ''
	
	for i in range(len(n)):
		if n[i] != '0':
			without_zeros = without_zeros + n[i]
	
	print without_zeros
