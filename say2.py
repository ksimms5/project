import sys
# Function to convert single digit or two digit number into words
n = int(input("Enter an integer to convert"))
def convertToDigit(n, suffix):

	# if n is zero
	if n == 0:
		return EMPTY

	# split n if it is more than 19
	if n > 19:
		return Y[n // 10] + X[n % 10] + suffix
	else:
		return X[n] + suffix


# Function to convert a given number (max 9-digits) into words
def convert(n):
	result += convertToDigit((n % 100), "")
	return result
# Python program to convert number to words
if __name__ == '__main__':
	EMPTY = ""

	X = [EMPTY, "One ", "Two ", "Three ", "Four ", "Five ", "Six ",
		 "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ",
		 "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ",
		 "Seventeen ", "Eighteen ", "Nineteen "]

	Y = [EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
		 "Sixty ", "Seventy ", "Eighty ", "Ninety "]

print(convert,n)
