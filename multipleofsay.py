singles=['zero','one','two','three','four','five','six','seven','eight','nine']
teens=['eleven','twelve','thirteen','fourteen','fifteen','sixteen',
'seventeen','eighteen','nineteen']
multiples=['ten','twenty','thirty','forty','fifty','sixty','seventy','eighty',
'ninety']
def multiple(str) :
	try:
		 i = singles.index(str)
	except:
		try:
			i = teens.index(str)+11
		except:
			i = multiples.index(str)+1
			i = i*10
	return i
str = raw_input('Enter two numbers to multiply by')
str=str.split(' ')
a = multiple(str[0])
b = multiple(str[1])
print("Product is equivalent to :",a*b)
	
