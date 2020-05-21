# Single self-replicating program

FT = exec
CODE = '# Single self-replicating program%c%cFT = exec%cCODE = %c%s%c%cMAIN = %c%c%ctry:%c	with open("Grace_kid.py", "w") as f:%c		f.write(CODE %% (10, 10, 10, 39, CODE, 39, 10, 39, 39, 39, 10, 10, 10, 10, 39, 39, 39, 10, 10, 10))%cexcept:%c	pass%c%c%c%c%cFT(MAIN)%c'
MAIN = '''try:
	with open("Grace_kid.py", "w") as f:
		f.write(CODE % (10, 10, 10, 39, CODE, 39, 10, 39, 39, 39, 10, 10, 10, 10, 39, 39, 39, 10, 10, 10))
except:
	pass'''

FT(MAIN)
