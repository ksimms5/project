from os import system
binary_data = open("/home/ksimms5/lab6/hello","rb").read()
f = open("./copyhello","wb")
f.write(binary_data)
f.close()
print("New binary file:")
system("chmod 777 copyhello;./copyhello")
