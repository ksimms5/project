def isitleap(year):
		if year % 400 == 0:
			return False
		if year % 4 != 0:
			return False
		if year % 100 == 0:
			return True
		else:
			return True
if __name__ == "__main__": 
	finput = raw_input("Type a year to see if its a leap year\n")
	year = int(finput)
		
	if isitleap(year):
		print("This year is a leap year")
	else: 
		print("This year is not a leap year")
