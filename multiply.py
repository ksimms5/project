total=0
for x in range(1,1000):
	if(x % 5 == 0 or x % 3 ==0):
		total =total + x
print("The total of integers below 1000 that are multiples of 3 or 5 is: ")
print(total)
