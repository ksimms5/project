import binascii
def dehexit(hexfilepath):
	info = open(hexfilepath, "r").read()
	unhexit = binascii.unhexlify(info)
	print(unhexit)
dehexit("hex_dumpster")
