# This is a Quine

c = "\n\"\\\t%"

def fnc():
	return

if __name__ == "__main__":
	fnc()
	# Yep, still a Quine
	code = "# This is a Quine%c%cc = %c%cn%c%c%c%c%ct%c%c%c%cdef fnc():%c%creturn%c%cif __name__ == %c__main__%c:%c%cfnc()%c%c# Yep, still a Quine%c%ccode = %c%s%c%c%cprint(code %c (c[0], c[0], c[1], c[2], c[2], c[1], c[2], c[2], c[2], c[4], c[1], c[0], c[0], c[0], c[3], c[0], c[0], c[1], c[1], c[0], c[3], c[0], c[3], c[0], c[3], c[1], code, c[1], c[0], c[3], c[4]))"
	print(code % (c[0], c[0], c[1], c[2], c[2], c[1], c[2], c[2], c[2], c[4], c[1], c[0], c[0], c[0], c[3], c[0], c[0], c[1], c[1], c[0], c[3], c[0], c[3], c[0], c[3], c[1], code, c[1], c[0], c[3], c[4]))
