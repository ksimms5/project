
singles=['zero','one','two','three','four','five','six','seven','eight','nine']
teens=['eleven','twelve','thirteen','fourteen','fifteen','sixteen',
'seventeen','eighteen','nineteen']
multiples=['ten','twenty','thirty','forty','fifty','sixty','seventy','eighty',
'ninety']
finput = input("Type a number")
finput=int(finput)
if finput<10:
	print('The number you entered is: ',singles[finput])
elif finput<20 and finput>10:
	print('The number you entered is: ',teens[finput%10-1])
elif finput%10==0:
	print('The number you entered is:',multiples[int(finput/10)-1])
else:
	print('The number you entered is: %s %s' %(multiples[int(finput/10)-1],singles[finput%10]))


