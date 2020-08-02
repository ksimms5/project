import binascii
import sys
def file_to_hex_dumpster(readfilepath, writefilepath):
	hex_str = ""
	byte = ""
	with open(readfilepath, "rb") as f:
		byte= f.read(1)
		while byte != "":
			hex_str += binascii.hexlify(byte)
			byte= f.read(1)
	print("Hex array:")
	print(hex_str)
	f = open(writefilepath, "w")
	f.write(hex_str)
	f.close()

file_to_hex_dumpster(sys.argv[1],"hex_dumpster")
	
