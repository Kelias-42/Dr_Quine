#include <stdio.h>

/*
	I like trains
*/

static char c[] = "\n\"\\\t";

void fnc()
{
	int a = 1;
}

int main(void)
{
/*
	I also like airplanes
*/
	fnc();
	char *prog = "#include <stdio.h>%c%c/*%c%cI like trains%c*/%c%cstatic char c[] = %c%cn%c%c%c%c%ct%c;%c%cvoid fnc()%c{%c%cint a = 1;%c}%c%cint main(void)%c{%c/*%c%cI also like airplanes%c*/%c%cfnc();%c%cchar *prog = %c%s%c;%c%cprintf(prog, c[0], c[0], c[0], c[3], c[0], c[0], c[0], c[1], c[2], c[2], c[1], c[2], c[2], c[2], c[1], c[0], c[0], c[0],c[0], c[3], c[0], c[0], c[0], c[0], c[0], c[0], c[3], c[0],c[0], c[3], c[0], c[3], c[1], prog, c[1], c[0], c[3], c[0], c[0]);%c}%c";
	printf(prog, c[0], c[0], c[0], c[3], c[0], c[0], c[0], c[1], c[2], c[2], c[1], c[2], c[2], c[2], c[1], c[0], c[0], c[0],c[0], c[3], c[0], c[0], c[0], c[0], c[0], c[0], c[3], c[0],c[0], c[3], c[0], c[3], c[1], prog, c[1], c[0], c[3], c[0], c[0]);
}
