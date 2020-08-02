print(" The largest palindrome made by the product of two three digit numbers: ")
maxpal = 0
for i in range(100,999) :
	for j in range(100,999):
		product = i * j
		x = str(product)
		reverseit = ""
		for y in x:
			reverseit = y + reverseit
		if(x == reverseit):
			if maxpal < product:
				maxpal = product
print(maxpal)
