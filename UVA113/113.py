while True:
	try:
		num0 = int(input())
		num1 = int(input())
	except EOFError:
		break

	print(round(num1 ** (1/num0)))