file1 = open("/home/cumoja1/3320/c/message1.txt", "r")
print(file1)
string = ""
for x in file1:
	string = string + x
print(string)
string2=""
move=9
for char in string:
	string2 = string2 + (chr(((ord(char.lower())-97 + move)% 26 + 97) if chr.isalpha() else char)
print(string2)
