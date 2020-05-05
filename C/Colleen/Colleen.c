#include <stdio.h>

/*
	I like trains
*/

static char c[] = "\n\"\\\t";

void fnc()
{
	return;
}

int main(void)
{
/*
	I also like airplanes
*/
	fnc();
	char *prog = "#include <stdio.h>%c%c/*%c%cI like trains%c*/%c%cstatic char c[] = %c%cn%c%c%c%c%ct%c;%c%cvoid fnc()%c{%c%creturn;%c}%c%cint main(void)%c{%c/*%c%cI also like airplanes%c*/%c%cfnc();%c%cchar *prog = %c%s%c;%c%cprintf(prog, c[0], c[0], c[0], c[3], c[0], c[0], c[0], c[1], c[2], c[2], c[1], c[2], c[2], c[2], c[1], c[0], c[0], c[0],c[0], c[3], c[0], c[0], c[0], c[0], c[0], c[0], c[3], c[0],c[0], c[3], c[0], c[3], c[1], prog, c[1], c[0], c[3], c[0], c[0]);%c}%c";
	printf(prog, c[0], c[0], c[0], c[3], c[0], c[0], c[0], c[1], c[2], c[2], c[1], c[2], c[2], c[2], c[1], c[0], c[0], c[0],c[0], c[3], c[0], c[0], c[0], c[0], c[0], c[0], c[3], c[0],c[0], c[3], c[0], c[3], c[1], prog, c[1], c[0], c[3], c[0], c[0]);
}
