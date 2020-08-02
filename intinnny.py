finput = raw_input("Type an integer")
print(finput)
print("input type")
print(type(finput))
try: 
	i= int(finput)
	print("integer conversion: ")
	print(i)
	print("converted to type")
	print(type(i))
except:
	print("Sorry this not an int. Try again")
